#ifndef DECOMPRESSOR_H
#define DECOMPRESSOR_H

#include <vector>

class Decompressor
{
	public:
		virtual ~Decompressor();

        virtual std::vector<char> decompress(const std::vector<char>&) const = 0;
};

#endif
