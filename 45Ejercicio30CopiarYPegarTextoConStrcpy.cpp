/*//Mi idea
#include <iostream>
#include <string>
int main()
{
    std::string texto1;
    std::string texto2;

    std::cout << "Insera el texto que quieres copiar: ";
    std::getline(std::cin, texto1);

    texto2 = texto1;

    std::cout << "Este es el texto copiado: " << texto2;

    return 0;
}*/
#include <iostream>
#include <string.h>
int main()
{
    char texto1[] = "programador novato";
    char texto2[10];
    strcpy(texto2, texto1);
    std::cout << texto2
              << " " << strlen(texto2) << "\n";
}
