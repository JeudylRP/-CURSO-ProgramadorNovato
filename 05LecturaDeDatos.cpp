#include <iostream>

/* Esta es la función main, podemos ingresar numeros y se van a mostrar en pantalla
    std::cout= es para mostrar en pantalla
    std::cin= es para leer datos del usuario
    std::cin>>numero= es para leer datos del usuario y guardarlos en la variable numero
    std::cout<<numero= es para mostrar en pantalla el valor de la variable numero
    std::cout<<"\n";= es para hacer un salto de linea
    return 0;= es para terminar el programa

*/

int main()
{
    float numero;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero; // cin= va ir del usuario a nuestro numero
    std::cout << "Este es el numero que ingresaste: ";
    std::cout<<numero;
    std::cout<<"\n";
    
        return 0;/*El return 0; en una función main indica que el programa ha terminado con éxito.
        - Un valor de retorno de 0 generalmente indica que todo salió bien
        - Otros valores distintos de 0 suelen representar un error */
        
        
}