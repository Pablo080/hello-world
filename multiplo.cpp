#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int numero, resto;
	cout << "Dame un numero: ";
	cin >> numero;
	resto = numero%5;
	if (resto==0)
	cout << "El numero " << numero << "es multiplo de 5 ";
	else 
	cout << "El numero " << numero << "no es multiplo de 5 ";
	return 0;
}
