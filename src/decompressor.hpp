#ifndef DECOMPRESSOR_H
#define DECOMPRESSOR_H

#include <string>
#include <vector>

class Decompressor
{
	public:
		virtual ~Decompressor();
	
		virtual bool accept(const std::string&) const = 0;
		virtual std::vector<char>& decompress(const std::vector<char>&) const = 0;
};

#endif