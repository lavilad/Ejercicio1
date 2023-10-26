#include<iostream>
using namespace std;

int main()
{
	
	const float PRECIO_VENTA = 200.00;
	
	int numVtas = 0;
	float totalVta = 0, subTotal = 0, totalDes = 0, pordesc = 0;
		
	cout << "Ingrese total venta: ";
	cin >> numVtas;
	cout << endl;
	
	/*if (numVtas >= 10)
	{
		if (numVtas >= 20)
		{
			if (numVtas >= 30) 
			{ pordesc = .4; }
			else
			{ pordesc = .2; }
		}
		else
		{ pordesc = .1;	}
	}
	else
	{ pordesc = 0; }*/
	
	if (numVtas >= 10 && numVtas < 20)
	{ pordesc = .1; }
	else if (numVtas >= 20 && numVtas < 30)
	{ pordesc = .2; }
	else if (numVtas >= 30)
	{ pordesc = .4; }
		
	// Calculo de importes
	subTotal = (numVtas * PRECIO_VENTA);
	totalDes = subTotal * pordesc;
	totalVta = subTotal - totalDes;
	
	cout << "Precio p/pieza: $" << PRECIO_VENTA << endl;
	cout << "Sub total: $" << subTotal << endl;
	if (pordesc > 0) 
	{ 
		// Si existe un descuento, se detalla el mismo
		cout << "Aplicar " <<  (pordesc *100) << "%" << endl; 
		cout << "Descuento: $" << totalDes  << endl;
	}
	cout << "Importe total: $" << totalVta  << endl;
		
}
