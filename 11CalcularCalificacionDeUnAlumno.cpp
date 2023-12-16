#include <iostream>
int main()
{
    float practicas, participacion, examen, res;

    std::cout << "Ingresa los datos que se te piden \n";
    std::cout << "Calificacion de las practicas ";
    std::cin >> practicas;
    std::cout << "Calificacion de las participacion ";
    std::cin >> participacion;
    std::cout << "Calificacion del examen ";
    std::cin >> examen;

    practicas *= 0.40;
    participacion *= 0.20;
    examen *= 0.40;

    res = practicas + participacion + examen;
    std::cout << "\nLa calificacion final es: " << res << "\n";
}