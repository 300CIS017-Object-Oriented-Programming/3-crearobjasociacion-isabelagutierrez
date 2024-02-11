#include "Raza.h"

Raza :: Raza(string nombre, string paisOrigen) :
nombre(nombre), paisOrigen(paisOrigen) {}

void Raza :: setNombre(string nombre){
    this -> nombre = nombre;
}

void Raza :: setPaisOrigen(string paisOrigen){
    this -> paisOrigen = paisOrigen;
}

string Raza :: getNombre(){
    return nombre;
}

string Raza :: getPaisOrigen(){
    return paisOrigen;
}