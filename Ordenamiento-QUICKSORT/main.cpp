#include <iostream>
#include <fstream>

using namespace std;

const int N = 100;
typedef int tArray[N];
tArray A;

void ingres(tArray A, int tam);
void imprim(tArray A, int tam);

int mitad(tArray A, int pinicial, int pfinal);
void ordenar(tArray A, int pinicial, int pfinal);


int main()
{
    int tam;
    ofstream archivo;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> tam;



    ingres(A,tam);
    archivo.open("Ordenamiento.txt", ios::app);
    cout << "------------Antes------------" << endl;
    archivo << "------------Antes------------" << endl;
    imprim(A,tam);


    cout << "------------Despues------------" << endl;
    archivo << "------------Despues------------" << endl;
    ordenar(A, 0, tam-1);
   imprim(A,tam);
   archivo.close();
    return 0;
}

void ingres(tArray A, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese valor: ";
        cin >> A[i];

    }

}

void imprim(tArray A, int tam)
{
    ofstream archivo;

    archivo.open("Ordenamiento.txt", ios::app);
    for (int i = 0; i < tam; i++)
    {
        cout << "|" << A[i] << "|" << " ";
        archivo<< "|" << A[i] << "|" << " ";

    }
    cout << endl;
    archivo << endl;
    archivo.close();
}

int mitad(tArray A, int pinicial, int pfinal)
{

    return A[(pinicial + pfinal) / 2];

}

void ordenar(tArray A, int pinicial, int pfinal)
{
    int i = pinicial;
    int j = pfinal;
    int temp;

    int piv = mitad(A,pinicial,pfinal);

    do
    {
        while(A[i] < piv)
        {

            i++;

        }
        while(A[j] > piv)
        {

            j--;

        }


         if (i <= j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;

            i++;
            j--;

        }


    } while(i <= j);

    if (pinicial < j)
    {

        ordenar(A, pinicial, j);

    }

    if (i < pfinal)
    {

        ordenar(A, i, pfinal);

    }

}



