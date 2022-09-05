// =================================================================
//
// File: Metodos de ordenamiento.h
// Author: Santiago Reynaldo Aguilar Vega
// Matricula: A01709030
// Date: 05/09/2022
//
// =================================================================
#ifndef METODOS_H
#define METODOS_H

#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>
using namespace std;

int vector[] = {91, 58, 76, 89, 25, 5};
int largoArreglo = 6;
int temporal;

// =================================================================
// Performs the selection sort algorithm on an array.
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================

// Complejidad: O(n) esto debido a que cada llamda recursiva es un O(n) y esta solo se llama una vez 

void MetodoIntercambio(int vector[]){
    for(int indice = 0; indice < (largoArreglo-1); indice++){
        for(int indice2 = indice+1; indice2 < largoArreglo; indice2++){
            if(vector[indice] > vector[indice2]){
                temporal = vector[indice];
                vector[indice] = vector[indice2];
                vector[indice2] = temporal;
            }
        }
    }
}

// =================================================================
// Performs the bubble sort algorithm on an array
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================

// Complejidad: O(n) porque tiene dos llamadas recursivas en este caso, ya que este metodo es similar al de intercambio

void MetodoBurbuja(int vector[]){
	for(int indice = (largoArreglo - 1); indice > 0; indice--){
		for(int indice2 = 0; indice2 < indice; indice2++){
			if(vector[indice2] > (vector[indice2]+1)){
				//swap(vector, indice2, indice2 + 1);
			}
		}
    }
}

// =================================================================
// Performs the marge sort algorithm on an array
//
// @param A, an array of T elements.
// @param size, the number of elements in the array.
// =================================================================

// Complejidad: O(nlogn) Cada llamada recursiva tiene una complejidad O(n) y esta necesita una cantidad O(logn)para 
// poder dividir todo el vector.

void MergeSort (int inicio, int fin, int vector[]){
    int indice;
    if (inicio == fin) return;
    
    int mitad=(inicio+fin)/2;
        
    MergeSort(inicio, mitad, vector);
    MergeSort(mitad+1, fin, vector);
    
    for (int i=inicio; i<=mitad; i++){
        //cola1.push(vector[indice]);
    }
    for (int i=mitad+1; i<=fin; i++){
        //cola2.push(vector[indice]);
    }
    
    int pos=inicio;
    
    /*while (!cola1.empty() || !cola2.empty()){
        if (cola2.empty()){
            vector[pos]=cola1.front();
            cola1.pop();
        } else
        if (cola1.empty()){
            vector[pos]=cola2.front();
            cola2.pop();
        } else
        if (cola1.front() < cola2.front()){
            vector[pos]=cola1.front();
            cola1.pop();
        } else {
            vector[pos]=cola2.front();
            cola2.pop();
        }
        pos++;
    }
    return;*/
}

// =================================================================
// Performs a sequential search for an element within a vector.
//
// @param A, a vector of T elements.
// @param key, the element to search.
// @return the index of the searched element, -1 in case the element
//		   is not found in the vector.
// =================================================================

// Complejidad: O(n), ya que este metodo no hace tantas llamadas y solo compara el dato con cada numer del arreglo.

void BusquedaSecuencial(int vector[], int dato){
    int indice = 0;
    char Valid = false;
    while((Valid == false) && (indice < largoArreglo)){
        if(vector[indice] == dato){
            Valid = true;
        }
        indice++;
    }
    if(Valid == false){
        cout << "-1" << endl;
    }
    else if(Valid == true){
        cout << "El numero fue encontrado en la posicion: " << indice-1 << endl;
    }
}

// =================================================================
// Performs a binary search for an element within a vector
//
// @param A, a vector of T elements.
// @param key, the element to search.
// @return the index of the searched element, -1 in case the element
//		   is not found in the vector.
// =================================================================

// Complejidad: O(logn) esto debido a las varias llamdas que se hacen ya que aunque es muy eficiente es complejo,
// debido a que hace muvhas iteracciones en caso de ser un arreglo demaciado grande.

void BusquedaBinaria(int vector[], int dato){
    int inf = 0;
    int sup = largoArreglo; 
    int mitad;
    char Valid = false;
    while(inf <= sup){
        mitad = (inf + sup)/2;
        if(vector[mitad] == dato){
            Valid = true;
            break;
        }
        if(vector[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if(vector[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }
    }
    if(Valid == true){
        cout << "El numero a sido encontrado en la posocion: " << mitad << endl;
    }
    else{
        cout << "-1" << endl;
    }
}

#endif /* METODOS_H */