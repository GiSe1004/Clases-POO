#include "iostream"
#include <cmath>
#include <iomanip>
#include <conio.h>

using namespace std;

void potencia (int *ptr, int n){
    *ptr=pow(*ptr,n);
    cout << *ptr;

}
int main () {
    int x;
    int pot;

    cout << "ingrese x: " ;
    cin >> x;
    cout << "ingrese exponente: ";
    cin >> pot;

    potencia(&x, pot);
    cout << "\npotencia:" << potencia;
    return 0;


}
