#include<iostream>
using namespace std;

int main()
{
	float npies, npul, nyar, nmts, ncms;
	
	cout << "Pies: ";
	cin >> npies;
	
	npul = npies * 12;
	nyar = npies / 3;
	nmts = npies / 3.281;
	ncms = npies * 30.48;
	
	cout << "Pulgadas: " << npul << endl;
	cout << "Yardas: " << nyar << endl;
	cout << "Metros: " << nmts << endl;
	cout << "Centimetros: " << ncms << endl;
	
	return 0;
}
