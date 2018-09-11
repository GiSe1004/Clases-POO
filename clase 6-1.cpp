#include "stdafx.h"
#include <iostream>

using namespace std;



int main()
{
	int num;
	int contador=0;
	int pares = 0;
	int impares = 0;
	
	cout << "numero: "; cin >> num;

	do {
		cout << "numero: "; cin >> num;
		contador++;
		

		if (num % 2 == 0) 
		{
			pares += 1;

		}
		else
		{
			impares += 1;

		}
	} while (num !=0);

	
	{
		cout << "numeros totales: " << contador << endl;
		cout << "numeros pares: " << pares << endl;
		cout << "numeros impares: " << impares << endl;
	}
