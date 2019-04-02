/*(Impar o par) Escriba un programa que lea un entero, determine e imprima si es impar o par.*/

#include <iostream>

using namespace std;
/*
test 1
numero1=8
resultado: El entero es par

test 2
numero1=13
resultado: El entero es impar
*/
int main()
{
	//Entrada
	int numero1;

	//Restricciones
	/*
	numero1 no debe ser caracter ni decimal
	*/

	//Logica y Salida
	cout << "Escriba el entero: ";
	cin >> numero1;

	if (numero1 % 2 == 0)
		cout << "El entero es par" << endl;
	if (numero1 % 2 != 0)
		cout << "El entero es impar" << endl;

	system("PAUSE");
}