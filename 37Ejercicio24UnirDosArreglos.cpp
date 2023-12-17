// VIDEO
#include <iostream>
int main()
{
    int arreglo1[5], arreglo2[5], arreglo3[10];

    for (int i = 0; i < 5; i++)
    {

        std::cout << "Ingresa en el arreglo 1 el valor " << (i + 1) << ": ";
        std::cin >> arreglo1[i];
    }
    for (int i = 0; i < 5; i++)
    {

        std::cout << "Ingresa en el arreglo 2 el valor " << (i + 1) << ": ";
        std::cin >> arreglo2[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
        {
            arreglo3[i] = arreglo1[i];
        }
        if (i >= 5)
        {
            arreglo3[i] = arreglo2[i - 5];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << (i + 1) << ".- " << arreglo3[i] << "\n";
    }

    return 0;
}

/*//MI CODIGO
#include <iostream>

int main()
{

    int tamano1, tamano2;

    std::cout << "Ingrese el tamano del 1. Array: ";
    std::cin >> tamano1;

    int *numeros1 = new int[tamano1];

    for (int i = 0; i < tamano1; i++)
    {
        std::cout << "ingrese el valor " << (i + 1) << ": ";
        std::cin >> numeros1[i];
    }
    std::cout << "\nEsta es su 1. Array: ";
    for (int i = 0; i < tamano1; i++)
    {
        std::cout << numeros1[i] << " ";
    }

    std::cout << "\nIngrese el tamano del 2. Array: ";
    std::cin >> tamano2;
    int *numeros2 = new int[tamano2];
    for (int i = 0; i < tamano2; i++)
    {
        std::cout << "ingrese el valor " << (i + 1) << ": ";
        std::cin >> numeros2[i];
    }
    std::cout << "\nEsta es su 2. Array: ";
    for (int i = 0; i < tamano2; i++)
    {
        std::cout << numeros2[i] << " ";
    }

    int tamano3 = tamano1 + tamano2;
    int numeros3[tamano3];

    for (int i = 0; i < tamano1; i++)
    {
        numeros3[i] = numeros1[i];
    }

    for (int i = 0; i < tamano2; i++)
    {
        numeros3[i + tamano1] = numeros2[i];
    }
    std::cout << "\n";
    std::cout << "\nESTA ES LA 3. ARRAY: ";

    for (int i = 0; i < tamano3; i++)
    {
        std::cout << numeros3[i] << " ";
    }

    return 0;
}*/