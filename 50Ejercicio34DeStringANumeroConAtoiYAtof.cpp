// atoi convierte un String a Iteger y
// atof convierte un String a flotante
// DE LETRAS A NUMEROS
/*#include <iostream>
#include <stdlib.h>

int main()
{
    char texto[4], texto1[2], texto2[2];
    int numero1, numero2, suma = 0;

    std::cout << "Humano ingresa 4 numeros: ";
    std::cin >> texto;

    texto1[0] = texto[0];
    texto1[1] = texto[1];
    texto1[2] = '\0';
    numero1 = atoi(texto1);

    texto2[0] = texto[2];
    texto2[1] = texto[3];
    texto2[2] = '\0';
    numero2 = atoi(texto2);

    suma = numero1 + numero2;
    std::cout << "Ahi esta t pinche suma: " << suma << "\n";
}*/
// MIS IDEAS
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    string texto, texto1, texto2;

    cout << "Ingresa 4 numeros: ";
    getline(cin, texto);

    int mitad = texto.length() / 2;

    texto1 = texto.substr(0, mitad);
    texto2 = texto.substr(mitad);
    cout << "Primera mitad: " << texto1 << "\n";
    cout << "Segunda mitad: " << texto2 << "\n";

    int numero1 = stoi(texto1), numero2 = stoi(texto2);
    int suma = numero1 + numero2;
    cout << "La suma de los numeros de los numeros es " << suma << "\n";
}
