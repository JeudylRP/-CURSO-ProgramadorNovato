#include <iostream>

int main()
{
    int n1;
    std::cout << "Este programa dice si tu numero es par o impar \n";

    std::cout << "Ingresa tu numero: ";
    std::cin >> n1;

    if (n1 % 2 == 0)
    {
        std::cout << "Tu numero "<<n1<< "es par";
    }
    else
    {

        std::cout << "Tu numero "<<n1<< " es impar";
    }
    return  0;
}