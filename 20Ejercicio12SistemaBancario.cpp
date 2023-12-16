#include <iostream>

int main()
{
    int opcion;
    float total = 1000, ingreso, egreso;
    std::cout << "Bienvenido al banco!\n";
regreso:
    std::cout << "Digita una opcion!\n";
    std::cout << "1 INGRESAR DINERO\n";
    std::cout << "2 RETIRAR DINERO\n";
    std::cout << "3 SALIR\n";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1:
        std::cout << "Cuanto dinero vas a ingresar?\n";
        std::cin >> ingreso;
        total += ingreso;
        std::cout << "Actualmete tienes " << total << "$";
        goto regreso;
        break;
    case 2:
        std::cout << "Cuanto dinero vas a retirar?\n";
        std::cin >> egreso;
        if (egreso > total)
        {
            std::cout << "NO TIENES SUFICIENTO DINERO, tienes " << total << "$";
        }
        else
        {
            total -= egreso;
            std::cout << "Actualmente tienes " << total << "$\n";
        }
        goto regreso;
        break;
    case 3:
        break;
    default:
        goto regreso;
    }
    return 0;
}