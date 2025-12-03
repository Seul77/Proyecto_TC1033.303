#ifndef PLANTACUIDADOS_H
#define PLANTACUIDADOS_H
#include <iostream>
using namespace std;

class PlantaCuidados {
    protected: 
    int riegoPorSemana;
    string tipoTierra;
    float temperaturaOptima;
    public:
    PlantaCuidados(int r, string t, float temp) {
        riegoPorSemana = r;
        tipoTierra = t;
        temperaturaOptima = temp;
    }
    int getRiegoPorSemana() {
        return riegoPorSemana;
    }
    string getTipoTierra() {
        return tipoTierra;
    }
    float getTemperaturaOptima() {
        return temperaturaOptima;
    }
    void setRiegoPorSemana(int r) {
        riegoPorSemana = r;
    }
    void setTipoTierra(string t) {
        tipoTierra = t;
    }
    void setTemperaturaOptima(float temp) {
        temperaturaOptima = temp;
    }

    void mostrarCuidados() {
        cout << "- Riego por semana: " << riegoPorSemana << " veces\n";
        cout << "- Tipo de tierra: " << tipoTierra << endl;
        cout << "- Temperatura óptima: " << temperaturaOptima << " °C\n";
    }
};

#endif