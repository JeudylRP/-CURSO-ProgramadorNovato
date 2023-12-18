// MI CODIGO
/*#include <iostream>
#include <cstring>
int main()
{
    char texto[100];

    std::cout << "Ingresa un texto de mas de 10 letras: \n";
    std::cin.getline(texto, 100);

    int count = 0;
    for (int i = 0; i < strlen(texto); i++)
    {
        if (texto[i] != ' ')
        {
            count++;
        }
    }

    if (count < 10)
    {
        std::cout << "El texto tiene que tener mas de 10 letras, MAAAAAAAAAAAAAAAL!";
    }
    else
    {
        std::cout << "Felicidades, tu texto tiene mas de 10 letras!!!!";
    }

    return 0;
}*/

// TUTORIAL
#include <iostream>
#include <string.h>
int main()
{
    char texto[10];
    int longitud = 0;
regreso:
    std::cout << "Ingresa un texto minimo  de 10 letras: \n";
    gets(texto);
    longitud = strlen(texto);
    if (longitud >= 10)
    {
        std::cout << "Felicidades!!!";
    }
    else
    {
        std::cout << "Te dije que mas de 10 letras, INTENTALO DE NUEVO!!\n";
        goto regreso;
    }

    return 0;
}