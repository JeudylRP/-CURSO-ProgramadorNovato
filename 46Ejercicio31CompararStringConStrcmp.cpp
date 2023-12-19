/*
//MI IDEA
#include <iostream>
#include <string>
int main()
{
    std::string texto1;
    std::string texto2;

    std::cout << "Insierta el PRIMER texto: \n";
    std::getline(std::cin, texto1);
    std::cout << "la longitud del PRIMER texto es: " << texto1.length() << "\n";

    std::cout << "Insierta el SEGUNDO texto: \n";
    std::getline(std::cin, texto2);
    std::cout << "la longitud del SEGUNDO texto es: " << texto2.length() << "\n";

    if (texto1.length() > texto2.length())
    {
        std::cout << "El PRIMER texto '" << texto1 << "' es el mas grande\n";
    }
    else if (texto2.length() > texto1.length())
    {
        std::cout << "El SEGUNDO texto '" << texto2 << "' es el mas grande\n";
    }
    else if (texto1.length() == texto2.length())
    {
        std::cout << "El texto (1) '" << texto1 << "' y el texto (2) '" << texto2 << "' tienen el mismo tamano\n";
    }

    if (texto1 == texto2)
    {
        std::cout << "El texto (1) '" << texto1 << "' y el texto (2) '" << texto2 << "' son IGUALES";
    }
    else
    {
        std::cout << "El texto (1) '" << texto1 << "' y el texto (2) '" << texto2 << "' NO son IGUALES";
    }

    return 0;
}*/
#include <iostream>
#include <string.h>

int main()
{
    char texto1[] = "AYER";
    char texto2[] = "ayer";
    int comparacion;

    comparacion = strcmp(texto1, texto2); // strcmp(...) es lo mejor que se puede utilizar para optimizar textos

    if (comparacion == 0)
    {
        std::cout << "Ambos textos son iguales\n";
    }
    if (comparacion != 0)
    {
        std::cout << "Ambos textos son diferentes\n";
        if (comparacion > 0)
        {
            std::cout << "El texto 1 es mayor que el texto 2\n";
        }
        if (comparacion < 0)
        {
            std::cout << "El texto 1 es menor que el texto 2\n";
        }
    }

    return 0;
}
