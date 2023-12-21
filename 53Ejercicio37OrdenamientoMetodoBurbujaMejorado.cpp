/*// TUTORIAL
//  Sin burbuja mejorado =  20 ciclos.
// Con burbuja mejorado = 8 ciclos.
#include <iostream>
int main()
{
    int numeros[5], aux, ciclos = 0;
    bool ordenado = false;
    std::cout << "Ingresa 5 numeros: \n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingresa el numero " << (i + 1) << ": ";
        std::cin >> numeros[i];
    }
    for (int i = 0; i < 5 && ordenado == false; i++)
    {
        ordenado = true;
        for (int j = 0; j < 4; j++)
        {

            if (numeros[j] > numeros[j + 1])
            {
                ordenado = false;
                aux = numeros[j];
                numeros[j + 1] = numeros[j];
                numeros[j + 1] = aux;
            }
            ciclos++;
        }
    }
    std::cout << "Aqui están tus numero de forma ascendente en: " << ciclos << " ciclos: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << numeros[i] << "\n";
    }

    std::cout << "Aqui están tus numero de forma descendente en: " << ciclos << " ciclos: \n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout << numeros[i] << "\n";
    }
    return 0;
}*/
// MI IDEA
#include <iostream>
using namespace std;
int main()

{
    int numeros[5], aux, ciclos = 0;
    bool ordenado = false;
    std::cout << "Ingresa 5 numeros: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << " (" << (i + 1) << "): ";
        cin >> numeros[i];
    }

    cout << "Este su arreglo sin ordenar: ";
    for (int i = 0; i < 5; i++)
    {

        cout << numeros[i] << " ";
    }

    for (int i = 0; i < 5 && ordenado == false; i++)
    {
        ordenado = true;
        for (int j = 0; j < 4; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                ordenado = false;
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
            ciclos++;
        }
    }

    cout << "\nEste su arreglo ORDENADO: ";
    for (int i = 0; i < 5; i++)
    {

        cout << numeros[i] << " ";
    }
    cout << "\n";
    cout << "Se ha ordenado en " << ciclos << " ciclos ";
    return 0;
}