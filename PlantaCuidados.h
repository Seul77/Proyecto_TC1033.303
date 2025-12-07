#ifndef PLANTACUIDADOS_H        
#define PLANTACUIDADOS_H
#include <iostream>
using namespace std;

// Clase base PlantaCuidados
class PlantaCuidados {
    protected:         // Atributos accesibles por clases hijas
    int riegoPorSemana;      // Cantidad de veces que se riega a la semana
    string tipoTierra;       // Tipo de tierra que requiere
    float temperaturaOptima; // Temperatura ideal para la planta

    public:
    // Constructor que inicializa los atributos
    PlantaCuidados(int r, string t, float temp) {
        riegoPorSemana = r;
        tipoTierra = t;
        temperaturaOptima = temp;
    }

    // Getters
    int getRiegoPorSemana() {
        return riegoPorSemana;
    }
    string getTipoTierra() {
        return tipoTierra;
    }
    float getTemperaturaOptima() {
        return temperaturaOptima;
    }

    // Setters
    void setRiegoPorSemana(int r) {
        riegoPorSemana = r;
    }
    void setTipoTierra(string t) {
        tipoTierra = t;
    }
    void setTemperaturaOptima(float temp) {
        temperaturaOptima = temp;
    }

    // Mostrar información de cuidados
    void mostrarCuidados() {
        cout << "- Riego por semana: " << riegoPorSemana << " veces\n";
        cout << "- Tipo de tierra: " << tipoTierra << endl;
        cout << "- Temperatura óptima: " << temperaturaOptima << " °C\n";
    }
};

#endif 
