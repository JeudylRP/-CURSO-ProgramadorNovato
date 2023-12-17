/*//Mi CODIGO
#include <iostream>
#include <vector>

int main()
{
    int x, y;

    std::cout << "Cuantas lineas tiene tu matriz? : ";
    std::cin >> x;
    std::cout << "Cuantas columnas tiene tu matriz? :";
    std::cin >> y;

    std::vector<std::vector<int>> matriz(x, std::vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << "Ingrese el valor para la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    // Imprimir matriz
    std::cout << "ESTA ESTU MATRIZ: \n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
} */

// TUTORIAL


