#include <iostream>
int main()
{
    int numero, suma = 0;

    do
    {
        std::cout << "Humano, porfavor ingresa un numero mayor a 1: ";
        std::cin >> numero;
    } while (numero <= 1);
    for (int i = 1; i <= numero; i++)
    {
        suma = suma + i;
        std::cout << i << "+";
    }
    std::cout << "\n Aqui esta du suma: " << suma << "\n";
}

/*#include <iostream>

int main()
{
    int nummer = 3, suma = 0;
    std::cout << "Ingresa el numero: ";
    std::cin >> nummer;

    for (int i = 1; i <= nummer; i++)
    {

        suma += i;
    }
    std::cout << "Tu suma equivale a " << suma;
}

*/