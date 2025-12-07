#ifndef PLANTA_H
#define PLANTA_H

#include "PlantaInfo.h"
#include "PlantaCuidados.h"

class Planta {
private:
    PlantaInfo info;
    PlantaCuidados cuidados;

public:
    Planta(PlantaInfo i, PlantaCuidados c) : info(i), cuidados(c) {}
};

#endif

