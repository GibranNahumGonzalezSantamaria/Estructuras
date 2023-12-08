#include <iostream>
#include "../Libreria.h"

using namespace std;

int main()
{
    // Asignar valores al Árbol Binario.
    Nodo *Raiz = new Nodo(0);
    Raiz->Izquierda = new Nodo(1);
    Raiz->Derecha = new Nodo(2);
    Raiz->Izquierda->Izquierda = new Nodo(3);
    Raiz->Izquierda->Derecha = new Nodo(4);
    Raiz->Izquierda->Izquierda->Izquierda = new Nodo(5);
    Raiz->Izquierda->Izquierda->Derecha = new Nodo(6);
    Raiz->Izquierda->Izquierda->Izquierda->Izquierda = new Nodo(7);
    Raiz->Izquierda->Izquierda->Izquierda->Derecha = new Nodo(8);
    Raiz->Izquierda->Izquierda->Izquierda->Izquierda->Izquierda = new Nodo(9);

    // Imprimir el diagrama del Árbol Binario.
    cout << " * Diagrama del Arbol Binario:" << endl;
    ImprimirArbol(Raiz);

    // Liberar memoria usando "delete" en lugar de "free" porque los nodos son objetos.
    delete Raiz->Izquierda->Izquierda->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Izquierda->Izquierda->Derecha;
    delete Raiz->Izquierda->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Izquierda->Derecha;
    delete Raiz->Izquierda->Izquierda->Izquierda;
    delete Raiz->Izquierda->Derecha;
    delete Raiz->Izquierda->Izquierda;
    delete Raiz->Derecha;
    delete Raiz->Izquierda;
    delete Raiz;

    return 0;
}