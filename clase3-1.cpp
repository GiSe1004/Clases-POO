
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float a;
	float b;
	
	
	

	cout << "Diga el primer numero:  "; cin >> a;
	cout << "Diga el segundo número:  "; cin >> b;

	float x = a / b;

	cout << "La division real sera: " << x << endl;
	cout << "la division exacta sera:  " <<  fixed << setprecision(0) << x << endl;
	
	
	system("pause");
	return 0;
}
