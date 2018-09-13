#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	int N = 0;
	int s = 0;
	int s2 = 0;

	cout << "Diga el numero: "; cin >> N;
	
	int y = log(N) / log(2);
	int potencia = pow(2, y);


	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 0) 
		{
			s += i;
		}
		s2 += i * i;

	}
	
	cout << "suma de pares: " << s << endl;
	cout << "suma de cuadrados: " << s2 << endl;
	cout << "potencia de 2 mas cercana: " << potencia << endl;
	
	
	system("pause");
	return 0;
}
