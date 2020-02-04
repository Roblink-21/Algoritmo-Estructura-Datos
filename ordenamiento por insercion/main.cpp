#include <iostream>

using namespace std;

const int MAX = 5;
typedef int tArray[MAX];
tArray a;
void prim(tArray a, int x);
void orden(tArray a, int x);
void fin(tArray a, int x);

int main()

{
    int x;
    cout << "Ingrese el tamaño del arreglo: " ;
    cin >> x;
    prim(a,x);
    cout << "---------ARREGLO ANTES----------" << endl;
     fin(a,x);
    orden(a,x);
    cout << "---------ARREGLO DESPUES----------" << endl;
    fin(a,x);


    return 0;
}

void prim(tArray a,int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "Ingrese el valor: ";
        cin >> a[i];


    }


}
void orden(tArray a, int x)
{
     int i, pos,aux;

    for(int i = 0; i < x; i++)
    {
        pos = i;

        aux = a[i];

       while((pos > 0)&&(a[pos-1]>aux))
       {

           a[pos] = a[pos - 1];
           pos--;

       }

        a[pos] = aux;
    }

}
void fin(tArray a, int x)
{
    for(int i = 0; i < x; i++)
    {

        cout << "|" << a[i] << "|" << " ";

    }
    cout << endl;
}
