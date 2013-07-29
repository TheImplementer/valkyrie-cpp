#ifndef ZERO_DECOMPRESSOR_FACTORY_H
#define ZERO_DECOMPRESSOR_FACTORY_H

#include <memory>
#include <string>

#include "decompressor_factory.hpp"

class ZeroDecompressorFactory : public DecompressorFactory
{
public:
	bool isInterested(const std::string&) const;
	const Decompressor provide() const;
};

#endif