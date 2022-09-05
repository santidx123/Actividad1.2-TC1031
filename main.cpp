#define CATCH_CONFIG_MAIN 
#include <iostream>
#include <string>
#include <sstream>
#include "Metodos.h"

using namespace std;

int main(){

    int dato;

    //Prueba de Busqueda Secuencial
    cout << "Prueba de busqueda secuencial" << endl;
    cout << "Inserte dato a buscar en el arreglo: " << endl;
    MetodoIntercambio(vector);
    cin >> dato;
    BusquedaSecuencial(vector, dato);

    //Prueba de Busqueda Binaria
    cout << "Prueba de busqueda binaria" << endl;
    cout << "Inserte dato a buscar en el arreglo: " << endl;
    MetodoIntercambio(vector);
    cin >> dato;
    BusquedaBinaria(vector, dato);
}