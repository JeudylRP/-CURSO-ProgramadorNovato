/*//MI IDEA
#include <iostream>
#include <vector>

int main()
{
    int x, y;

    std::cout << "Cuantas lineas tiene tu matriz? : ";
    std::cin >> x;
    std::cout << "Cuntas columnas tiene tu matriz? : ";
    std::cin >> y;

    std::vector<std::vector<int>> matriza(x, std::vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "Ingresa el valor de:  [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matriza[i][j];
        }
    }

    std::cout << "ESTA ES LA MATRIZ ORIGINAL: \n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << matriza[i][j];
        }
        std::cout << "\n";
    }

    std::vector<std::vector<int>> matrizb(x, std::vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrizb[i][j] = matriza[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "ESTA ES LA MATRIZ COPIADA: \n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << matrizb[i][j];
        }
        std::cout << "\n";
    }
}
*/

// TUTORIAL
#include <iostream>

int main()
{
    int matriza[100][100], matrizb[100][100], filas, columnas;
    std::cout << "Humano ingresa la cantida de filas y columnas de tu matriz: ";
    std::cin >> filas >> columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "Humano ingresa la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matriza[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizb[i][j] = matriza[i][j];
        }
    }
    std::cout << "\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << matrizb[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
