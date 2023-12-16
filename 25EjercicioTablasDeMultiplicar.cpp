#include <iostream>

int main()
{

    int numero;

    do
    {
        std::cout << "Digita un numero entre el 1 y el 10: ";
        std::cin >> numero;
        if (numero < 0 || numero > 10)
        {
            std::cout << "Te dije que del 1 al 10!!!! \n";
        }

    } while (numero < 0 || numero > 10);

    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << " x " << numero << " = " << i * numero << "\n";
    }
}