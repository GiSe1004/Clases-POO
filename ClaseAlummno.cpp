#include <iostream>

using namespace std;

class Persona {
private:
    int edad;
    string nombres;
    string apellido;
    string direccion;

public:
    Persona(int,string,string,string);

    void edad1();
    void nombres1();
    void apellido1();
    void direccion1();

};

Persona::Persona(int _edad, string _nombre, string _apellido, string _direccion) {
    edad = _edad;
    nombres = _nombre;
    apellido = _apellido;
    direccion = _direccion;


}


void Persona::edad1(){
    int x=0;
    cout << "Edad: ";
    cin >> edad;
    edad=x;
}

void Persona::nombres1() {

    cout << "Nombre: ";
    cin >> nombres;
}
void Persona::apellido1(){
    cout << "Apellido: ";
    cin >> apellido;

}

void Persona::direccion1(){
    cout << "Dirrecion: ";
    cin >> direccion;

}

int main(){
    Persona a1= Persona(0,"","","");
    a1.edad1();
    a1.nombres1();
    a1.apellido1();
    a1.direccion1();


    return 0;
}
