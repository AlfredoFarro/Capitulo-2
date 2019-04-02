/*(Multiplos) Escriba un programa que lea dos enteros, determine e imprima si el primero es multiplo del segundo */

#include<iostream>
using namespace std;
/*
test 1
num1=4
num2=2
resultado=El primero es multiplo del segundo

test 2
num1=5
num2=2
resultado=El primero no es multiplo del segundo
*/
int main()
{
	//Entrada
	int num1;
	int num2;

	//Restricciones
	/*
	
	num1 no debe ser menor a num2
	num1 no debe ser caracter ni decimal
	num2 no debe ser mayor a num1
	num2 no debe ser caracter ni decimal
	*/

	//Logica y Salida
	cout << "Escriba dos entros";
	cin >> num1 >> num2;

	if (num1%num2 == 0)
		cout << "El primero es multiplo del segundo" << endl;
	if (num1%num2 != 0)
		cout << "El primero no es multiplo del segundo" << endl;
	system("PAUSE");
}