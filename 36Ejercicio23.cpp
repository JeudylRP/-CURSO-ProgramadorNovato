// Este es el ejercicio 23 del vídeo 36

/*
#include <iostream>
#include <algorithm>

int main()
{
    int tamano;

    std::cout << "Ingrese el tamano deseado de su array: ";
    std::cin >> tamano;

    int *numeros = new int[tamano];

    std::cout << "Ingrese los valores del arreglo:";
    for (int i = 0; i < tamano; i++)
    {
        std::cin >> numeros[i];
    }

    for (int i = 0; i < tamano - 1; i++)
    {
        for (int j = 0; j < tamano - 1; j++)

            if (numeros[i] > numeros[j + 1])
            {

                std::swap(numeros[j], numeros[j + 1]);
            }
    }
    std::cout << "ARRAY ORDENADO ";
    for (int i = 0; i < tamano; i++)
    {
        std::cout << " " << numeros[i];
    }

    std::cout << "\nEl numero mayor es: " << numeros[tamano - 1];

    return 0;
}
*/
// El tutorial

/*#include <iostream>

int main()
{
    int arreglo[100], tamano, mayor = 0;

    do
    {
        std::cout << "Ingresa el tamano del arreglo: ";
        std::cin >> tamano;
    } while ((tamano < 1) || (tamano > 100));

    for (int i = 0; i < tamano; i++)
    {
        std::cout << "Ingresa el valor del elemento " << (i + 1) << ": ";
        std::cin >> arreglo[i];
    }

    for (int i = 0; i < tamano; i++)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }
    std::cout << "\n Este es tu mayor: " << mayor << "\n";

    return 0;
}*/

#include <iostream>

int main()
{
    int tamano, mayor = 0;

    std::cout << "Ingrese el tamano del array: ";
    std::cin >> tamano;

    int *numeros = new int[tamano];
    std::cout << "Ingrese los valores del arreglo: \n";
    for (int i = 0; i < tamano; i++)
    {
        std::cout << "Ingrese el valore " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }

    std::cout << "TU ARRAY SELECCIONADO: ";
    for (int i = 0; i < tamano; i++)
    {
        std::cout << numeros[i] << " ";
    }
    for (int i = 0; i < tamano; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }
    std::cout << "\nEl numero mayor equivale a: " << mayor;
}
