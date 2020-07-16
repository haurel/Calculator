#pragma once
#include <stack>
#include <vector>
#include <iostream>
using namespace std;

class Convertire
{
// textReturn folosit pentru mostenire, prioritate folosit pentru
// metoda OrdineOperatii si pentru mostenire.
protected:
	stack<char> StivaCaractere;
	string textReturnat;
	int prioritate = 0;
//Constructor, destructor si metodele folosite.
public:
	Convertire() {}
	Convertire(string inText);
	~Convertire();
	string get_textReturnat() {return textReturnat;}
	bool OperatorMatematic(char semn);
	int OrdineOperatii(char semn);
};

