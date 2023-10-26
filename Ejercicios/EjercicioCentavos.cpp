#include<iostream>
using namespace std;

int main()
{
	float nccinco, ncdiez, ncveinte, ntotal;
	
	cout << "Monedas de 5 centavos: ";
	cin >> nccinco;
	
	cout << "Monedas de 10 centavos: ";
	cin >> ncdiez;
	
	cout << "Monedas de 20 centavos: ";
	cin >> ncveinte;
	
	ntotal = (nccinco * .5);
	cout << ntotal << endl;
	ntotal += (ncdiez * .10);
	cout << ntotal << endl;;
	ntotal += (ncveinte * .20);
	cout << ntotal << endl;
	
	cout << "Total: " << ntotal;
	
}