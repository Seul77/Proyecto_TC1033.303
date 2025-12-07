#ifndef PLANTA_H      
#define PLANTA_H

#include "PlantaInfo.h"       
#include "PlantaCuidados.h"   

// Clase Planta: ESTA CLASE ES LA COMPOSICION ENTRE: PlantaInfo, PlantaCuidados
class Planta {
private:
    PlantaInfo info;          // Atributo que contiene la información general
    PlantaCuidados cuidados;  // Atributo que contiene la información sobre los cuidados

public:
    // Constructor que recibe los dos objetos como parámetros
    Planta(PlantaInfo i, PlantaCuidados c) : info(i), cuidados(c) {}
};

#endif   
