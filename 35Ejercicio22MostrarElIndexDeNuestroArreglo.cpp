#include <iostream>

int main()
{
    int numero[100], n;

    do
    {
        std::cout << "Ingresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 100): \n ";
        std::cin >> n;
    } while ((n < 1) || (n > 100));
    for (int i = 0; i < n; i++)
    {
        std::cout << "Humano ingresa el valor del elemento " << (i + 1) << " : ";
        std::cin >> numero[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << (i + 1) << "=" << numero[i] << "\n";
    }

    return 0;
}

/*
#include <iostream>
int main()
{
    int largura;
    do
    {
        std::cout << "Ingresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 100): \n ";
        std::cin >> largura;
    } while (largura < 1 || largura > 100);

    int *numeros = new int[largura];
    for (int i = 1; i <= largura; i++)
    {
        std::cout << "Ingrese el valor del numero " << i << ": ";
        std::cin >> numeros[i];
    }

    for (int i = 1; i <= largura; i++)
    {
        std::cout << "el numero " << i << " equivale a: " << numeros[i] << "\n";
    }
}
*/