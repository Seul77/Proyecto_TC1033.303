#ifndef FLORCUIDADOS_H
#define FLORCUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

class FlorCuidados : public PlantaCuidados {
    private:
    string nivelagua;
    bool necesitaFertilizante;
    bool necesitaCortarTallos;
    public:
    FlorCuidados(int r, string t, float temp, string na, bool nf, bool nct): PlantaCuidados(r, t, temp) {
        nivelagua = na;
        necesitaFertilizante = nf;
        necesitaCortarTallos = nct;
    }
    string getNivelAgua() {
        return nivelagua;
    }
    bool getNecesitaFertilizante() {
        return necesitaFertilizante;
    }
    bool getNecesitaCortarTallos() {
        return necesitaCortarTallos;
    }
    void setNivelAgua(string na) {
        nivelagua = na;
    }
    void setNecesitaFertilizante(bool nf) {
        necesitaFertilizante = nf;
    }
    void setNecesitaCortarTallos(bool nct) {
        necesitaCortarTallos = nct;
    }
    void mostrarCuidados() {
        PlantaCuidados::mostrarCuidados();
        cout << "- Nivel de agua: " << nivelagua << endl;
        cout << "- Necesita fertilizante: " << (necesitaFertilizante ? "Sí" : "No") << endl;
        cout << "- Necesita cortar tallos: " << (necesitaCortarTallos ? "Sí" : "No") << endl;
    }  

};

#endif