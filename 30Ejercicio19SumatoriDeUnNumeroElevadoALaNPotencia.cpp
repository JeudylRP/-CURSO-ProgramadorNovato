#include <iostream>
#include <math.h>

int main()
{
    float n, suma = 0, potencia = 0;
    do
    {
        std::cout << "Ingresa un numero mayor a 1: ";
        std::cin >> n;

    } while (n < 1);
    for (int i = 1; i <= n; i++)
    {
        potencia = pow(2, i);
        suma += potencia;
        std::cout << "2^" << i << "+";
    }
    std::cout << "\n Aqui está tu sumatoria: " << suma;
}

/*#include <iostream>
#include <math.h>

int main()
{
    int potencia;
    double resultado = 0;
    std::cout << "Ingrese un numero mayor a 1: ";
    std::cin >> potencia;

    for (int i = 1; i <= potencia; i++)
    {
        resultado = pow(2, i);

        std::cout << 2 << "^" << i << "+";

    }
    std::cout << "\nSumatoria: " << resultado;
}*/