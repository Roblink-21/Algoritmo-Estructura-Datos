#include <iostream>

using namespace std;

void impr(int a[], int n );
void num(int a[] , int n);

int main()
{
    int arreglo[5] = {3,7,4,2};


    num(arreglo, 5);
    impr(arreglo, 5);

    return 0;
}

void impr(int a[5], int n)
{
    cout << "ordenado es: "<< endl;
    for (int i = 0; i < 4; i++)
    {

        cout << "->" <<a[i];
    }

}
void num(int a[5], int n)
{
     int aux, min;

    for (int i = 0; i < 4; i++)
    {
        min =i;
        for (int j = i+1; j < 4; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
        }
        aux=a[i];
        a[i] = a[min];
        a[min]=aux;
    }

}
