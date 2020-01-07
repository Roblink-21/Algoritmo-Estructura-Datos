#include <iostream>
#include <fstream>
using namespace std;

int menu();
void crear();
void muestra();

string nombre;
string apellido;
int edad;
char r;

int main()
{
    int op;
    op = menu();
 while (op != 0)
 {
       switch (op)
    {
        case 1:
        {
        string nombre_agenda;
        cout << "Ingrese el nombre del archivo:";
        cin.sync();
        getline(cin,nombre_agenda);
        crear();
        }
        break;
         case 2:
        {
        muestra();
        }
        break;
    }
op = menu();
}
}

void crear()
    {

    ofstream archivo_friend;
    archivo_friend.open("contactos.txt", ios::out);

    do
    {
        cout <<"\tIngrese el nombre: ";
        getline(cin,nombre,'\n');
        cout <<"\tIngrese el apellido: ";
        getline(cin,apellido,'\n');
        cout <<"\tIngrese la edad: ";
        cin >>edad;
        archivo_friend<<nombre<<" "<<apellido<<" "<<edad<< "\n";
        cout << "Desea ingresar otro contacto s/n: ";
        cin >>r;
        cin.ignore(); //sigue la lectura
    }
    while(r == 's');

    archivo_friend.close();
    }

void muestra()
    {

    ifstream archivo_lectura("contactos.txt");
    string texto;
    cout <<"-----------------Mi--Agenda------------------"<< "\n" ;
    while(!archivo_lectura.eof())
    {

        archivo_lectura>>nombre>>apellido>>edad;

       if(!archivo_lectura.eof())
       {
        getline(archivo_lectura,texto);
        cout <<"Nombre: "<< nombre << "\n" ;
        cout <<"Apellido: "<< apellido << "\n";
        cout <<"Edad: "<< edad << "\n";
       }

    }

    archivo_lectura.close();
     cout <<"---------------------------------------------"<< "\n" ;
    }

int menu()
 {
        int x = -1;
        while ((x < 0)||(x > 2))
        {
            cout <<"--------------AGENDA------------------"<< endl;
            cout <<"1 - Escribir contactos"<< endl;
            cout <<"2 - Mostrar los contactos"<< endl;
            cout <<"0 - Para Salir"<< endl;
            cout <<"Opcion: ";
            cin >>x;
          if ((x < 0)||(x > 2))
            {
               cout <<"!El valor no es valido¡"<< endl;
            }
        }
     return x;
 }
