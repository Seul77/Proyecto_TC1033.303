#ifndef FLORCUIDADOS_H
#define FLORCUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

// Clase derivada que agrega cuidados específicos para flores
class FlorCuidados : public PlantaCuidados {
    private:
    string nivelagua;               // Cantidad o frecuencia de riego necesario
    bool necesitaFertilizante;      // Indica si requiere fertilizante
    bool necesitaCortarTallos;      // Indica si se deben podar los tallos

    public:
    // Constructor que primero inicializa atributos heredados y luego los propios
    FlorCuidados(int r, string t, float temp, string na, bool nf, bool nct): PlantaCuidados(r, t, temp) {
        nivelagua = na;                 // Se asigna el nivel de agua
        necesitaFertilizante = nf;      // Guarda si necesita fertilizante
        necesitaCortarTallos = nct;     // Guarda si se requiere cortar tallos
    }

    // Devuelve el nivel de agua
    string getNivelAgua() {
        return nivelagua;
    }

    // Indica si necesita fertilizante
    bool getNecesitaFertilizante() {
        return necesitaFertilizante;
    }

    // Indica si necesita cortar tallos
    bool getNecesitaCortarTallos() {
        return necesitaCortarTallos;
    }

    // Modifica nivel de agua
    void setNivelAgua(string na) {
        nivelagua = na;
    }

    // Modifica necesidad de fertilizante
    void setNecesitaFertilizante(bool nf) {
        necesitaFertilizante = nf;
    }

    // Modifica necesidad de cortar tallos
    void setNecesitaCortarTallos(bool nct) {
        necesitaCortarTallos = nct;
    }

    // Muestra los cuidados heredados y específicos para flores
    void mostrarCuidados() {
        PlantaCuidados::mostrarCuidados();  // Llama al método base
        cout << "- Nivel de agua: " << nivelagua << endl;
        cout << "- Necesita fertilizante: " << (necesitaFertilizante ? "Sí" : "No") << endl;
        cout << "- Necesita cortar tallos: " << (necesitaCortarTallos ? "Sí" : "No") << endl;
    }
};

#endif
