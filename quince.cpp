#include <iostream>

using namespace std;

int main (){
	int userNum, intentosMax, userIntentos, secretNum;
	intentosMax = 6;
	secretNum = 98;
	userIntentos = 0;
	
	do{
	
	 cout << "Intento" << userIntentos+1 << endl;
	 cout << "Dame un numero del 1 al 100: ";
	 cin >> userNum;
	 
	if (userNum == secretNum){
		cout << "Es el numero correcto:";
} else {
		if (userNum>secretNum)
			cout << "Te has pasado: ";
		
		if (userNum<secretNum)
			cout << "Frio: ";
	}

	userIntentos++;
	}while (userIntentos != intentosMax);
	


	
	
	return 0;
}
