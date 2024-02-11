#ifndef RAZA_H
#define RAZA_H

#include <iostream>
#include <string>
using namespace std;

class Raza {

    private:
    string nombre, paisOrigen;

    public:
    // Constructor
    Raza() = default;
    Raza(string, string);

    // Set
    void setNombre(string);
    void setPaisOrigen(string);

    // Get
    string getNombre();
    string getPaisOrigen();

};

#endif