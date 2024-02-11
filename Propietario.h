// Created by lufe y Gonzo Feb2024.

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
#include <string>
using namespace std;

class Propietario {

private:
    string nombre;
    string docIdentidad;
    int edad;

public:
    // Constructores
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre, string docIdentidad);
    Propietario(int);

    // Metodos
    void mostrarInfo();

    // Set
    void setNombre(string nombre);
    void setDocIdentidad(string);

    // Get
    string getNombre();
    string getDocIdentidad();
    int getEdad();

};

#endif //PROPIETARIO_H