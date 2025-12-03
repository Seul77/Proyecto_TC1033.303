#ifndef PLANTAINFO_H
#define PLANTAINFO_H

#include <iostream>
using namespace std;

class PlantaInfo {
    protected:
    string nombre;
    string nombrecientifico;
    int edad;
    bool toxica;
    double precio;
    public:
    PlantaInfo(string n, string nc, int e, bool t, double p) {
        nombre = n;
        nombrecientifico = nc;
        edad = e;
        toxica = t;
        precio = p;
    }
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
    
    void mostrarInfo() {
        cout << "\nNombre: " << nombre << endl;
        cout << "Nombre científico: " << nombrecientifico << endl;
        cout << "Edad: " << edad << " años" << endl;
        cout << "Tóxica: " << (toxica ? "Sí" : "No") << endl;
        cout << "Precio: $" << precio << endl;
    }

};

#endif