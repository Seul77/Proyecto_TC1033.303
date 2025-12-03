#ifndef CARNIVORACUIDADOS_H
#define CARNIVORACUIDADOS_H
#include <iostream>
using namespace std;
#include "PlantaCuidados.h"

class CarnivoraCuidados : public PlantaCuidados {
    private:
    string tamañoInsectoIdeal;
    int InsecotosPorSemana;
    public:
    CarnivoraCuidados(int r, string t, float temp, string tam, int insec): PlantaCuidados(r, t, temp) {
        tamañoInsectoIdeal = tam;
        InsecotosPorSemana = insec;
    }
    string getTamañoInsectoIdeal() {
        return tamañoInsectoIdeal;
    }
    int getInsectosPorSemana() {
        return InsecotosPorSemana;
    }
    void setTamañoInsectoIdeal(string tam) {
        tamañoInsectoIdeal = tam;
    }
    void setInsectosPorSemana(int insec) {
        InsecotosPorSemana = insec;
    }
    void mostrarCuidados() {
        PlantaCuidados::mostrarCuidados();
        cout << "- Tamaño de insecto ideal: " << tamañoInsectoIdeal << endl;
        cout << "- Insectos por semana: " << InsecotosPorSemana << " insectos\n";
    }
    

};
#endif