// Ejercicio 2.31.cpp : Este archivo contiene la funci�n "main". La ejecuci�n del programa comienza y termina ah�.
//
/* Ejercicio 2 de la hoja 2: Que teniendo como dato una hora expresada en segundos (t), nos calcule y muestre la
  cantidad de horas, minutos y segundos contenidos en dicha hora */

#include <iostream>

using namespace std;

int main()
{
	//Entrada
	int t;
	unsigned int horas, minutos, segundos;

	//L�gica
	cout << "Ingrese hora expresada en segundos : ";
	cin >> t;

	horas = (t / 3600);
	minutos = ((t % 3600) / 60);
	segundos = (t % 60);

	//Salida
	cout << "Horas: " << horas << "\n";
	cout << "Minutos: " << minutos << "\n";
	cout << "Segundos: " << segundos << "\n";
	system("pause");
}
