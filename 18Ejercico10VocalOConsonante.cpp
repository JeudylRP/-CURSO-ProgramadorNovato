#include <iostream>
int main()
{
    char letra;
    std::cout << "Este programa dice si una letra es vocal o no\n";
    regresar:
    std::cout << "Ingresa una letra\n";
    std::cin >> letra;

    switch (letra)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        std::cout << "Tu letra es una vocal";
        break;

    default:
        std::cout << "Tu letra es una consonante\n";
        
        goto regresar;
        
        break;
    }
    return 0;
}