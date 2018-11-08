#include <iostream>
using namespace std;

class Crectangulo{
    private:
        int area;
        //int perimetro;
    public:
        Crectangulo(int);
        void Area();
        //void Perimetro();
};

Crectangulo::Crectangulo(int _area) {
    area = _area;
    //perimetro = _perimetro;
}
void Crectangulo::Area(){
    int x,y;
    cout << "Indique una base: " << endl;
    cin >> x;
    cout << "Indique una altura: " << endl;
    cin >> y;
    cout << "El area es: " << x*y << endl;
    cout << "El perimetro es: " << 2*x+2*y << endl;

}
int main() {
    Crectangulo r1= (0);
    r1.Area();
    return 0;
}
