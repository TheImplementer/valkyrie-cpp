#ifndef ZERODECOMPRESSOR_H
#define ZERODECOMPRESSOR_H

#include <vector>

#include "decompressor.hpp"

class ZeroDecompressor : public Decompressor
{
public:
    ~ZeroDecompressor();

    const std::vector<char> decompress(const std::vector<char> &) const;
};

#endif
