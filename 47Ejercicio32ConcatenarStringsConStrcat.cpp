/*
//Mi idea
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre, apellido, nombreApellido;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu apellido: ";
    cin >> apellido;

    nombreApellido = nombre + " " + apellido;

    cout << "Tu nombre completo es: " << nombreApellido;

    return 0;
}
*/
// TUTORIAL
#include <iostream>
#include <string.h>

int main()
{
    char nombre[20], apellido[20], nombreApellido[40] = {};
    std::cout << "Humano ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Humano ingresa tu apellido: ";
    std::cin >> apellido;
    strcat(nombreApellido, nombre);
    strcat(nombreApellido, " ");
    strcat(nombreApellido, apellido);

    std::cout << "Humano este es tu nombre y apellido: " << nombreApellido << "\n";

    return 0;
}