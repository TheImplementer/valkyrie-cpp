#ifndef DECOMPRESSORS_PROVIDER_H
#define DECOMPRESSORS_PROVIDER_H

#include <vector>

#include "Decompressor.hpp"

class DecompressorsProvider
{
	public:
		static std::vector<Decompressor*> provide();
};

#endif
