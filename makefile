all: programa
programa : Perro Propietario main Veterinario Raza
	g++ -o Ejecutable Perro.o Propietario.o main.o Veterinario.o Raza.o
Perro: Perro.cpp
	g++ -c Perro.cpp
Propietario: Propietario.cpp
	g++ -c Propietario.cpp
main: main.cpp
	g++ -c main.cpp
Veterinario: Veterinario.cpp
	g++ -c Veterinario.cpp
Raza: Raza.cpp
	g++ -c Raza.cpp