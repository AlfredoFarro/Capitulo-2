/*2.16 (Aritmética)Escriba un programa que pida al usuario que escriba dos numeros, 
obtenga esos dos numeros del usuario e imprima la suma, producto, diferencia y cociente de los dos numeros.*/

#include <iostream>

using namespace std;
/*
test 1
numero1=8
numero2=4
suma=12
diferencia=4
producto=32
cociente=2

test 2
numero1=9
numero2=3
suma=12
diferencia=6
producto=27
cociente=3
*/
int main()
{
	//Entrada
	int numero1;
	int numero2;
	int suma;
	int diferencia;
	int producto;
	int cociente;

	//Restricciones
	/*
	numero1 no debe ser caracteres ni decimales
	numero2 no debe ser caracteres, decimales, ni igual a 0
	*/
	
	//Logica
	cout << "Escriba dos enteros: ";
	cin >> numero1 >> numero2;

	suma = numero1 + numero2;
	diferencia = numero1 - numero2;
	producto = numero1 * numero2;
	cociente = numero1 / numero2;
	
	//Salida
	cout << "La suma es: " << suma << endl;
	cout << "La diferencia es: " << diferencia << endl;
	cout << "El producto es: " << producto << endl;
	cout << "El cociente es: " << cociente << endl;

    system("PAUSE");

}