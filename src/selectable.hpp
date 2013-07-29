#ifndef SELECTABLE_H
#define SELECTABLE_H

#include <string>

class Selectable 
{
public:
	virtual bool isInterested(const std::string&) const = 0;
};

#endif