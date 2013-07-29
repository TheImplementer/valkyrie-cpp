#ifndef DECOMPRESSOR_FACTORY_H
#define DECOMPRESSOR_FACTORY_H

#include <memory>
#include <string>

#include "selectable.hpp"

class DecompressorFactory : public Selectable 
{
public:
	virtual bool isInterested(const std::string&) const = 0;
	virtual const Decompressor provide() const = 0;
};

#endif