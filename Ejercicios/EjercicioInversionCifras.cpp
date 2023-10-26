#include<iostream>
using namespace std;

int main()
{
	/*int n1, n2, n3;
	
	cout << "Ingrese 3 numeros: ";
	cin >> n1;
	cin >> n2;
	cin >> n3;
	
	cout << "Inversion de cifras" << endl;
	cout << n3 << n2 << n1 << endl;*/
	
	int numero, uds, dec, cent;
	
	cout << "Ingresar numero de 3 digitos: ";
	cin >> numero;
	
	uds = (numero % 100) % 10;
	dec = (numero %100) / 10;
	cent = numero / 100;
	
	cout << endl << uds << dec << cent;
		
	return 0;
}