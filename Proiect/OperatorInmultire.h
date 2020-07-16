#pragma once
#include "OperatiiMatematice.h"
class OperatorInmultire :
	public OperatiiMatematice
{
private:
	double rezultatInmultire;
protected:
	double rezultat() { return rezultatInmultire; }
public:
	OperatorInmultire(double a, double b) { rezultatInmultire = a * b; };
	~OperatorInmultire() {};
};

