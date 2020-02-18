#include <iostream>

using namespace std;

//Plantilla del nodo
struct Nodo
{
    int dato;
    Nodo *derecho;
    Nodo *izquierdo;


};

//Nodos listos para ser insertados en el arbol
Nodo *crearNodoPadresHijos(int n);

//Arbol listo para ser usados
Nodo *arbolbinario = NULL;



void insertarNodosenArbolBinario(Nodo *&arbolbinario, int n);

void mostrarArbolBinario(Nodo *&arbolbinario, int separator);

void pre_orden(Nodo *&arbolbinario);
void in_orden(Nodo *&arbolbinario);
void pos_orden(Nodo *&arbolbinario);


int main()
{
    int n;

   for (int i = 0; i < 9; i++)
   {void mostrarArbolBinario(Nodo *&arbolbinario, int separator);


       cout << "Insertar nodos: ";
       cin >> n;

       insertarNodosenArbolBinario(arbolbinario, n);

   }
   mostrarArbolBinario(arbolbinario, 0);

   cout << endl;
    cout << "Pre-orden: ";
   pre_orden(arbolbinario);
   cout << endl;
    cout << "In-orden: ";
   in_orden(arbolbinario);
   cout << endl;
    cout << "Pos-orden: ";
   pos_orden(arbolbinario);
   cout << endl;

    return 0;
}

Nodo *crearNodoPadresHijos(int n)
{
    //Inciali EL ARBOL COMO LOS NODOS
    Nodo *nuevo = new Nodo();
    //Asignar los valores al nodo creado(instanciado)
    nuevo -> dato = n;
    nuevo -> derecho = NULL;
    nuevo -> izquierdo = NULL;

    return nuevo;

}


void insertarNodosenArbolBinario(Nodo *&arbolbinario, int n)
{
    if(arbolbinario == NULL)
    {

        Nodo *nuevo = crearNodoPadresHijos(n);
        arbolbinario = nuevo;
    }
    else
    {
        //Insertar nodo raiz
        int datoRaiz = arbolbinario->dato;
        if (n < datoRaiz)
        {
            //Insertar el siguiente nodo en el sub-izquierdo
            insertarNodosenArbolBinario(arbolbinario->izquierdo, n);

        }
        else
        {
            //Insertar el siguiente nodo en el sub-derecho
            insertarNodosenArbolBinario(arbolbinario->derecho, n);

        }
    }

}


void mostrarArbolBinario(Nodo *&arbolbinario, int separator)
{
    if(arbolbinario == NULL)
    {
        return;

    }
    else
    {

        mostrarArbolBinario(arbolbinario->derecho, separator+1);
        for (int i= 0; i < separator; i++)
        {

            cout << " ";

        }
        cout << arbolbinario->dato << endl;

        mostrarArbolBinario(arbolbinario->izquierdo, separator+1);

    }

}

void pre_orden(Nodo *&arbolbinario)
{
    if(arbolbinario == NULL)
    {
        return;

    }
    else
    {
        cout << arbolbinario->dato << "-";
        pre_orden(arbolbinario->izquierdo);
        pre_orden(arbolbinario->derecho);

    }
}

void in_orden(Nodo *&arbolbinario)
{
    if(arbolbinario == NULL)
    {
        return;

    }
    else
    {

        pre_orden(arbolbinario->izquierdo);
        cout << arbolbinario->dato << "-";
        pre_orden(arbolbinario->derecho);

    }
}

void pos_orden(Nodo *&arbolbinario)
{
    if(arbolbinario == NULL)
    {
        return;

    }
    else
    {

        pre_orden(arbolbinario->izquierdo);
        pre_orden(arbolbinario->derecho);
        cout << arbolbinario->dato << "-";

    }
}
