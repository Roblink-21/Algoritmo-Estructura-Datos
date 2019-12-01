#include <iostream>

using namespace std;

void ing(int a[], int n );
void tl(int a[], int n );
void num(int a[] , int n);

int main()
{

    int arreglo[5];


    ing(arreglo, 5);
    tl(arreglo, 5);
    num(arreglo, 5);


    return 0;
}

void ing(int a[5], int n)
{

    cout << "Administracion de Pagos"<< endl;
    cout << "Ingrese las horas trabajadas en los siguientes dias"<< endl;
    cout << "---------------------------------------------------"<< endl;
    cout << "Dia lunes: "<< endl;
    cin >> a[0];
    cout << "Dia martes: "<< endl;
    cin >> a[1];
    cout << "Dia Miercoles: "<< endl;
    cin >> a[2];
    cout << "Dia Jueves: "<< endl;
    cin >> a[3];
    cout << "Dia Viernes: "<< endl;
    cin >> a[4];
}

void tl(int a[5], int n )
{
    int horas=0;
    for (int i = 0; i < 5; i++)
    {
        horas = horas + a[i];

    }
    cout << "---------------------------------"<< endl;
     cout << "Las horas totales por la semana son: "<< horas << endl;
     cout << "---------------------------------"<< endl;

}
void num(int a[5], int n)
{
     double total=0,x;
    cout << "---------------------------------"<< endl;
    cout << "Ingrese el costo por hora: "<< endl;
    cin >> x;
    cout << "---------------------------------"<< endl;
    cout << "Su sueldo por la semana es: "<< endl;
    for (int i = 0; i < 5; i++)
    {
        total = total + x*a[i];

    }
    cout << total << endl;
    cout << "------Confiteca-------"<< endl;
}
