#include "zero_decompressor.hpp"
#include "zero_decompressor_factory.hpp"

bool
ZeroDecompressorFactory::isInterested(const std::string& signature)
{
    return std::string("SLZ\0") == signature;
}

const Decompressor
ZeroDecompressorFactory::provide()
{
    return ZeroDecompressor();
}
