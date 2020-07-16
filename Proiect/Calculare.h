#pragma once
#include "Evaluare.h"
#include "OperatiiMatematice.h"
#include "OperatorPlus.h"
#include "OperatorMinus.h"
#include "OperatorInmultire.h"
#include "OperatorImpartire.h"
#include "OperatorPutere.h"
#include "Functii.h"

class Calculare :
	public Evaluare
{
public:
	Calculare(char semn, double a, double b);
	~Calculare();
	double rezultat;
};

