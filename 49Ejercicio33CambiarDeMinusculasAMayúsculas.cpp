/*// TUTORIAL
#include <iostream>
#include <string.h>

int main()
{
    char texto1[40], texto2[40];
regreso:
    std::cout << "Humano ingrese un texto: ";
    std::cin >> texto1;
    std::cout << "Humano ingrese un texto similar (sin tomar en cuenta mayusculas o minusculas): ";
    std::cin >> texto2;
    strupr(texto1);
    strupr(texto2);
    if (strcmp(texto1, texto2) != 0)
    {
        std::cout << "Humano malo las palabras (" << texto1 << " " << texto2 << ") no son similares.\nINTENTALO DE NUEVO!\n";
        goto regreso;
    }
    std::cout << "Muy bien!\n";

    return 0;
}*/
// MIS IDEAS
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;
int main()
{
    string texto1, texto2;
    cout << "Ingresa tu texto: ";
    getline(cin, texto1);

    cout << "Ingresa tu texto, pero similar (No importan las minusulas o mayusculas): ";
    getline(cin, texto2);

    for (int i = 0; i < texto1.length(); i++)
    {
        texto1[i] = toupper(texto1[i]);
    }

    for (int i = 0; i < texto2.length(); i++)
    {
        texto2[i] = toupper(texto2[i]);
    }

    cout << "Texto1 en mayusculas: " << texto1 << "\n";
    cout << "Texto2 en mayusculas: " << texto2 << "\n";

    if (texto1 == texto2)
    {
        cout << "los textos SI son SIMILRES!!";
    }
    else
    {
        cout << "los textos NO son SIMILARES!!";
    }

    return 0;
}
