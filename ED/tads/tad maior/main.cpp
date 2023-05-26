#include <iostream>
#include "maior.hpp"

using namespace std;

int main()
{

	Maior maior = Maior();

	maior.insere(6);
	maior.insere(4);
	maior.insere(5);

	cout << "Array não ordenado: ";
	maior.imprime();

	// cout << "Array ordenado: ";
	// maior.ordenar();

	cout << "Maior elemento: ";
	int m = maior.buscaMaior();
	cout << m << endl;

	return 0;
}
