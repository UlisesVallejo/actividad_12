#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}


int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Jose");
    arreglo.insertar_final("Ulises");
    arreglo.insertar_final("Vallejo");
    arreglo.insertar_final("Sierra");
    arreglo.insertar_final("Actividad");
    arreglo.insertar_final("12");
    arreglo.insertar_final("Arreglo");
    arreglo.insertar_final("Dinamico");

    arreglo.insertar_inicio("Dias");
    arreglo.insertar_inicio("Buenos");


    for(size_t i=0; i<arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    /*int *b = nullptr;
    b = new int[100];
    cout << b << " " << *b << endl;
    delete[] b;*/

    /*int a = 12;

    cout << a <<endl;
    cout << &a <<endl;
    modificar(&a);
    cout << a << endl;*/

    return 0;
}