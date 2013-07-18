#include <cassert>
#include <stdexcept>

#include "LzssFile.hpp"

void
LzssFile::parse(std::istream& stream)
{
	assert(stream.good());
	
	char* signature = new char[SIGNATURE_SIZE];
	stream.read(signature, SIGNATURE_SIZE);
	
	Decompressor* decompressor = nullptr;
	for (auto it = decompressors_.begin(); it != decompressors_.end(); it++) {
		if ((*it)->accept(std::string(signature))) {
			decompressor = *it;
		}
	}
	
	if (decompressor == nullptr) {
		throw std::runtime_error("unsupported file compression");
	}
}

void
LzssFile::setDecompressors(const std::vector<Decompressor*>& decompressors)
{
	decompressors_ = decompressors;
}

std::vector<Decompressor*>
LzssFile::getDecompressors() const
{
	return decompressors_;
}
	
