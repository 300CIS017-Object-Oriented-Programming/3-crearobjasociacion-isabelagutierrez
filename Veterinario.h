#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
using namespace std;

class Veterinario {

    private:
    string nombre;
    int aniosExperiencia;

    public:
    //Constructores
    Veterinario() = default;
    Veterinario(string, int);

    // Set
    void setNombre(string);
    void setAniosExp(int);

    // Get
    string getNombre();
    int getAniosExp();

};

#endif