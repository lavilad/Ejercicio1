#include<iostream>
using namespace std;

int main()
{
	int gf, gc;
	
	cout << "Valor de grados fahrenheit: ";
	cin >> gf;
	
	gc = ((gf - 32) * 5) / 9;
	cout << gf << " GF = " << gc << " GC " << endl;
	
	return 0;
}