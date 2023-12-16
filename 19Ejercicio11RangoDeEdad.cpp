#include <iostream>

int main()
{

    int edad;
      
    regresar:  
    std::cout << "Ingresa la edad del trabajador: \n";
    std::cin >> edad;

    if (edad >= 18 && edad <= 40)
    {
        std::cout << "El trabajador es apto para trabajar.\n";
    }
    else
    {

        std::cout << "El trabajador no es apto para trabajar\n";
        goto regresar;
    }
}