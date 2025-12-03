#include <iostream>
using namespace std;
#include "CarnivoraInfo.h"
#include "CarnivoraCuidados.h"
#include "CactusInfo.h"
#include "CactusCuidados.h"
#include "FlorInfo.h"
#include "FlorCuidados.h"

int main() {
    int tipoPlanta = 0;

    Carnivora plantaCarnivora1("Venus atrapamoscas", "Dionaea muscipula", 3, false, 299.99, "Trampa de mandíbula");
    Carnivora plantaCarnivora2("Rocio del sol", "Drosera capensis", 2, false, 150.00, "Trampa pegajosa");
    Carnivora plantaCarnivora3("Planta jarro", "Nepenthes alata", 4, false, 450.50, "Trampa de jarra");
    CarnivoraCuidados cuidadosCarnivora1(3, "Sustrato pobre en nutrientes", 22.5, "Pequeño", 5);
    CarnivoraCuidados cuidadosCarnivora2(4, "Musgo sphagnum", 24.0, "Mediano", 7);
    CarnivoraCuidados cuidadosCarnivora3(2, "Turba y arena", 20.0, "Grande", 4);

    CactusInfo plantaCactus1("Barril de oro", "Echinocactus grusonii", 5, false, 99.99, 12.0);
    CactusInfo plantaCactus2("Nopal", "Opuntia ficus-indica", 3, false, 49.99, 8.0);
    CactusInfo plantaCactus3("Biznaga elongada", "Mammillaria elongata", 4, false, 120.00, 10.0);
    CactusCuidados cuidadosCactus1(1, "Tierra arenosa", 28.0, 8.0, false);
    CactusCuidados cuidadosCactus2(2, "Mezcla de tierra para cactus", 26.0, 6.0, true);
    CactusCuidados cuidadosCactus3(1, "Sustrato bien drenado", 30.0, 7.0, false);

    FlorInfo plantaFlor1("Rosa", "Rosa spp.", 1, false, 10.00, 7.0, 5.0, "Rojo");
    FlorInfo plantaFlor2("Tulipán", "Tulipa gesneriana", 1, false, 8.50, 10.0, 4.0, "Amarillo");
    FlorInfo plantaFlor3("Girasol", "Helianthus annuus", 1, false, 12.00, 15.0, 10.0, "Amarillo");
    FlorInfo plantaFlor4("Orquídea", "Orchidaceae spp.", 2, false, 20.00, 30.0, 6.0, "Violeta");
    FlorCuidados cuidadosFlor1(7, "Tierra rica en nutrientes", 20.0, "Alto", true, true);
    FlorCuidados cuidadosFlor2(5, "Sustrato bien drenado", 18.0, "Medio", false, true);
    FlorCuidados cuidadosFlor3(6, "Tierra fértil", 22.0, "Alto", true, false);
    FlorCuidados cuidadosFlor4(4, "Mezcla para orquídeas", 24.0, "Bajo", true, false);

    cout << "Bienvenido al sistema de gestión de invernadero, ¿qué planta desea consultar? (ingrese el numero)\n"
        << "1. Planta carnívora\n"
        << "2. Cactus\n"
        << "3. Flor\n";
    cin >> tipoPlanta;

    if (tipoPlanta == 1) {
        cout << "\nHa seleccionado la planta carnívora.\n"
        << "¿Cual planta carnívora desea seleccionar?\n"
        << "1. " << plantaCarnivora1.getNombre() << "\n"
        << "2. " << plantaCarnivora2.getNombre() << "\n"
        << "3. " << plantaCarnivora3.getNombre() << "\n";
        int plantaSeleccionada;
        cin >> plantaSeleccionada;
        cout << "La planta seleccionada fue: \n";
        if (plantaSeleccionada == 1) { 
            cout << plantaCarnivora1.getNombre() << endl;
        }
        else if (plantaSeleccionada == 2) {
            cout << plantaCarnivora2.getNombre() << endl;
            }
        else if (plantaSeleccionada == 3) {
            cout << plantaCarnivora3.getNombre() << endl;
            }
        else {
            cout << "Opción no válida.\n";
            return 0;
        }
            cout << "¿Qué información desea ver?\n"
                 << "1. Información de la planta\n"
                 << "2. Cuidados de la planta\n"
                 << "3. Hacer un pedido\n";
            int infoSeleccionada;
            cin >> infoSeleccionada;
            if (infoSeleccionada == 1) {
                if (plantaSeleccionada == 1) {
                    plantaCarnivora1.mostrarInfo();
                }
                else if (plantaSeleccionada == 2) {
                    plantaCarnivora2.mostrarInfo();
                }
                else if (plantaSeleccionada == 3) {
                    plantaCarnivora3.mostrarInfo();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 2) {
                if (plantaSeleccionada == 1) {
                    cuidadosCarnivora1.mostrarCuidados();
                }
                else if (plantaSeleccionada == 2) {
                    cuidadosCarnivora2.mostrarCuidados();
                }
                else if (plantaSeleccionada == 3) {
                    cuidadosCarnivora3.mostrarCuidados();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 3) {
                double cantidad;
                cout << "El precio por unidad es de: $";
                if (plantaSeleccionada == 1) {
                    cout << plantaCarnivora1.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 2) {
                    cout << plantaCarnivora2.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 3) {
                    cout << plantaCarnivora3.getPrecio() << endl;
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
                cout << "Ingrese la cantidad que desea pedir: ";
                cin >> cantidad;
                double precioTotal = 0.0;
                if (plantaSeleccionada == 1) {
                    precioTotal = plantaCarnivora1.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 2) {
                    precioTotal = plantaCarnivora2.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 3) {
                    precioTotal = plantaCarnivora3.getPrecio() * cantidad;
                }
                cout << "El precio total por " << cantidad << " unidad(es) de " 
                     << (plantaSeleccionada == 1 ? plantaCarnivora1.getNombre() :
                         plantaSeleccionada == 2 ? plantaCarnivora2.getNombre() :
                         plantaCarnivora3.getNombre())
                     << " es: $" << precioTotal << endl;
            }
            else {
                cout << "Opción no válida.\n";
                return 0;
            }
        }
    else if (tipoPlanta == 2) {
        cout << "\nHa seleccionado la planta cactus.\n"
        << "¿Qué planta deseas ver?\n"
        << "1. " << plantaCactus1.getNombre() << "\n"
        << "2. " << plantaCactus2.getNombre() << "\n"
        << "3. " << plantaCactus3.getNombre() << "\n";
        int plantaSeleccionada;
        cin >> plantaSeleccionada;
        cout << "La planta seleccionada fue: \n";
        if (plantaSeleccionada == 1) {
            cout << plantaCactus1.getNombre() << endl;
        }
        else if (plantaSeleccionada == 2) {
            cout << plantaCactus2.getNombre() << endl;
            }
        else if (plantaSeleccionada == 3) {
            cout << plantaCactus3.getNombre() << endl;
            }
        else {
            cout << "Opción no válida.\n";
            return 0;
        }

            cout << "¿Qué información desea ver?\n"
                 << "1. Información de la planta\n"
                 << "2. Cuidados de la planta\n"
                 << "3. Hacer un pedido\n";
            int infoSeleccionada;
            cin >> infoSeleccionada;
            if (infoSeleccionada == 1) {
                if (plantaSeleccionada == 1) {
                    plantaCactus1.mostrarInfo();
                }
                else if (plantaSeleccionada == 2) {
                    plantaCactus2.mostrarInfo();
                }
                else if (plantaSeleccionada == 3) {
                    plantaCactus3.mostrarInfo();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 2) {
                if (plantaSeleccionada == 1) {
                    cuidadosCactus1.mostrarCuidados();
                }
                else if (plantaSeleccionada == 2) {
                    cuidadosCactus2.mostrarCuidados();
                }
                else if (plantaSeleccionada == 3) {
                    cuidadosCactus3.mostrarCuidados();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 3) {
                double cantidad;
                cout << "El precio por unidad es de: $";
                if (plantaSeleccionada == 1) {
                    cout << plantaCactus1.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 2) {
                    cout << plantaCactus2.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 3) {
                    cout << plantaCactus3.getPrecio() << endl;
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
                cout << "Ingrese la cantidad que desea pedir: ";
                cin >> cantidad;
                double precioTotal = 0.0;
                if (plantaSeleccionada == 1) {
                    precioTotal = plantaCactus1.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 2) {
                    precioTotal = plantaCactus2.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 3) {
                    precioTotal = plantaCactus3.getPrecio() * cantidad;
                }
                cout << "El precio total por " << cantidad << " unidad(es) de " 
                     << (plantaSeleccionada == 1 ? plantaCactus1.getNombre() :
                         plantaSeleccionada == 2 ? plantaCactus2.getNombre() :
                         plantaCactus3.getNombre())
                     << " es: $" << precioTotal << endl;
            }
            else {
                cout << "Opción no válida.\n";
                return 0;
            }
        }
    else if (tipoPlanta == 3) {
        cout << "\nHa seleccionado la planta flor.\n"
        << "¿Qué planta deseas ver?\n"
        << "1. " << plantaFlor1.getNombre() << "\n"
        << "2. " << plantaFlor2.getNombre() << "\n"
        << "3. " << plantaFlor3.getNombre() << "\n"
        << "4. " << plantaFlor4.getNombre() << "\n";
        int plantaSeleccionada;
        cin >> plantaSeleccionada;
        cout << "La planta seleccionada fue: \n";
        if (plantaSeleccionada == 1) {
            cout << plantaFlor1.getNombre() << endl;
        }
        else if (plantaSeleccionada == 2) {
            cout << plantaFlor2.getNombre() << endl;
            }
        else if (plantaSeleccionada == 3) {
            cout << plantaFlor3.getNombre() << endl;
            }
        else if (plantaSeleccionada == 4) {
            cout << plantaFlor4.getNombre() << endl;
            }
        else {
            cout << "Opción no válida.\n";
            return 0;
        }

            cout << "¿Qué información desea ver?\n"
                 << "1. Información de la planta\n"
                 << "2. Cuidados de la planta\n"
                 << "3. Hacer un pedido\n";
            int infoSeleccionada;
            cin >> infoSeleccionada;
            if (infoSeleccionada == 1) {
                if (plantaSeleccionada == 1) {
                    plantaFlor1.mostrarInfo();
                }
                else if (plantaSeleccionada == 2) {
                    plantaFlor2.mostrarInfo();
                }
                else if (plantaSeleccionada == 3) {
                    plantaFlor3.mostrarInfo();
                }
                else if (plantaSeleccionada == 4) {
                    plantaFlor4.mostrarInfo();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 2) {
                if (plantaSeleccionada == 1) {
                    cuidadosFlor1.mostrarCuidados();
                }
                else if (plantaSeleccionada == 2) {
                    cuidadosFlor2.mostrarCuidados();
                }
                else if (plantaSeleccionada == 3) {
                    cuidadosFlor3.mostrarCuidados();
                }
                else if (plantaSeleccionada == 4) {
                    cuidadosFlor4.mostrarCuidados();
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
            }
            else if (infoSeleccionada == 3) {
                double cantidad;
                cout << "El precio por unidad es de: $";
                if (plantaSeleccionada == 1) {
                    cout << plantaFlor1.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 2) {
                    cout << plantaFlor2.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 3) {
                    cout << plantaFlor3.getPrecio() << endl;
                }
                else if (plantaSeleccionada == 4) {
                    cout << plantaFlor4.getPrecio() << endl;
                }
                else {
                    cout << "Opción no válida.\n";
                    return 0;
                }
                cout << "Ingrese la cantidad que desea pedir: ";
                cin >> cantidad;
                double precioTotal = 0.0;
                if (plantaSeleccionada == 1) {
                    precioTotal = plantaFlor1.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 2) {
                    precioTotal = plantaFlor2.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 3) {
                    precioTotal = plantaFlor3.getPrecio() * cantidad;
                }
                else if (plantaSeleccionada == 4) {
                    precioTotal = plantaFlor4.getPrecio() * cantidad;
                }
                cout << "El precio total por " << cantidad << " unidad(es) de " 
                     << (plantaSeleccionada == 1 ? plantaFlor1.getNombre() :
                         plantaSeleccionada == 2 ? plantaFlor2.getNombre() :
                         plantaSeleccionada == 3 ? plantaFlor3.getNombre() :
                         plantaFlor4.getNombre())
                     << " es: $" << precioTotal << endl;
            }
            else {
                cout << "Opción no válida.\n";
                return 0;
            }
        }
    return 0; 
};
