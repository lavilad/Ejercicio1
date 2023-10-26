 #include<iostream>
 #include<iomanip>
using namespace std;

int main()
{
	float npantalones, ncamisas, ppantalon, pcamisa, ftotal, fimpto, fsubtotal, tpantalones, tcamisas;
	
	cout << "Numero de pantalones: ";
	cin >> npantalones;
	cout << "Precio: ";
	cin >> ppantalon;
		
	cout << "Numero de camisas: ";
	cin >> ncamisas;
	cout << "Precio: ";
	cin >> pcamisa;
	
	tpantalones = (npantalones * ppantalon);
	tcamisas = (ncamisas * pcamisa);
	
	fsubtotal = tpantalones + tcamisas;
	fimpto = fsubtotal * .16;
	ftotal = fsubtotal + fimpto;
	
	system("cls");
	
	cout << "Pantalones:" << setw(15) << "$" << (npantalones * ppantalon) << endl;
	cout << "Camisas:" << setw(15) << "$" << (ncamisas * pcamisa) << endl;
	cout << "Subtotal:" << setw(15) << "$" << fsubtotal << endl;
	cout << "IVA:" << setw(15) << "$" << fimpto << endl;
	cout << "Total:" << setw(15) << "$" << ftotal << endl;
	
	return 0;
}