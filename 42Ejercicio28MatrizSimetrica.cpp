// Mi Codigo
/*#include <iostream>
int main()
{
    int filas1, filas2, columnas1, columnas2;
    bool sonIdenticas;

    do
    {
        std::cout << "Dime cuantas filas tiene la Matriz A: ";
        std::cin >> filas1;
        std::cout << "Dime cuantas columnas tiene la Matriz A: ";
        std::cin >> columnas1;
        std::cout << "Dime cuantas filas tiene la Matriz B: ";
        std::cin >> filas2;
        std::cout << "Dime cuantas columnas tiene la Matriz B: ";
        std::cin >> columnas2;
    } while ((filas1 != filas2) || (columnas1 != columnas2));

    int matrizA[filas1][columnas1];

    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            std::cout << "Dime el valor de A. [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matrizA[i][j];
        }
    }
    std::cout << "Matriz A: \n";

    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            std::cout << matrizA[i][j];
        }
        std::cout << "\n";
    }

    int matrizB[filas2][columnas2];

    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            std::cout << "Dime el valor de B: [" << (i + 1) << "][" << (j + 1) << "]: ";
            std::cin >> matrizB[i][j];
        }
    }
    std::cout << "Matriz B: \n";

    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            std::cout << matrizB[i][j];
        }
        std::cout << "\n";
    }

    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            if (matrizA[i][j] == matrizB[i][j])
            {
                sonIdenticas = true;
            }
            else
            {
                sonIdenticas = false;
            }
        }
        std::cout << "\n";
    }

    if (sonIdenticas)
    {
        std::cout << "Las matrices son identicas";
    }
    else
    {
        std::cout << "Las matrices no son identicas";
    }

    return 0;
}*/
#include <iostream>
int main()
{
    int filMatrizA, colMatrizA, filMatrizB, colMatrizB;
inicio:
    std::cout << "Ingresa las medidas de la matriz A: ";
    std::cin >> filMatrizA >> colMatrizA;
    std::cout << "Ingresa las medidas de la matriz B: ";
    std::cin >> filMatrizB >> colMatrizB;

    if (filMatrizA == colMatrizA && filMatrizB == colMatrizB && filMatrizA == filMatrizB)
    {
        int matrizA[filMatrizA][colMatrizA], matrizB[filMatrizB][colMatrizB];

    llenarDenuevoMatriz:
        for (int i = 0; i < filMatrizA; i++)
        {
            for (int j = 0; j < colMatrizA; j++)
            {
                std::cout << "Ingresa los datos de la matriz A en la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
                std::cin >> matrizA[i][j];
            }
        }
        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                std::cout << "Ingresa los datos de la matriz B en la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
                std::cin >> matrizB[i][j];
            }
        }

        for (int i = 0; i < filMatrizB; i++)
        {
            for (int j = 0; j < colMatrizB; j++)
            {
                if (matrizA[i][j] != matrizB[j][i])
                {
                    std::cout << "Tus amtriczes A y B no son simetricas";
                    goto llenarDenuevoMatriz;
                }
            }
        }
    }
    else
    {
        std::cout << "Humano tu matriz A y B no son cuadradas\n";
        goto inicio;
    };
    std::cout << "Bien jugado";
}