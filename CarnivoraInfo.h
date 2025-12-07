#ifndef CARNIVORAINFO_H
#define CARNIVORAINFO_H

#include <iostream>
using namespace std;
#include "PlantaInfo.h"

// Clase derivada de PlantaInfo para plantas carnívoras
class Carnivora : public PlantaInfo {
    private:
    string tipotrampa;   // Tipo de mecanismo de trampa que usa la planta 

    public:
    // Constructor: inicializa primero los atributos heredados y luego el atributo específico
    Carnivora(string n, string nc, int e, bool t, float p, string tipot): PlantaInfo(n, nc, e, t, p) {
        tipotrampa = tipot;   // Se asigna el valor recibido a tipotrampa
    }

    // Devuelve el tipo de trampa
    string getTipoTrampa() {
        return tipotrampa;
    }

    // Modifica el tipo de trampa
    void setTipoTrampa(string tipot) {
        tipotrampa = tipot;
    }

    // Muestra información heredada + información propia de plantas carnívoras
    void mostrarInfo() {
        PlantaInfo::mostrarInfo(); // Llama al método de la clase base
        cout << "Tipo de trampa: " << tipotrampa << endl;
    }
};

#endif
