#pragma once
#include "OperatiiMatematice.h"
class OperatorPlus :
	public OperatiiMatematice
{
private:
	double rezultatPlus;
protected:
	double rezultat() { return rezultatPlus; }
public:
	OperatorPlus(double a, double b) {rezultatPlus = a + b;};
	~OperatorPlus() {};
};

