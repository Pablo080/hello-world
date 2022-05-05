#include <iostream>

using namespace std;

int main(){
	int datos[10];
	int menor;
	for (int i=0; i<11;i++){
	cout << "Dame un numero entero: ";
	cin >> datos[i]; 
		
	}
	
	menor = datos [0];
	for (int i=1; i<11;i++){
	if (datos[i]<menor){
		menor=datos[i];
	}
}
	cout << "El menor de la lista es: " << menor;
	
	return 0;
}
