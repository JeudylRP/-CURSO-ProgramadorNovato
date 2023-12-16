#include <iostream>
int main()
{
    float n1, n2, suma, resta, mult, div;

    std::cout << "Esccribe un numero: ";
    std::cin >> n1;
    std::cout << "Esccribe un numero: ";
    std::cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    std::cout << "Resultado de la suma= " << suma << "\n";
    std::cout << "Resultado de la suma= " << resta << "\n";
    std::cout << "Resultado de la suma= " << mult << "\n";
    std::cout << "Resultado de la suma= " << div << "\n";

    return 0;
}