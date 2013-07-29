#ifndef DECOMPRESSORS_PROVIDER_H
#define DECOMPRESSORS_PROVIDER_H

#include <vector>

#include "decompressor_factory.hpp"

class DecompressorsProvider
{
	public:
        static std::vector<DecompressorFactory> provide();
};

#endif
