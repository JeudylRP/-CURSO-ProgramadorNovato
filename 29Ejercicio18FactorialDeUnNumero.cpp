#include <iostream>

int main()
{

    int numero = 0, factorial = 1;

    do
    {
        std::cout << "Humano ingresa un numero mayor a 1: \n";
        std::cin >> numero;
    } while (numero < 1);

    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
        std::cout << i << "*";
    }
    std::cout << "\n Aqui esta tu factorial: " << factorial;
}

/*
#include <iostream>

int main()
{
    int numFactorial = 0;
    int result = 1;
    std::cout << "Dime la factorial que quieres calcular: ";
    std::cin >> numFactorial;

    for (int i = 1; i <= numFactorial; i++)
    {
        result = i * result;
    }
    std::cout << result;
}
*/