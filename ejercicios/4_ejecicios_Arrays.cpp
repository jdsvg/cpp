#include <iostream>  //llamando la libreria
using namespace std; // asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#define MAX 100 // Creando una constante
int main()      // Inicializador del programa
{
    /* EJECIRCIO 1 */
    /*
        Lea 2 arreglos unidimensionales con valores reales y usando troo arreglo calcule la multiplicacion de los valores de ambos arreglos
        Array1      = 1     2       3
        Array2      = 4     5       6
        ArrayResult = 4     10      18
    */
    // int tamaño_arreglo = 0;
    // cout<<"Ingrese la cantidad de valores a calcular"<<endl;
    // cin>>tamaño_arreglo; cin.ignore(256, '\n');
    // int array1[tamaño_arreglo], array2[tamaño_arreglo], array_result[tamaño_arreglo];
    // //Llenando arreglos ---------------------------------------------------------------------------------------------------
    // cout<<"ARREGLO 1"<<endl;
    // for(int i = 0; i<tamaño_arreglo; i++){
    //     cout<<"Arreglo1: Ingrese el valor para la posicion: "<<i<<":";
    //     cin>>array1[i];
    // }
    // cout<<endl;
    // cout<<"ARREGLO 2"<<endl;
    // for(int i = 0; i<tamaño_arreglo; i++){
    //     cout<<"Arreglo1: Ingrese el valor para la posicion: "<<i<<":";
    //     cin>>array2[i];
    // }

    // //Mostrando datos de los arreglos --------------------------------------------------------------------------------------
    // cout<<endl;
    // cout<<"Mostrando arreglos"<<endl;
    // cout<<"Array1:"<<endl;
    // for(int i = 0; i<tamaño_arreglo; i++){cout<<array1[i]<<" ";}
    // cout<<endl;cout<<"Array2:"<<endl;
    // for(int i = 0; i<tamaño_arreglo; i++){cout<<array2[i]<<" ";}
    // cout<<endl;

    // //Operando y mostrando multiplicacion de elementos ----------------------------------------------------------------------
    // for(int i = 0; i<tamaño_arreglo; i++){array_result[i] = array1[i]*array2[i];}
    // cout<<"Mostrando resultados"<<endl;
    // cout<<"Array Result:"<<endl;
    // for(int i = 0; i<tamaño_arreglo; i++){cout<<array_result[i]<<" ";}
    // cout<<endl;cout<<endl;

    /* EJECIRCIO 2 */
    /*
        Lea 2 arreglos entero y genere otro con la combinacion de ambos arreglos.
        No necesariamente tendra la misma dimension.
        Array1      = 1     2       3       4
        Array2      = 5     6       7
        ArrayResult = 1     2       3       4       5       6       7
    */
    // int aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    // cout<<"Ingresando datos para Array1"<<endl;
    // do
    // {
    //     cout<<"Ingrese la cantidad de elementos para Array1: ";
    //     cin>>aux; cin.ignore(256, '\n');
    // } while (aux <= 0);
    // int array1[aux];
    // for (int i = 0; i < aux; i++)
    // {
    //     cout<<"Indique el valor para la posicion "<<i<<": ";
    //     cin>>aux2; cin.ignore(256, '\n');
    //     array1[i] = aux2;
    //     aux2 = 0;
    //     aux3++;
    // }
    // aux = 0, aux2 = 0;
    // cout<<endl;
    // cout<<endl;
    // cout<<"Ingresando datos para Array2"<<endl;
    // do
    // {
    //     cout<<"Ingrese la cantidad de elementos para Array2: ";
    //     cin>>aux; cin.ignore(256, '\n');
    // } while (aux <= 0);
    // int array2[aux];
    // for (int i = 0; i < aux; i++)
    // {
    //     cout<<"Indique el valor para la posicion "<<i<<": ";
    //     cin>>aux2; cin.ignore(256, '\n');
    //     array2[i] = aux2;
    //     aux2 = 0;
    //     aux3++;
    // }
    // aux4 =aux, aux = 0, aux2 = 0;

    // cout<<endl;
    // cout<<endl;
    // cout<<"Mostrando datos de Array1:"<<endl;
    // cout<<"Array1: ";
    // for (int i = 0; i < aux3-aux4; i++){cout<<array1[i]<<", ";}
    // cout<<endl;
    // cout<<"Mostrando datos de Array2:"<<endl;
    // cout<<"Array2: ";
    // for (int i = 0; i < aux4; i++){cout<<array2[i]<<", ";}

    // cout<<endl;
    // cout<<endl;
    // int array_result[aux3];
    // aux2=aux3-1;
    // cout<<"Operando y mostrando Array3 = Array1 & Array2"<<endl;
    // for (int i = 0; i < aux3-aux4; i++){array_result[i] = array1[i];}
    // cout<<endl;
    // for (int i = aux4-1; i >= 0; i--){array_result[aux2] = array2[i];aux2--;}
    // cout<<endl;
    // cout<<"Array Result:";
    // for (int i = 0; i < aux3; i++){cout<<array_result[i]<<", ";}
    // cout<<endl;
    //
    //

    /* EJECIRCIO 3 */
    /*
        Lea su nombre en minuscula y muestre por consola su nombre escrito en mayuscula. Use la funcion toupper.
    */
    //     char nombre_minuscula[MAX]; int x = 0;
    //     cout<<"Ingrese su nombre: ";cin.getline(nombre_minuscula, MAX+1);cin.ignore(256, '\n');// 'MAX+1' -> '\0'
    //     //
    //    /* '\0' == false */
    //     // while(nombre_minuscula[x] != false){ //Seria lo mismo, ya que busca validar solo aquello que sea "verdadero"
    //     while(nombre_minuscula[x]){x++;}char nombre_minuscula_x[x];
    //     for (int i = 0; i < x; i++){nombre_minuscula_x[i] = toupper(nombre_minuscula[i]);}
    //     for (int i = 0; i < x; i++){cout<<nombre_minuscula_x[i];}
    //     cout<<endl;

    /* EJECIRCIO 4 */
    /*
        Lea un arreglo e indique cual es el menor elemento y en que indice se encuentra.
    */
    // int array1[10], menor=0;
    // for (int i = 0; i < 10; i++)
    // {cout<<"Ingrese el numero para el indice "<<i<<": ";cin>>array1[i];}
    // for (int i = 1; i < 9; i++){
    //     if (array1[i] < array1[menor]){menor = i;}
    // }
    // cout<<endl;cout<<"Elemento menor del array es: "<<array1[menor]<<". En el indice: "<<menor<<endl;

    /* EJECIRCIO 5 */
    /*
        Ordenamiento Burbuja
        6 5 3 1 7 4 2
    */
    int A[] = {6, 5, 3, 1, 7, 4, 2};

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (A[j] > A[j+1]) //Orden asendente
            // if (A[j] < A[j+1]) //Orden desendente
            {
                int aux = A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
            

        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout<<A[i]<<", ";
    }
    cout<<endl;

    return 0;
} // main
