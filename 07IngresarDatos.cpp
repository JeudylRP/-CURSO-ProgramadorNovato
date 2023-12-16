#include <iostream>

int main()
{
    char sexo[10];
    int edad;
    float estatura;

    std::cout << "Escribe lo siguiente: ";
    std::cout << "\nSexo: ";
    std::cin >> sexo;
    std::cout << "\nEdad: ";
    std::cin >> edad;
    std::cout << "\nEstatura: ";
    std::cin >> estatura;

    std::cout << "Aqui están tus datos." << "\n";
    std::cout << "Sexo: " << sexo << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Estatura: " << estatura << "\n";
    return 0;
}