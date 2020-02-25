
void heapSort(tArray A, int tm)
{
    int valor, temp, a;
    //insertar nodos en el arreglo
    for(int i = tm; i > 0; i--)
    {
        //agregar
        for(int j = 1; j <= i; j++)
        {

            valor = A[j];
            a = j/2;

        //intercambiar las posiciones
        //De los nodos del arbol
            while((a > 0) && (A[a]< valor))
            {
                A[j] = A[a];
                j = a;
                a= a/2;

            }
            //Determinar el nodo raiz e intercambiar
            //las posiciones
            A[j] = valor;

        }
        temp = A[1];
        A[1] = A[i];
        A[i] = temp;

    }

}
