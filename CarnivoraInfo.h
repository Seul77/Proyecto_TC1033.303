#ifndef CARNIVORAINFO_H
#define CARNIVORAINFO_H

#include <iostream>
using namespace std;
#include "PlantaInfo.h"

class Carnivora : public PlantaInfo {
    private:
    string tipotrampa;
    public:
    Carnivora(string n, string nc, int e, bool t, float p, string tipot): PlantaInfo(n, nc, e, t, p) {
        tipotrampa = tipot;
    }    
    string getTipoTrampa() {
        return tipotrampa;
    }
    void setTipoTrampa(string tipot) {
        tipotrampa = tipot;
    }
    void mostrarInfo() {
        PlantaInfo::mostrarInfo();
        cout << "Tipo de trampa: " << tipotrampa << endl;
    }
};

#endif