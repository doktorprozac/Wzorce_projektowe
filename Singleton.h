/* 
1. metoda sprawdza, czy obiekt zosta� utworzony
a) je�li obiekt nie zostal utworzony, to go tworzy i zwaraca do niego referencje 
b) gdy obiekt by� wcze�niej utworzony to zwraca jest do niego referencja

2) deklaruje si� konstruktor o dost�pie prywatnym lub chronionym - zapewnia, �e tylko ta metoda tworzy obiekt

*/
#include <iostream>

using namespace std;

class Singleton 
{
	static Singleton *single;

	Singleton () // konstruktor domyslny
	{
	}
	Singleton (const Singleton &s) // konstruktor kopiujacy
	{
	}

public:
	static Singleton *getInstance();

	void method();

};

Singleton *Singleton::single = NULL;

Singleton *Singleton::getInstance()
{
	if (single == NULL)
	{
		single = new Singleton;
		return single;
	}
	else
	{
		return single;
	}
}

void Singleton::method()
{
	cout << "Method of the singleton class " << endl;
}
