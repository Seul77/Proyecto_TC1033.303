#ifndef CACTUSINFO_H
#define CACTUSINFO_H
#include <iostream>
using namespace std;

#include "PlantaInfo.h"

// Clase derivada de PlantaInfo que agrega información específica de cactus
class CactusInfo : public PlantaInfo {
    private:
    float nivelEspinas;   // Cantidad aproximada de espinas por centímetro cuadrado

    public:
    // Constructor que inicializa primero la parte heredada y luego el atributo propio
    CactusInfo(string n, string nc, int e, bool t, float p, float ne): PlantaInfo(n, nc, e, t, p) {
        nivelEspinas = ne;   // Se asigna el valor recibido
    }

    // Devuelve el nivel de espinas
    float getNivelEspinas() {
        return nivelEspinas;
    }

    // Modifica el nivel de espinas
    void setNivelEspinas(float ne) {
        nivelEspinas = ne;
    }

    // Muestra información heredada + información específica del cactus
    void mostrarInfo() {
        PlantaInfo::mostrarInfo(); // Llama a la función mostrarInfo de la clase base
        cout << "Nivel de espinas: " << nivelEspinas << " espinas/cm²" << endl;
    }
};

#endif
