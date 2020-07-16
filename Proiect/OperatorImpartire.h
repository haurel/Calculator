#pragma once
#include "OperatiiMatematice.h"
class OperatorImpartire :
	public OperatiiMatematice
{
private:
	double rezultatImpartire;
protected:
	double rezultat() { return rezultatImpartire; }
public:
	OperatorImpartire(double a, double b) { rezultatImpartire = a / b; };
	~OperatorImpartire() {};
};

