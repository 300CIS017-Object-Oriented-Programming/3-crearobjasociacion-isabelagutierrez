// Created by lufe y Gonzo Feb2024.

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

// Definición constructores
Propietario::Propietario(string nombre, string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario :: Propietario(int edad){
    this -> edad = edad;
}

// Definicion metodos

void Propietario :: mostrarInfo(){
    cout << "Nombre: " << nombre << endl << "Documento de indentidad: " << docIdentidad << endl << "Edad: " << edad << endl;
}

string Propietario::getNombre(){
    return nombre;
}

void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Propietario :: setDocIdentidad(string id){
    this -> docIdentidad = id;
}

string Propietario :: getDocIdentidad(){
    return docIdentidad;
}

int Propietario :: getEdad(){
    return edad;
}