#include <iostream>
#include <string>
using namespace std;

class Flor {
private:
    string nombre;
    string color;
    int altura;

public:
    Flor(string n, string c, int h) {
        nombre = n;
        color = c;
        altura = h;
    }


    void mostrarInfo() {
        cout << "Flor:" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Color: " << color << endl;
        cout << "Altura: " << altura << " cm" << endl;
    }
};