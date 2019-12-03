#include <iostream>

using namespace std;
int menu();
const int Max = 20;

int main()
{
 int cuenta[Max];
 int opcion, valor, contador = 0;
    opcion = menu();
 while(opcion != 0){
      cout << "-----------------------------------------------------" << endl;
 switch(opcion) {
 case 1:
    cout << "Ingrese dinero (0 para terminar)" << endl;
    cout << "Ingrese el dinero 1: ";
    cin >> valor;
        while((valor > 0) && (contador < Max)){
            cuenta[contador] = valor;
            contador++;
    cout << "Ingrese el dinero " << contador + 1  << ": ";
    cin >> valor;
    }

 break;
 case 2:
     for (int i=0; i <= contador; i++)
    {
        for (int j=i+1; j < contador; j++)
        {
            if ( cuenta[j] < cuenta[i])
            {
                int aux = cuenta[i];
                cuenta[i] = cuenta[j];
                cuenta[j] = aux;
            }
        }
    }
    for (int i = 0; i < contador ; i++)
    {
        cout << i + 1 << ". " << cuenta[i] << endl;
    }

    break;
    case 3:
     for (int i=0; i <= contador; i++)
    {
        for (int j=i+1; j < contador; j++)
        {
            if ( cuenta[j] > cuenta[i])
            {
                int aux = cuenta[i];
                cuenta[i] = cuenta[j];
                cuenta[j] = aux;
            }
        }
    }
    for (int i = 0; i < contador ; i++)
    {
        cout << i + 1 << ". " << cuenta[i] << endl;
    }

    break;
    case 4:
        int par = 0 , impar = 0;
    for (int i=0; i < contador; i++)
    {
        if (cuenta[i]%2 == 0){
            par = par + cuenta[i];
        }
        else {
            impar = impar + cuenta[i];
        }
    }
    cout << "Suma pares:  "<< par << endl;
    cout << "Suma impares:  "<< impar << endl;

    }

 opcion = menu();
 }

}

int menu()
{
    int x = -1;
    while (x < 0 || x > 4){
    cout << "-----------------------------------------------------" << endl;
    cout << endl;
    cout << "                BANCO INTERNACIONAL" << endl;
    cout << endl;
    cout << "-----------------------Menu--------------------------" << endl;
    cout << " Bienvenido al banco de tu casa :)" << endl;
    cout << endl;
    cout << "  1.Ingresar valores (dinero) " << endl;
    cout << "  2.Mostrar los elementos ordenados de menor a mayor " << endl;
    cout << "  3.Mostrar los elementos ordenados de mayor a menor " << endl;
    cout << "  4.Mostar la suma de los elementos pares e impares" << endl;
    cout << "  0.Salir " << endl;

     cout << " Opcion: ";
     cin >> x;

    if ((x < 0) || (x > 4))
    {
       cout << "Opcion no valida!!" << endl;
       cout << endl;
    }
    }
   return x;

}
