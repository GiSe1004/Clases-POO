#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "ingrese el numero de filas que desea: "; cin >> n;
	char caracter;
	cout << " ingrese el caracter: "; cin >> caracter;


	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			cout << caracter << " ";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
