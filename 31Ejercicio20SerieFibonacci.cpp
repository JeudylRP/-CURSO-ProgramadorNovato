#include <iostream>

int main()
{
    int n, x = 0, y = 1, z = 0;

    do
    {
        std::cout << "Digita un numero mayor a 1: \n";
        std::cin >> n;
    } while (n < 1);
    std::cout << "1 ";

    for (int i = 1; i <= n; i++)
    {
        z = x + y;
        std::cout << z << " ";
        x = y;
        y = z;
    }

    std::cout << "\n";
}

/*
#include <iostream>

int main()
{

    int contador = 0, primero = 0, segundo = 1, siguiente = 0;
    std::cout << "Cuantos numeros de fibonacci quieres? \n";
    std::cin >> contador;

    for (int i = 1; i <= contador; i++)
    {
        siguiente = primero + segundo;
        primero = segundo;
        segundo = siguiente;
        std::cout << siguiente << "\n";
    }
}*/