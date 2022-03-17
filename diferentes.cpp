#include <iostream>
using namespace std;

int main (){
	int num, num2, num3;
	cout << "Dame un numero: " ;
	cin >> num;
    cout << "Dame otro numero: " ;
	cin >> num2;
	cout << "Dame otro numero: " ;
	cin >> num3;
	
	if (num > num2 && num> num3){
		cout << "El numero" << num << " es el mayor.";
	} else if (num2 > num && num2 > num3 ){
		cout << "El numero" << num << " es el mayor.";
	} else if (num3 > num && num3 > num2 ){
		cout << "El numero" << num3 << " es el mayor.";
	} else {
		cout << "Los numeros son son iguales!";
	}
		
	
