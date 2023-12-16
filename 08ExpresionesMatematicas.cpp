#include <iostream>

int main()
{
    float a, b, res;
    std::cout << "Ingresa lo siguiente: \n";
    std::cout << "Valor a:";
    std::cin >> a;
    std::cout << "Valor b:";
    std::cin >> b;
    // jerarquia de operaciones: exponente, raiz, multiplicacion, division, suma, resta
    res = (a / b) + 1;
    std::cout.precision(3);//.precision sirve pararedondear el resultado, en este caso a 3 decimales. Ejemplo: 1.83333 = se redondea a 1.83. El "." cuanta como un decimal.
    //1.83333 = se redondea a 1.83
    std::cout << "El resultado es:" << res << "\n";

    return 0;
}
