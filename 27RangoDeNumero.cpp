#include <iostream>

int main()
{

    int numero = 0, suma = 0;

    do
    {
        std::cout << "Intrudze tu numero: \n";
        std::cin >> numero;
        suma += numero;
        std::cout << "Suma: " << suma << "\n";
    } while ((numero != 0) && ((numero < 100) || numero > 200));
}