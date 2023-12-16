// Que reciba dos numeros y que determine cual es mayor
#include <iostream>

int main()
{
    int n1, n2;

    std::cout << "Humano escribe 2 numeros: ";
    std::cout << "Numero 1: ";
    std::cin >> n1;
    std::cout << "Numero 2: ";
    std::cin >> n2;

    if (n1 == n2)
    {

        std::cout << "Los dos numeros son iguales";
    }
    else if (n1 > n2)
    {
        std::cout << "El numero 1 es el mayor";
    }
    else
    {
        std::cout << "El numero 2 es el mayor";
    }

    return 0;
}