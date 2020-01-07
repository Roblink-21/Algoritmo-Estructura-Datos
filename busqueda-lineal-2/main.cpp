#include <iostream>
#include <fstream>

using namespace std;
const int Max=100;
int arreglo[Max];

void busqueda(int arreglo[], int t);
void imprimir(int arreglo[], int t);


int main()
{
    //setlocale(LC_CTYPE,"Spanish");  // para poder usar elementos especiales
    int x,t;
    int dato;


    cout << "Ingrese el tamaño del arreglo: ";
    cin >> t;
    cout << "----------------------------------" << endl;




    for(int i= 0; i < t; i++)
    {

    cout << "Ingrese dato para el arreglo: ";
    cin >> x;
    arreglo[i] = x;
    }
    cout << "----------------------------------" << endl;
    cout << "Elementos del arreglo son: ";
    imprimir(arreglo,t);
    cout << "----------------------------------" << endl;
    busqueda(arreglo,t);





    return 0;
}

void imprimir(int arreglo[], int t)
{

    for (int i = 0; i < t; i++)
    {

        cout << "|" << arreglo[i] << "|";

    }
    cout << endl;
}

void busqueda(int arreglo[], int t)
{
    int y;
    bool c;
    c = false;
    ofstream archivo;
    string nombre;
    cout << "Ingrese el nombre del archivo:";
    cin.sync();
    getline(cin,nombre);
    cout << "----------------------------------" << endl;
    cout << "Ingrese el dato que desea buscar: ";
    cin >> y;
    archivo.open(nombre.c_str(), ios::out); //reconocer el texto
    for (int i = 0; i < t; i++)
    {
        if(arreglo[i]==y)
        {
            cout << "[ELEMENTO ENCONTRADO] ";
            cout << "EN LA POSICION " << i+1 << endl;
            archivo << "[ELEMENTO ENCONTRADO] ";
            archivo << "EN LA POSICION " << i+1 << endl;
            c = true;
        }

    }
            if(c == false)
        {
            cout << "[ELEMENTO NO ENCONTRADO] ";
            archivo << "[ELEMENTO NO ENCONTRADO] ";
        }
archivo.close();
}
