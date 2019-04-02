//2.30(Calculadora del indice de masa corporal)
#include<iostream>
using namespace std;
/*
test 1
peso=60
alt=1.65
IMC=22.03

test 2
peso=58
alt=1.59
IMC=22.94
*/
int main()
{
	//Entrada
	double imc, peso, alt;

	//Restricciones
	/*
	peso debe estar en kilogramos y no debe ser un caracter
	alt debe estar en metros y no debe ser un caracter
	*/

	//Logica
	cout << "Escriba su peso y altura";
	cin >> peso >> alt;

	imc = peso / (alt * alt);

    //Salida
	cout << "Su IMC es: " << imc << endl << endl;

	cout << "Valores del IMC" << endl;
	cout << "Bajo peso: menos de 18.5" << endl;
	cout << "Normal: entre 18.5 y 24.9" << endl;
	cout << "Sobrepeso: entre 25 y 29.9" << endl;
	cout << "Obeso: 30 o mas" << endl << endl;

	system("PAUSE");
}