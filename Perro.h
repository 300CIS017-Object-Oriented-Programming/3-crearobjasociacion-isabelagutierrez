// Created by lufe0 y Gonzo Feb2024.

#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"
using namespace std;

class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario *pPropietario;
    Veterinario *pVeterinario;
    Raza *pRaza;

public:
    // Constructores
    Perro();
    Perro(string, int, string, string, string);
    ~Perro(); // Destructor

    // Asociacion a las clases
    Propietario *getPropietario();
    Veterinario *getVeterinario();
    Raza *getClaseRaza();

    // Metodos
    void ladrar();

    // Sirve para que cuando se llame la funcion se cree dinamicamente un nuevo objeto de la clase propietario con su informacion asociado a un
    // objeto de la clase Perro y se asigna el nuevo objeto de Propietario al atributo pPropietario
    void agregarPropietario(string nombre, string docIdentidad); 
    void agregarVeterinario(string, int);
    void agregarRaza(string, string);

    // Set
    void setPropietario(Propietario *pPropietario); // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setVeterinario(Veterinario *pVeterinario);
    void setRaza(Raza *pRaza);

    void setEdad(int edad);
    void setRaza(string raza);
    void setNombre(string nombre);
    void setTamanio(string tamanio);
    void setColor(string color);

    // Get
    int getEdad();
    string getRaza();
    string getNombre();
    string getTamanio();
    string getColor();

};

#endif