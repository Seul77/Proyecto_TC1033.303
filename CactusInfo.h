#ifndef CACTUSINFO_H
#define CACTUSINFO_H
#include <iostream>
using namespace std;

#include "PlantaInfo.h"

class CactusInfo : public PlantaInfo {
    private:
    float nivelEspinas;
    public:
    CactusInfo(string n, string nc, int e, bool t, float p, float ne): PlantaInfo(n, nc, e, t, p) {
        nivelEspinas = ne;
    }
    float getNivelEspinas() {
        return nivelEspinas;
    }
    void setNivelEspinas(float ne) {
        nivelEspinas = ne;
    }
    void mostrarInfo() {
        PlantaInfo::mostrarInfo();
        cout << "Nivel de espinas: " << nivelEspinas << " espinas/cm²" << endl;
    }
};

#endif