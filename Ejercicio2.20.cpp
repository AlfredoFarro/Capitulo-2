/*(Diametro, circunferencia y area de un circulo) Escriba un programa que lea el radio de un círculo como un entero e imprima el diametro 
del circulo, la circunferencia y el area. Use el valor constante 3.14159 para ?. Realice todos los calculos en instrucciones de salida.*/

#include <iostream>

using namespace std;
/*
test1
r=2
diametro=4
circunferencia=12.5664
area=12.5664

test2
r=5
diametro=10
circunferencia=31.4159
area=78.5397
*/
int main()
{
	//Entrada
	int r;
	double diametro;
	double circunferencia;
	double area;

	//Restricciones
	/*
	r no debe ser caracter ni decimal
	*/
	
	//Logica
	cout << "Esriba el radio del circulo: ";
	cin >> r;

	diametro = 2 * r;
	circunferencia = 3.14159*diametro;
	area = 3.14159*(r*r);
	
	//Salida
	cout << "El diametro es: " << diametro << endl;
	cout << "La circunferencia es: " << circunferencia << endl;
	cout << "El area es: " << area << endl;
	system("PAUSE");
}