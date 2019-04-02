/*PROBLEMA 3 HOJA 3*/
#include <iostream>
using namespace std;
void main()
{
	long long N15;
	long long p1;
	long long p2;
	long long p3;
	cout << "dame un numero de 15 digitos "; cin >> N15;
	p3= N15 % 100000;
	p1 = N15 / 10000000000;
	p2 = (N15 % 10000000000) / 100000;
	cout << "suma: " << p1 + p2 + p3 << endl;


	system("PAUSE");

} 
