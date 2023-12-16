#include <iostream>

int main()
{
    int numeroIngresado, numeroAEncotrar = 5;
    std::cout << "ingresa un numero mayor al que estoy pensando: ";
    std::cin >> numeroIngresado;
    if (numeroIngresado >= numeroAEncotrar)
    { std::cout<<"El numero ingresado es mayor al que estoy pensando\n";

    }else{

        std::cout<<"El numero ingresado es menor al que estoy pensando\n";
    }

    return 0;
}