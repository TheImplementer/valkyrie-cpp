#ifndef LZSSFILE_H
#define LZSSFILE_H

#include <istream>
#include <vector>

#include "Decompressor.hpp"

class LzssFile
{
	public:
		void parse(std::istream&);
		void setDecompressors(const std::vector<Decompressor*>&);
		std::vector<Decompressor*> getDecompressors() const;
	private:
		static const int SIGNATURE_SIZE = 4;
		std::vector<Decompressor*> decompressors_;
};

#endif