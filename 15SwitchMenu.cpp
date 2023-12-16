#include <iostream>

int main()
{
    int numero;
regresar:
    std::cout << "Humano ingresa un numero entre 1 y 5 o 6 para terminar\n";

    std::cin >> numero;
    switch (numero)
    {
    case 1:
        std::cout << "Presionaste el numero 1\n";
        goto regresar;
        break;
    case 2:
        std::cout << "Presionaste el numero 2\n";
        goto regresar;
        break;
    case 3:
        std::cout << "Presionaste el numero 3\n";
        goto regresar;
        break;
    case 4:
        std::cout << "Presionaste el numero 4\n";
        goto regresar;
        break;
    case 5:
        std::cout << "Presionaste el numero 5\n";
        goto regresar;
        break;
    case 6:
        std::cout << "Presionaste el numero 6, tevoy a extranar\n";
        system("pause");
        return 0;
        break;

    default:

        std::cout << "Presiona enntr 1 y 5 o 6 para terminar\n";
        goto regresar;
        break;
    }
}