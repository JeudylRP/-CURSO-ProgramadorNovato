// MI IDEA
/*#include <iostream>
int main()
{
    int matrizA[3][3], matrizB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ingrse en numero de la posicion: [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matrizA[i][j];
        }
    }
    std::cout << "\n";
    std::cout << "ESTA ES LA MATRIZ A: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizA[i][j];
        }
        std::cout << "\n";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j] = matrizA[j][i];
        }
        std::cout << "\n";
    }

       std::cout << "ESTA ES LA MATRIZ B: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizB[i][j];
        }
        std::cout << "\n";
    }
}
*/

#include <iostream>

int main()
{
    int matrizA[3][3], matrizB[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Humano ingresa los datos de la matriz en la la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j] = matrizA[j][i];
        }
    }

    std::cout << "\nMATRIZ A: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizA[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\nMATRIZ B: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizB[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}