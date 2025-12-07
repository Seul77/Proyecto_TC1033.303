#ifndef FLORINFO_H
#define FLORINFO_H
#include <iostream>
using namespace std;
#include "PlantaInfo.h" 

// Clase derivada de PlantaInfo con atributos específicos de flor
class FlorInfo : public PlantaInfo {
    private:
    float duracionFloracion;   // Tiempo aproximado que dura la flor
    float tamañoFlor;          // Tamaño de la flor en centímetros
    string colorFlor;          // Color principal de la flor

    public:
    // Constructor que recibe valores para la clase base y para los nuevos atributos
    FlorInfo(string n, string nc, int e, bool t, float p, float df, float tf, string cf): PlantaInfo(n, nc, e, t, p) {
        duracionFloracion = df; // Asigna la duración de floración
        tamañoFlor = tf;        // Asigna el tamaño de la flor
        colorFlor = cf;         // Asigna el color de la flor
    }

    // Retorna la duración de la floración
    float getDuracionFloracion() {
        return duracionFloracion;
    }

    // Retorna el tamaño de la flor
    float getTamañoFlor() {
        return tamañoFlor;
    }

    // Retorna el color de la flor
    string getColorFlor() {
        return colorFlor;
    }

    // Cambia la duración de floración
    void setDuracionFloracion(float df) {
        duracionFloracion = df;
    }

    // Cambia el tamaño de la flor
    void setTamañoFlor(float tf) {
        tamañoFlor = tf;
    }

    // Cambia el color de la flor
    void setColorFlor(string cf) {
        colorFlor = cf;
    }

    // Muestra información heredada y después la de flor
    void mostrarInfo() {
        PlantaInfo::mostrarInfo();  // Llama a la versión de la clase base
        cout << "Duración de floración: " << duracionFloracion << " días" << endl;
        cout << "Tamaño de la flor: " << tamañoFlor << " cm" << endl;
        cout << "Color de la flor: " << colorFlor << endl;
    }
    
};
#endif
