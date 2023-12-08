#include <iostream>
#include "../Libreria.h"

using namespace std;

int main()
{
    // Declarar arreglo de punteros a objetos Nodo.
    Nodo *Nodos[10];

    // Asignar valores al Grafo Dirigido.
    for (int i = 0; i < 10; i++)
        Nodos[i] = new Nodo(i);

    // Asignar direcciones al Grafo Dirigido.
    for (int i = 0; i < 10; i++)
    {
        // Impedir que i sobrepase 10 y ciclar direcciones.
        Nodos[i]->Izquierda = Nodos[(i + 9) % 10];
        Nodos[i]->Derecha = Nodos[(i + 1) % 10];
    }

    // Imprimir el diagrama del Grafo Dirigido.
    cout << " * Diagrama Grafo Dirigido:\n   ";
    ImprimirGrafo(Nodos[0]);

    // Liberar memoria usando "delete" en lugar de "free" porque los nodos son objetos.
    for (int i = 0; i < 10; i++)
        delete Nodos[i];

    return 0;
}