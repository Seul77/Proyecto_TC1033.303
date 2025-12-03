#ifndef FLORINFO_H
#define FLORINFO_H
#include <iostream>
using namespace std;
#include "PlantaInfo.h" 

class FlorInfo : public PlantaInfo {
    private:
    float duracionFloracion;
    float tamañoFlor;
    string colorFlor;
    public:
    FlorInfo(string n, string nc, int e, bool t, float p, float df, float tf, string cf): PlantaInfo(n, nc, e, t, p) {
        duracionFloracion = df;
        tamañoFlor = tf;
        colorFlor = cf;
    }
    float getDuracionFloracion() {
        return duracionFloracion;
    }
    float getTamañoFlor() {
        return tamañoFlor;
    }
    string getColorFlor() {
        return colorFlor;
    }
    void setDuracionFloracion(float df) {
        duracionFloracion = df;
    }
    void setTamañoFlor(float tf) {
        tamañoFlor = tf;
    }
    void setColorFlor(string cf) {
        colorFlor = cf;
    }
    void mostrarInfo() {
        PlantaInfo::mostrarInfo();
        cout << "Duración de floración: " << duracionFloracion << " días" << endl;
        cout << "Tamaño de la flor: " << tamañoFlor << " cm" << endl;
        cout << "Color de la flor: " << colorFlor << endl;
    }
    
};
#endif