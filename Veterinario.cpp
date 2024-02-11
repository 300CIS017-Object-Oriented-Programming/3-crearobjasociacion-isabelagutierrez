#include "Veterinario.h"

Veterinario :: Veterinario(string nombre, int aniosExperiencia) :
nombre(nombre), aniosExperiencia(aniosExperiencia) {}

void Veterinario :: setNombre(string nombre){
    this -> nombre = nombre;
}

void Veterinario :: setAniosExp(int aniosExperiencia){
    this -> aniosExperiencia = aniosExperiencia;
}

string Veterinario :: getNombre(){
    return nombre;
}

int Veterinario :: getAniosExp(){
    return aniosExperiencia;
}