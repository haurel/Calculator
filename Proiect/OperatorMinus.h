#pragma once
#include "OperatiiMatematice.h"
class OperatorMinus :
	public OperatiiMatematice
{
private:
	double rezultatMinus;
protected:
	double rezultat() { return rezultatMinus; }
public:
	OperatorMinus(double a, double b) { rezultatMinus = a - b; };
	~OperatorMinus() {};
};

