/*(Comparación de enteros) Escriba un programa que pida al ususario que escriba dos enteros, 
obtenga los numeros del usuario y luego imprima el numero mas grande, seguido de las palabras "es más grande". 
Si los numeros son iguales, imprimir el mensaje "Estos numeros son iguales".*/

#include <iostream>

using namespace std;
/*
test 1
numero1=5
numero2=3
resultado: 5 es mas grande

test 2
numero1=8
numero2=8
resultado: Estos numeros son iguales
*/
int main()
{
	//Entrada
	int numero1;
	int numero2;

	//Restricciones
	/*
	numero1 no debe ser caracteres ni decimales
	numero2 no debe ser caracteres ni decimales
	*/

	//Logica y Salida
	cout << "Escriba dos enteros a comparar: ";
	cin >> numero1 >> numero2;

	if (numero1 > numero2)
		cout << numero1 << " es mas grande" << endl;
	if (numero2 > numero1)
		cout << numero2 << " es mas grande" << endl; 
	if (numero1 == numero2)
		cout << "Estos numeros son iguales" << endl;
	system("PAUSE");


}