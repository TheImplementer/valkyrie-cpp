#include "decompressors_provider.hpp"
#include "zero_decompressor_factory.hpp"

std::vector<DecompressorFactory>
DecompressorsProvider::provide()
{

    const std::vector<DecompressorFactory> factories();
    factories.push_back(ZeroDecompressorFactory());
    return factories;
}
