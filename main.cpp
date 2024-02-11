#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<< endl;

    // Nuevo objeto de la clase perro
    Perro *mascota = new Perro("Bruno", 5, "Salchicha", "Negro", "Mediano");
    mascota -> ladrar();

    mascota -> agregarPropietario("Isabela", "4123658952");
    cout << "El documento de indentidad del propietario de " << mascota -> getNombre() << " es " << mascota -> getPropietario() -> getDocIdentidad() << endl;
    cout << "La edad de " << mascota -> getPropietario() -> getNombre() << " es " << mascota -> getPropietario() -> getEdad() <<endl;

    // Asociar con la clase veterinario
    mascota -> agregarVeterinario("Laura", 5);
    cout << "El veterinario de " << mascota -> getNombre() << " es " << mascota -> getVeterinario() -> getNombre() << endl;

    // Nuevo objeto de la clase propietario
    Propietario *persona = new Propietario(18);
    persona -> setNombre("Luis");
    persona -> setDocIdentidad("147652368");
    persona -> mostrarInfo();  

    // Objetos de la clase Raza
    Raza razaUno;
    razaUno.setNombre("Mastin Napolitano");
    razaUno.setPaisOrigen("Italia");

    Raza razaDos;
    razaDos.setNombre("Maltes");
    razaDos.setPaisOrigen("Italia");

    // Vincular a Firulais
    firulais.setRaza(&razaUno);
    cout << "La raza de " << firulais.getNombre() << " es " << firulais.getClaseRaza() -> getNombre() << " y el pais de origen es " << firulais.getClaseRaza() -> getPaisOrigen() << endl;

    return 0;
}
