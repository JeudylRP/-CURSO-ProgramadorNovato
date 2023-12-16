#include <iostream>
#include <time.h>

int main()
{
    int numero, aleatorio, contador = 0;
    srand(time(NULL));

    aleatorio = 1 + rand() % 100;

    do
    {
        std::cout << "Humano porfavor ingresa un numero entre el 1 y 100: " << aleatorio << "\n: ";
        std::cin >> numero;
        if (numero < aleatorio)
        {
            std::cout << "El numero que ingresaste es menor \n";
        }
        if (numero > aleatorio)
        {
            std::cout << "El numero que ingresaste es mayor \n";
        }
        contador++;

    } while (numero != aleatorio);
    std::cout << "Felicidades, intentos: " << contador;
}

/*#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));
    int aleatorio = rand() % 101;
    int adivina, contador = 1;
intenta:
    std::cout << "Adivina el numero entre 0 y 100\n";
    std::cin >> adivina;

    if (aleatorio > adivina)
    {
        std::cout << "El numero aleatorio es mas grande\n";
        contador++;
        goto intenta;
    }
    else if (aleatorio < adivina)
    {

        std::cout << "El numero aleatorio es mas pequeno \n";
        contador++;
        goto intenta;
    }

    else if (aleatorio == adivina)
    {
        std::cout << "Felicidades. Intentaste: " << contador << " veces";
    }
}
*/