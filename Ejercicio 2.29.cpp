/*(Tabla) Utilice las tecnicas de este capitulo para escribir un programa que calcule los cuadrados y cubos de los enteros del 0 al 10.*/

#include <iostream>

using namespace std;
int main()
{
	//Entrada y Salida
	int entero, cuadrado, cubo;
	cout << "entero\tcuadrado\tcubo\n";
	for (entero = 0; entero <= 10; entero++)
	{
		cuadrado = entero *entero;
		cubo = entero * entero * entero;

		
		cout << entero << "\t" << cuadrado << "\t\t" << cubo << endl;


	}


	system("PAUSE");
}