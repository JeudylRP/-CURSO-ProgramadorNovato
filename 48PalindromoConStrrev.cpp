/*// Mis Ideas PRIMEEEEEEEEEEEEEEEEEEE
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{

    string inOrder, reverse;
regresar:
    cout << "Dame el texto que quieres comprobar: ";
    getline(cin, inOrder);

    char orderArr[inOrder.length() + 1];
    strcpy(orderArr, inOrder.c_str());

    cout << "Este es tu texto en un orden correcto: ";
    for (int i = 0; i < inOrder.length(); i++)
    {
        cout << orderArr[i];
    }
    cout << "\n";

    char reversedArr[inOrder.length() + 1];
    cout << "Este es tu texto al reves: ";
    for (int i = inOrder.length() - 1, j = 0; i >= 0; i--, j++) //'i--' y 'j++' es como decir "Después de mover cada bloque, voy a pasar al bloque anterior en mi vieja fila y al siguiente espacio en mi nueva fila."
    {
        reversedArr[j] = orderArr[i];
        cout << reversedArr[j];
    }
    cout << "\n";
    reversedArr[inOrder.length()] = '\0'; // esta linea ayuda a la funcion 'srtrrcmp()' a saber cuando han llegado al final de la cadena
    if (strcmp(orderArr, reversedArr) == 0)
    {
        cout << "El texto ES un PALINDROMO. \n";
    }
    else
    {
        cout << "El texto NO ES un PALINDROMO. \nIntentalo de nuevo!\n";
        goto regresar;
    }
}
*/
// TUTORIAL