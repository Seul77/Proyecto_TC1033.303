#ifndef CARNIVORACUIDADOS_H
#define CARNIVORACUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

// Clase que hereda de PlantaCuidados y agrega cuidados para plantas carnívoras
class CarnivoraCuidados : public PlantaCuidados {
    private:
    string tamañoInsectoIdeal;   // Tamaño de insecto recomendado para alimentar la planta
    int InsecotosPorSemana;      // Cantidad aproximada de insectos por semana

    public:
    // Constructor: envía datos básicos a la clase base y asigna los atributos propios
    CarnivoraCuidados(int r, string t, float temp, string tam, int insec): PlantaCuidados(r, t, temp) {
        tamañoInsectoIdeal = tam;     // Guarda el tamaño ideal de insecto
        InsecotosPorSemana = insec;   // Guarda la cantidad semanal de insectos
    }

    // Devuelve el tamaño del insecto ideal
    string getTamañoInsectoIdeal() {
        return tamañoInsectoIdeal;
    }

    // Devuelve la cantidad de insectos por semana
    int getInsectosPorSemana() {
        return InsecotosPorSemana;
    }

    // Cambia el tamaño de insecto ideal
    void setTamañoInsectoIdeal(string tam) {
        tamañoInsectoIdeal = tam;
    }

    // Cambia la cantidad de insectos por semana
    void setInsectosPorSemana(int insec) {
        InsecotosPorSemana = insec;
    }

    // Muestra los cuidados heredados y los específicos de plantas carnívoras
    void mostrarCuidados() {
        PlantaCuidados::mostrarCuidados();  // Llama al método de la clase base
        cout << "- Tamaño de insecto ideal: " << tamañoInsectoIdeal << endl;
        cout << "- Insectos por semana: " << InsecotosPorSemana << " insectos\n";
    }
};
#endif
