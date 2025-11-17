#include <iostream>
using namespace std;

#include "Plantaflor.cpp"
#include "PlantaCarnivora.cpp"
#include "PlantaCactus.cpp"

int main() {

    Flor flor1("Rosa", "Rojo", 30);
    Cactus cactus1("Nopal", true, 4);
    PlantaCarnivora pc1("Venus", 5, "Dionaea muscipula");

    flor1.mostrarInfo();

    cout << endl;

    cactus1.mostrarInfo();

    cout << endl;

    pc1.mostrarInfo();

    return 0;
}