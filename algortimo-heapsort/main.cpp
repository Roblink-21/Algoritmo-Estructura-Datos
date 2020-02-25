#include <iostream>

using namespace std;

const int N = 100;
typedef int tArray[N];
tArray A;

#include "uno.h"

#include "Heapsort.h"

#include "dos.h"

using namespace datos;


int main()
{

    int tm;
    cout << "Ingrese el tamanio: ";
    cin >> tm;

    insertarElementos(A, tm);
    cout << "Antes: " << endl;
    imprim(A, tm);
    heapSort(A, tm);

    cout << endl<< endl;
    cout << "Despues: " << endl;
    imprim(A, tm);


    return 0;
}



