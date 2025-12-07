#ifndef CACTUSCUIDADOS_H
#define CACTUSCUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

// Clase derivada que hereda de PlantaCuidados
class CactusCuidados : public PlantaCuidados {
    private:
    float nivelLuzSolar;  // Horas de luz solar que necesita el cactus
    bool necesitaPoda;    // Indica si el cactus requiere poda

    public:
    // Constructor con atributos heredados y propios
    CactusCuidados(int r, string t, float temp, float luz, bool poda): PlantaCuidados(r, t, temp) {
        nivelLuzSolar = luz;     // Se asigna el valor recibido a nivelLuzSolar
        necesitaPoda = poda;     // Se asigna el valor recibido a necesitaPoda
    }

    // Retorna el nivel de luz solar requerido
    float getNivelLuzSolar() {
        return nivelLuzSolar;
    }

    // Retorna si requiere poda o no
    bool getNecesitaPoda() {
        return necesitaPoda;
    }

    // Cambia el valor de luz solar
    void setNivelLuzSolar(float luz) {
        nivelLuzSolar = luz;
    }

    // Cambia si necesita o no poda
    void setNecesitaPoda(bool poda) {
        necesitaPoda = poda;
    }

    // Muestra datos
    void mostrarCuidados() {
        // Llama al método de la clase base
        PlantaCuidados::mostrarCuidados();
        // Muestra datos del cactus
        cout << "- Nivel de luz solar: " << nivelLuzSolar << " horas diarias\n";
        cout << "- Necesita poda: " << (necesitaPoda ? "Sí" : "No") << endl;
    }
};
#endif
