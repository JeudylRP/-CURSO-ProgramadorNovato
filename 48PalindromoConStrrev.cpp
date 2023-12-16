#include <iostream>
#include <string.h>
#include <algorithm>

void strrev(char *begin, char *end)
{
    while (begin < end)
    {
        std::swap(*begin++, *end--);
    }
}

int main()
{
    char texto[40], textoRev[40];
regresa:
    std::cout << "Humano escribe un palindromo: ";
    std::cin >> texto;
    strcpy(textoRev, texto);
    strrev(textoRev, textoRev + strlen(textoRev) - 1);
    if (strcmp(texto, textoRev) != 0)
    {
        std::cout << "Humano estupido esto (" << texto << " " << textoRev << ") no es un palindromo\n";
        goto regresa;
    }
    std::cout << "Humano bueno, ahora dame la patita\n";

    return 0;
}