#include <iostream>

using namespace std;

struct Nodo
{
    int Dato;
    Nodo *Izquierda;
    Nodo *Derecha;

    // Constructor para inicializar miembros de la estructura.
    Nodo(int Entero)
    {
        Dato = Entero;
        Izquierda = NULL;
        Derecha = NULL;
    }

    /* El constructor ayuda a simplificar código al momento de declarar cada Nodo.

        En lugar de estas instrucciones:
            struct Nodo *Nodo1 = (struct Nodo *)malloc(sizeof(struct Nodo));
            Nodo1->Dato = 10;
            Nodo1->Anterior = NULL;
            Nodo1->Siguiente = Nodo2;

        Podemos usar solo una instrucción indicando su recorrido:
            Nodo *Raiz = new Nodo(0);
    */
};

void ImprimirArbol(Nodo *Raiz, int Separacion = 3, int Espacio = 5)
{
    // Imprimir diagrama si Raíz != NULL.
    if (Raiz == NULL)
        return;

    Separacion += Espacio;

    // Imprimir rama Derecha.
    ImprimirArbol(Raiz->Derecha, Separacion);

    // Imprimir Nodo Actual.
    cout << endl;
    for (int i = Espacio; i < Separacion; i++)
        cout << " ";

    cout << Raiz->Dato << endl;

    // Imprimir rama Izquierda.
    ImprimirArbol(Raiz->Izquierda, Separacion);
}

void ImprimirGrafo(Nodo *Inicio)
{
    // Inicializar Nodo Actual con Inicio.
    Nodo *Actual = Inicio;

    for (int i = 0; i < 10; i++)
    {
        // Imprimir Nodo Actual.
        cout << Actual->Dato << ", ";

        // Mover al siguiente Nodo.
        Actual = Actual->Derecha;
    }

    cout << endl;
}