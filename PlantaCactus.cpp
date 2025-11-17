#include <iostream>
#include <string>
using namespace std;

class Cactus {
private:
    string especie;
    bool espinas;
    int edad;

public:
    Cactus(string e, bool tieneEspinas, int a) {
        especie = e;
        espinas = tieneEspinas;
        edad = a;
    }


    void mostrarInfo() {
        cout << "Cactus:" << endl;
        cout << "Especie: " << especie << endl;
        cout << "Tiene espinas: " << espinas << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};