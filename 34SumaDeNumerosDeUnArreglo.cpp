#include <iostream>

int main()
{
    int numeros[] = {1, 2, 3, 4, 5}, suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma = suma + numeros[i];
        std::cout << numeros[i] << " + ";
    }

    std::cout << "\n Aqui esta tu suma: " << suma << "\n";
}

/*#include <iostream>
#include <iterator>

int main()
{

    int numeros[] = {1, 2, 3, 4, 5}, suma = 0;
    int longitud = std::size(numeros);

    for (int i = 0; i <= 4; i++)
    {
        suma += numeros[i];
        if (i == longitud - 1)
        {
            std::cout << numeros[i];
        }
        else
        {
            std::cout << numeros[i] << " + ";
        }
    }
    std::cout << "\nLa suma del arreglo equivale a: " << suma;

    return 0;
}
*/