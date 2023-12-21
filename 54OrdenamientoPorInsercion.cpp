/*// TUTORIAL
#include <iostream>

int main()
{
    int numeros[5], aux, pos = 0;

    std::cout << "Ingresa los siguientes datos: ";

    for (int i = 0; i < 5; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++)
    {
        pos = i;
        aux = numeros[i];
        while ((pos > 0) && (numeros[pos - 1] > aux))
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }

        numeros[pos] = aux;
    }
    std::cout << "Estos son tus numeros ordenados de forma ASCENDENTE: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << numeros[i] << "\n";
    }

    std::cout << "Estos son tus numeros ordenados de forma ASCENDENTE: ";
    for (int i = 5; i >= 0; i--)
    {
        std::cout << numeros[i] << "\n";
    }
}
*/

#include <iostream>

int main()
{
    int numeros[5], aux, pos = 0;

    std::cout << "Ingresa los siguientes datos: ";

    for (int i = 0; i < 5; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < 5; i++) // Recorre cada elemento en el array
    {
        pos = i;          // Marca la posición actual que estamos considerando para insertar en la parte ordenada del array
        aux = numeros[i]; // Guarda el valor del elemento actual que estamos considerando para insertar en la parte ordenada del array

        // Este bucle se ejecuta mientras el elemento actual en la parte ordenada del array sea mayor que 'aux' y 'pos' sea mayor que 0
        while ((pos > 0) && (numeros[pos - 1] > aux))
        {
            numeros[pos] = numeros[pos - 1]; // Si el elemento actual en la parte ordenada del array es mayor que 'aux', se mueve una posición hacia la derecha en el array
            pos--;                           // Después de mover el elemento, 'pos' se decrementa para continuar comparando 'aux' con el siguiente elemento en la parte ordenada del array
        }
        numeros[pos] = aux; // Después de que todos los elementos mayores que 'aux' se hayan movido una posición hacia la derecha, 'aux' se inserta en su posición correcta en la parte ordenada del array
    }
    std::cout << "Estos son tus numeros: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << numeros[i] << "\n";
    }
}