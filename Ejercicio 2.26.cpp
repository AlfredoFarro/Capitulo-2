// Ejercicio 2.26.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//
/*Ejercicio 1 de la hoja 2: Que calcule y muestre el menor n�mero de monedas de 5,2 y 1 para desglosar una cantidad C, de Soles */
#include <iostream>

using namespace std;
int main()
{
	//Entrada
	int Soles, M5, M2, M1;

	//L�gica
	cout << "Inserte la cantidad de soles: ";
	cin >> Soles;
	M5 = Soles / 5;
	M2 = (Soles % 5) / 2;
	M1 = ((Soles % 5) % 2) / 1;

	//Salida
	cout << "Menor numero de monedas de 5: " << M5 << endl;
	cout << "Menor numero de monedas de 2: " << M2 << endl;
	cout << "Menor n�mero de monedas de 1: " << M1 << endl;
	system("pause");
	return 0;
}
