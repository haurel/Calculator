#include "Convertire.h"

Convertire::Convertire(string inText)
{
	int k = 0;
	for (unsigned x = 0; x < inText.length(); x++)
	{
		if (isdigit(inText[x]))
		{
			textReturnat += inText[x];
		}
		else if (isspace(inText[x]))
		{
			continue;
		}
		else if (OperatorMatematic(inText[x]))
		{
			textReturnat += " ";
			while ((!StivaCaractere.empty()) &&
				(OrdineOperatii(StivaCaractere.top()) >= OrdineOperatii(inText[x])))
			{
				textReturnat += StivaCaractere.top();
				StivaCaractere.pop();
			}
			StivaCaractere.push(inText[x]);
		}
		else if (inText[x] == '(')
		{
			StivaCaractere.push(inText[x]);
			textReturnat += " ";
			textReturnat += inText[x];
			textReturnat += " ";
		}
		else if (inText[x] == ')')
		{
			while ((!StivaCaractere.empty()) && (StivaCaractere.top() != '('))
			{
				textReturnat += " ";
				textReturnat += StivaCaractere.top();
				StivaCaractere.pop();
			}
			if (StivaCaractere.top() == '(')
			{
				textReturnat += " ";
				textReturnat += ')';
			}
			if (!StivaCaractere.empty())
			{
				StivaCaractere.pop();
			}
		}
	}

	while (!StivaCaractere.empty())
	{
		textReturnat += " ";
		textReturnat += StivaCaractere.top();
		StivaCaractere.pop();
	}
}

Convertire::~Convertire() {}

bool Convertire::OperatorMatematic(char semn)
{
	switch (semn)
	{
	case '+':  case'-':  case'*':  case'/': case'c':  case's':  case't': case '^':
		return true; break;
	default: return false; break;
	}
}

int Convertire::OrdineOperatii(char semn)
{
	switch (semn)
	{
		// Prioritatea pentru sin, cos, tg
	case 'c': case 's': case 't':
		prioritate = 4;
		break;
		// Prioritatea pentru ^
	case '^':
		prioritate = 3;
		break;
		// Prioritatea pentru * /
	case '*': case '/':
		prioritate = 2;
		break;
		// Prioritatea pentru + - 
	case '+': case '-':
		prioritate = 1;
		break;
		// Prioritate pentru paranteze
	case '(': case ')':
		prioritate = 0;
		break;
	}
	return prioritate;
}
