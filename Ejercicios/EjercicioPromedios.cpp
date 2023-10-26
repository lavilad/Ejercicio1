#include<iostream>
using namespace std;

int main()
{
	int c1, c2, c3, c4, prom;
		
	cout << "Calificacion 01: ";
	cin >> c1;
	cout << "Calificacion 02: ";
	cin >> c2;
	cout << "Calificacion 03: ";
	cin >> c3;
	cout << "Calificacion 04: ";
	cin >> c4;
		
	prom = (c1 + c2 + c3 + c4) / 4;
	
	system("cls");
	
	cout << "Promedio: " << prom << endl;
	if (prom >= 65)
	{ cout << "¡Aprobado!"; }
	else
	{ cout << "¡Reprobado!"; }
		
	return 0;
}