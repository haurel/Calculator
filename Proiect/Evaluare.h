#pragma once

#include "Convertire.h"
#include <string>
#include <stack>
#include <msclr\marshal_cppstd.h>
using namespace std;

class Evaluare :
	public Convertire
{
private:
	stack<double> old;
	char semn;
	double a, b, result;
	string salvareText;
public:
	Evaluare() { }
	Evaluare(string inText);
	~Evaluare();
	double get_result() { return result; }
};

