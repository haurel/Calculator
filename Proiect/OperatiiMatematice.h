#pragma once
#include <iostream>
class OperatiiMatematice
{
protected:
	virtual double rezultat() { return NULL; };
public:
	OperatiiMatematice() {};
	~OperatiiMatematice() {};
	double get_rezultat() { return rezultat(); };
};

