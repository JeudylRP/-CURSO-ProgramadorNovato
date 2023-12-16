#include <iostream>
int main()
{
    char letra;

    do
    {
        std::cout << "Presiona la letra a: ";
        std::cin >> letra;

    } while (letra == 'a');

    std::cout << "Preciona letra a";
    return 0;
}