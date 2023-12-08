#include <iostream>
#include "../Libreria.h"

using namespace std;

int main()
{
    // Asignar valores al Árbol Binario Equilibrado.
    Nodo *Raiz = new Nodo(0);
    Raiz->Izquierda = new Nodo(1);
    Raiz->Derecha = new Nodo(2);
    Raiz->Izquierda->Izquierda = new Nodo(3);
    Raiz->Izquierda->Derecha = new Nodo(4);
    Raiz->Derecha->Izquierda = new Nodo(5);
    Raiz->Derecha->Derecha = new Nodo(6);

    // Imprimir el diagrama del Árbol Binario Equilibrado.
    cout << " * Diagrama del Arbol Binario Equilibrado:" << endl;
    ImprimirArbol(Raiz);

    // Liberar memoria usando "delete" en lugar de "free" porque los nodos son objetos.
    delete Raiz->Derecha->Derecha;
    delete Raiz->Derecha->Izquierda;
    delete Raiz->Izquierda->Derecha;
    delete Raiz->Izquierda->Izquierda;
    delete Raiz->Derecha;
    delete Raiz->Izquierda;
    delete Raiz;

    return 0;
}
