#include <iostream>
#include <math.h>

int main()
{
    int suma = 0, cuadrado;

    for (int i = 1; i <= 10; i++)
    {
        cuadrado = pow(i, 2);
        suma += cuadrado;

        std::cout << "El cuadro de " << i << "=" << cuadrado << "\n";
    }
    std::cout << "\n";
    std::cout << "La suma de los cuadrados del 1 al 10 es: " << suma << "\n";
}

/*#include <iostream>
int main()
{

    double resultado;
    double suma = 0;

    for (int i = 1; i <= 10; i++)
    {

        resultado = i * i;
        suma += resultado;
        std::cout << "El cuadro de " << i << " es: " << resultado << "\n";
    }
    std::cout << "La suma de los cuadrados del 1 al 10 es igual a: " << suma;
}*/