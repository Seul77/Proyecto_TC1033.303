#ifndef CACTUSCUIDADOS_H
#define CACTUSCUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

class CactusCuidados : public PlantaCuidados {
    private:
    float nivelLuzSolar;
    bool necesitaPoda;
    public:
    CactusCuidados(int r, string t, float temp, float luz, bool poda): PlantaCuidados(r, t, temp) {
        nivelLuzSolar = luz;
        necesitaPoda = poda;
    }
    float getNivelLuzSolar() {
        return nivelLuzSolar;
    }
    bool getNecesitaPoda() {
        return necesitaPoda;
    }
    void setNivelLuzSolar(float luz) {
        nivelLuzSolar = luz;
    }
    void setNecesitaPoda(bool poda) {
        necesitaPoda = poda;
    }
    void mostrarCuidados() {
        PlantaCuidados::mostrarCuidados();
        cout << "- Nivel de luz solar: " << nivelLuzSolar << " horas diarias\n";
        cout << "- Necesita poda: " << (necesitaPoda ? "Sí" : "No") << endl;
    }
    

};
#endif