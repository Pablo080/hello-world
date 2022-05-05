#include <iostream>

using namespace std;

int main(){
	// Variables
	int numEntero1; // Creo una variable entera.
	float numReal; // Creo una variable real.
	numEntero1 = 0; // Doy valor a una variable.
	
	// Arrays
	int numsEnteros[5]; // Creo un array con 5 posiciones
	numsEnteros = {10, 30, 2, 69, 43};
	 // Damos valor al array
	
	// Las posiciones de un array son: 0, 1, 2, 3, 4, ...
	int posicion1 = numsEnteros[0];
	
	//Recorrer un array
	for(int i=0; i < 5; i++){
		cout << "Valor en posicion " << i+1 << endl;
		cout << numsEnteros[i];
	}
	
	// Entrada salida
	cout << "Dame un numero entero: "; // Salida de un texto.
	cin >> numEntero1;	// Entrada a una variable.
	
	// Condicionales
	if (numEntero1>100){
		// Si es cierto hago esto.
	} else if (numEntero<10){
		// Si no es cierto lo primero pero
		// es cierto lo segundo hago esto.
	} else {
		// Si ninguno de los dos es cierto hago esto.
	}
	
	switch (numEntero1){
		case 0: // Hago algo si es 0
			break;
		case 1: // Hago algo si es 1
			break;
		case 2:
		case 3:
		case 4: // Hago algo si es 2 a 4
			break;
		default: // Hago algo si no es ninguno anterior.
	}
	
	// Bucles
	int contador = 0;
	while(contador < 10){
		// Mientras sea cierto, voy a hacer esto.
		contador++;
	}
	
	do{
		contador++;
	} while(contador < 10);
	
	for(int i=0;i<10;i++){
		// Hace esto, como maximo, 10 veces.
	}
	return 0;
}
