#include "Calculare.h"
OperatiiMatematice *aduna, *scade, *inmultire, *impartire, *putere;

Calculare::Calculare(char semn, double a, double b)
{
	switch (semn)
	{
	case '+': {aduna = new OperatorPlus(a, b); rezultat = aduna->get_rezultat(); delete aduna; break; }
	case '-': {scade = new OperatorMinus(a, b); rezultat = scade->get_rezultat(); delete scade; break; }
	case '*': {inmultire = new OperatorInmultire(a, b); rezultat = inmultire->get_rezultat(); delete inmultire; break; }
	case '/': {impartire = new OperatorImpartire(a, b); rezultat = impartire->get_rezultat(); delete impartire; break; }
	case '^': {putere = new OperatorPutere(a, b); rezultat = putere->get_rezultat(); delete putere; break; }
	case 's': {Functii f; rezultat = f.set_sin(a); break; }
	case 'c': {Functii f; rezultat = f.set_cos(a); break; }
	case 't': {Functii f; rezultat = f.set_tan(a); break; }
			  //case '+': { OperatorPlus adunare(n, n1);rezultat = adunare.get_RezultatPlus(); break; }
			  //case '-': { OperatorMinus scadere(n, n1); rezultat = scadere.get_rezultatMinus(); break; }
	}
}

Calculare::~Calculare() {}
