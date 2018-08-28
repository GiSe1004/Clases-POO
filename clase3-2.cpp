
#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
const  double PI = 3.1415;


int main()
{
	float radianes,sexagesimales;
	cout << "Diga el angulo en RAD's: "; cin >> radianes;
	
	sexagesimales = radianes * 180 / PI;

	cout << " El angulo en S sera: " << sexagesimales << endl;
	system("pause");
	
	return 0;
}
