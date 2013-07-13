#ifndef DECOMPRESSORSPROVIDER_H
#define DECOMPRESSORSPROVIDER_H

#include <vector>

#include "Decompressor.hpp"

class DecompressorsProvider
{
	public:
		static std::vector<Decompressor*> provide();
};

#endif