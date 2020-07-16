#pragma once
#include "OperatiiMatematice.h"
class OperatorPutere :
	public OperatiiMatematice
{
private:
	double rezultatPutere;
protected:
	double rezultat() { return rezultatPutere; }
public:
	OperatorPutere(double a, double b) { rezultatPutere = pow(a, b); };
	~OperatorPutere() {};
};

