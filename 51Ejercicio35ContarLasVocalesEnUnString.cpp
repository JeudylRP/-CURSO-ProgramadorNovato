/*// MI IDEA
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string texto;
    int contadorVocales = 0;

    cout << "Por favor, ingrese una frase: ";
    getline(cin, texto);
    cout << "La frase ingresada es: " << texto << "\n";

    char textoArr[texto.length() + 1];
    strcpy(textoArr, texto.c_str());

    cout << "Este es tu texto: ";
    for (int i = 0; i < texto.length(); i++)
    {
        cout << textoArr[i];
        if (textoArr[i] == 'a' || textoArr[i] == 'e' || textoArr[i] == 'i' || textoArr[i] == 'o' || textoArr[i] == 'u')
        {
            contadorVocales++;
        }
    }

    cout << "\nTu frase tiene " << contadorVocales << " vocales";

    return 0;
}*/
/*
// TUTORIAL
#include <iostream>

int main()
{
    char texto[30];
    int la = 0, le = 0, li = 0, lo = 0, lu = 0;
    std::cout << "Ingresa una frase con vocales: ";
    std::cin.getline(texto, 30, '\n');
    for (int i = 0; i < 30; i++)
    {
        switch (texto[i])
        {
        case 'a':
            la++;
            break;
        case 'A':
            la++;
            break;
        case 'e':
            le++;
            break;
        case 'E':
            le++;
            break;
        case 'i':
            li++;
            break;
        case 'I':
            li++;
            break;
        case 'o':
            lo++;
            break;
        case 'O':
            lo++;
            break;
        case 'u':
            lu++;
            break;
        case 'U':
            lu++;
            break;
        }
    }
    std::cout << "Estas son las veces que escribieron sus vocales: \n";
    std::cout << "letra a: " << la << "\n";
    std::cout << "letra e: " << le << "\n";
    std::cout << "letra i: " << li << "\n";
    std::cout << "letra o: " << lo << "\n";
    std::cout << "letra u: " << lu << "\n";
    return 0;
}*/
// MI IDEA DESPUES DEL TUTORIAL

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string texto;
    int la = 0, le = 0, li = 0, lo = 0, lu = 0;

    cout << "Ingresa tu texto: ";
    getline(cin, texto);

    cout << "El texto ingresado es: " << texto << "\n";

    char textoArr[texto.length() + 1];
    strcpy(textoArr, texto.c_str());

    for (int i = 0; i < texto.length(); i++)
    {
        switch (textoArr[i])
        {
        case 'a':
            la++;
            break;
        case 'A':
            la++;
            break;
        case 'e':
            le++;
            break;
        case 'E':
            le++;
            break;
        case 'i':
            li++;
            break;
        case 'I':
            li++;
            break;
        case 'o':
            lo++;
            break;
        case 'O':
            lo++;
            break;
        case 'u':
            lu++;
            break;
        case 'U':
            lu++;
            break;
        }
    }
    cout << "EL NUMERO USADDO DE VOCALES\n";
    cout << "La letra 'a' se ha utilizado " << la << " veces \n";
    cout << "La letra 'e' se ha utilizado " << le << " veces \n";
    cout << "La letra 'i' se ha utilizado " << li << " veces \n";
    cout << "La letra 'o' se ha utilizado " << lo << " veces \n";
    cout << "La letra 'u' se ha utilizado " << lu << " veces \n";
}
