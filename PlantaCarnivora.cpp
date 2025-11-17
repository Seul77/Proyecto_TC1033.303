#include <iostream>
#include <string>
using namespace std;

class PlantaCarnivora {
private:
    string tipo;
    string familia;
    int trampas;


public:
    PlantaCarnivora(string t, int tr, string fam) {
        tipo = t;
        trampas = tr;
        familia = fam;
    }



    void mostrarInfo() {
        cout << "Planta Carnivora:" << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Numero de trampas: " << trampas << endl;
        cout << "Familia: " << familia << endl;
    }
};