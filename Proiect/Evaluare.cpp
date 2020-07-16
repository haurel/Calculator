#include "Evaluare.h"
#include "Convertire.h"
#include "Calculare.h"

Evaluare::Evaluare(string inText)
{
	//stack<double> _old;
	double oldSecundar1 = 0.0;
	double oldSecundar2 = 0.0;
	char d;
	string temp = "";
	int sizeinText = inText.size();
	int size = 0;
	double numar = 0;
	for (int x = 0; x < sizeinText; x++)
	{
		d = inText[x];
		if (isdigit(d)) {
			temp += d;
			size++;
		}
		else if (d == ' ' && temp != "")
		{
			for (int j = 0; j < size; j++)
			{
				//numar += (temp[j] - '0') * pow(10, size - 1 - j);
				numar = numar * 10 + (temp[j] - '0');
			}
			old.push(numar);
			temp = "";
			size = 0;
			numar = 0;
		}
		else if (d == '(') 
		{
			StivaCaractere.push(d); 
			if (!old.empty())
			{
				oldSecundar1 = old.top();
				old.pop();
			}
		}
		else if (d == ')')
		{
			StivaCaractere.pop();
			if (!(oldSecundar1 == 0.0))
			{
				oldSecundar2 = 0;
				oldSecundar2 = old.top();
				old.push(oldSecundar1);
				old.push(oldSecundar2);
			}
		}
		else if (OperatorMatematic(d) && (!old.empty()))
		{
			if (d == 's' || d == 'c' || d == 't')
			{
				b = 0;
				a = old.top();
				old.pop();
				Calculare calcul(d, a, b);
				result = calcul.rezultat;
				old.push(result);
			}
			else if (old.size() > 1)
			{
				b = old.top(); old.pop();
				a = old.top(); old.pop();
				Calculare calcul(d, a, b);
				result = calcul.rezultat;
				old.push(result);
			}
			else if (old.size() < 2)
			{
				b = old.top(); old.pop();
				a = 0;
				Calculare calcul(d, a, b);
				result = calcul.rezultat;
				old.push(result);
			}
		}
		
	}
	if (!old.empty())
	{
		result = old.top();
	}
	result;
}
Evaluare::~Evaluare() {}
