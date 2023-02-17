
#include "iostream"

using namespace std;

int main()
{
	
	int base;
	int altura;
	
	
	cout << "Calculadora de un Rectangulo " << "\n" << "Ingresa el valor deseado de la base " << "\n" ;
	 
	cin >> base;
	
	cout << "Ingresa el valor de la Altura " << "\n";
	
	cin >> altura;
	
	cout << "El area del rectangulo es " << (base*altura) << " y su perimetro es de " << (2*base + 2*altura);
	
}

