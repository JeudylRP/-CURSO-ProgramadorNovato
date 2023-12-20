/*#include <iostream>

using namespace std;
int main()
{
    int tamano;
    int bandera;

    cout << "Cuantos numeros tiene su array? : ";
    cin >> tamano;

    int *arr = new int[tamano];

    for (int i = 0; i < tamano; i++)
    {
        cout << "(" << (i + 1) << "): ";
        cin >> arr[i];
    }

    cout << "Esta es tu lista de numeros original:\n";
    for (int i = 0; i < tamano; i++)
    {
        cout << arr[i] << " ";
    }

        for (int i = 0; i < tamano; i++)
    {
        for (int j = 0; j < tamano - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                bandera = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = bandera;
            }
        }
    }

    cout << "\nEsta es tu lista de numeros ORDENADA:\n";

    for (int i = 0; i < tamano; i++)
    {
        cout << arr[i] << " ";
    }
}
*/
/*// TUTORIAL
#include <iostream>

int main()
{
    int numeros[5], aux;
    std::cout << "Ingresa 5 numeros: \n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingresa el numero " << i + 1 << ": ";
        std::cin >> numeros[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    std::cout << "Aqui están tus numero de form ascendente: \n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << numeros[i] << "\n";
    }

    std::cout << "Aqui están tus numero de forma descendente: \n";
    for (int i = 4; i >= 0; i--)
    {
        std::cout << numeros[i] << "\n";
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 9, 4};
    int aux;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
}
