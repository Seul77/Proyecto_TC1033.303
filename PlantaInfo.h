#ifndef PLANTAINFO_H          
#define PLANTAINFO_H

#include <iostream>           
using namespace std;          

class PlantaInfo {            // Clase base para la información de una planta
    protected:                // Atributos accesibles desde clases hijas
    string nombre;            // Nombre común de la planta
    string nombrecientifico;  // Nombre científico
    int edad;                 // Edad en años
    bool toxica;              // Indica si es tóxica
    double precio;            // Precio de la planta

    public:
    // Constructor para inicializar los atributos
    PlantaInfo(string n, string nc, int e, bool t, double p) {
        nombre = n;
        nombrecientifico = nc;
        edad = e;
        toxica = t;
        precio = p;
    }

    // Getters
    string getNombre() {
        return nombre;
    }
    string getNombreCientifico() {
        return nombrecientifico;
    }
    int getEdad() {
        return edad;
    }
    bool isToxica() {
        return toxica;
    }
    double getPrecio() {
        return precio;
    }

    // Setters
    void setNombre(string n) {
        nombre = n;
    }
    void setNombreCientifico(string nc) {
        nombrecientifico = nc;
    }
    void setEdad(int e) {
        edad = e;
    }
    void setToxica(bool t) {
        toxica = t;
    }
    void setPrecio(double p) {
        precio = p;
    }
    
    // Mostrar los datos
    void mostrarInfo() {
        cout << "\nNombre: " << nombre << endl;
        cout << "Nombre científico: " << nombrecientifico << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Tóxica: " << (toxica ? "Sí" : "No") << endl;
        cout << "Precio: $" << precio << endl;
    }

};

#endif  
