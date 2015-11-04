#include <iostream>
#include "Singleton.h"

using namespace std;

int main ()
{
	int choice;

	do
	{
		cout << "--------------------" << endl;
		cout << "[1] - Factory (Fabryka)" << endl;
		cout << "[2] - Builder (Budowniczy)" << endl;
		cout << "[3] - Singleton (Singleton)" << endl;
		cout << "[4] - Facade (Fasada)" << endl;
		cout << "[5] - Observer (Obserwator)" << endl;
		cout << "[6] - Exit (Wyjscie)" << endl;

		cout << "--------------------" << endl;
		cout << "Choice 1 with 6 " << endl;  
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "not implement :( " << endl;
			break;

		case 2:
			cout << "not implement :( " << endl;
			break;

		case 3:
			Singleton *wsk[3];
			wsk[0] = Singleton::getInstance();
			wsk[0]->method();

			wsk[1] = Singleton::getInstance();
			wsk[1]->method();

			wsk[2] = Singleton::getInstance();
			wsk[2]->method();

			if (wsk[0] == wsk[1])
			{
				cout << "The same pointers" << endl;
			}
			else
			{
				cout << "not the same pointers" << endl;
			}

			if (wsk[1] == wsk[2])
			{
				cout << "The same pointers" << endl;
			}
			else
			{
				cout << "not the same pointers" << endl;
			}

			break;

		case 4:
			cout << "not implement :( " << endl;
			break;

		case 5:
			cout << "not implement :( " << endl;
			break;

		case 6:
			exit(0);
			break;

		default:
			cout << "Another number from 1 - 6 , choice once again " << endl;
			break;
		}
	}
	while (true);


	return 0;
}