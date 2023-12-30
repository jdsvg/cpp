#include <iostream>  //llamando la libreria
using namespace std; // asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#define MAX 100 // Creando una constante
int main()      // Inicializador del programa
{
    /* EJECIRCIO 1 */
    /*
        Escriba un programa que pida al suusario los datos de dos matrices de NxN
        y luego muestre su suma
    */
    // int aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    // cout << "Indique cuantas filas tendran sus matrices: ";cin >> aux;cin.ignore(256, '\n');
    // cout << "Indique cuantas columnas tendran sus matrices: ";cin >> aux2;cin.ignore(256, '\n');

    // int A[aux][aux2], B[aux][aux2];
    
    // cout << endl;
    // cout << endl;
    // for (int x = 0; x < aux; x++)
    // {
    //     for (int y = 0; y < aux2; y++)
    //     {cout << "Ingrese el valor para la matriz A, en la posicion [" << x << "][" << y << "]: ";cin >> A[x][y];cin.ignore(256, '\n');}cout << endl;
    // }
    
    // cout << endl;
    // cout << endl;
    // for (int x = 0; x < aux; x++)
    // {
    //     for (int y = 0; y < aux2; y++)
    //     {cout << "Ingrese el valor para la matriz B, en la posicion [" << x << "][" << y << "]: ";cin >> B[x][y];cin.ignore(256, '\n');}cout << endl;
    // }

    // cout << endl;
    // cout << endl;
    // aux3 = aux;
    // aux4 = aux2;
    // for (int x = 0; x < aux3; x++)
    // {
    //     for (int y = 0; y < aux4; y++)
    //     {
    //         aux = A[x][y];
    //         aux2 = B[x][y];
    //         A[x][y] = aux+aux2;
    //     }
    //     cout << endl;
    // }

    // cout << endl;
    // cout << endl;
    // for (int i = 0; i < aux3; i++)
    // {
    //     for (int j = 0; j < aux4; j++){cout<<A[i][j]<<" ";}cout<<endl;
    // }










    /* EJECIRCIO 2 */
    /*
        Escriba un programa que pida al suusario los datos de dos matrices de NxN
        y luego muestre su producto

        a   b           e   f       (a*e)+(b*g)     (a*f)+(b*h)
        c   d           g   h       (c*e)+(d*g)     (c*f)+(g*g)

    */
    // int aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    // cout << "Indique cuantas filas y columnas tendran sus matrices: ";cin >> aux;cin.ignore(256, '\n');
    // int A[aux][aux], B[aux][aux];


    // Ejemplo rapido
    // aux = 3;
    // int A[aux][aux] = { {1,2,3},
    //                     {4,5,6},
    //                     {7,8,9},};
                        
    // int B[aux][aux] = { {5,6,7},
    //                     {2,1,3},
    //                     {2,3,1},};
    // int C[aux][aux];


    // Proceso normal
    // cout << endl;
    // cout << endl;
    // for (int x = 0; x < aux; x++)
    // {
    //     for (int y = 0; y < aux2; y++)
    //     {cout << "Ingrese el valor para la matriz A, en la posicion [" << x << "][" << y << "]: ";cin >> A[x][y];cin.ignore(256, '\n');}cout << endl;
    // }
    
    // cout << endl;
    // cout << endl;
    // for (int x = 0; x < aux; x++)
    // {
    //     for (int y = 0; y < aux2; y++)
    //     {cout << "Ingrese el valor para la matriz B, en la posicion [" << x << "][" << y << "]: ";cin >> B[x][y];cin.ignore(256, '\n');}cout << endl;
    // }

    // cout << endl;
    // cout << endl;
    // for (int x = 0; x < aux; x++)
    // {
    //     for (int y = 0; y < aux; y++)
    //     {
    //         C[x][y]=0;
    //         for (int i = 0; i < aux; i++)
    //         {
    //             C[x][y]=C[x][y]+     (A[x][i]*B[i][y]);
    //         }
    //         cout<<C[x][y]<<" ";
    //     }
    //     cout << endl;
    // }





    /*
        EJERCICIO 3

        Escriba un programa que genere la matriz transpuesta de una matriz dada.

        A = {   1,2,3        
                4,5,6},

        A_resutl= { 1,4
                    2,5
                    3,6}

    */

    int aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    cout << "Indique cuantas filas tendra su matriz: ";cin >> aux;cin.ignore(256, '\n');
    cout << "Indique cuantas columnas tendra sus matriz: ";cin >> aux2;cin.ignore(256, '\n');
    int A[aux][aux2];

    // Ejemplo rapido
    // aux = 2; aux2=3;
    // int   A[aux][aux2] = {   1,2,3,        
    //                         4,5,6};
    int A_resutl[aux2][aux];

    // Proceso normal
    cout << endl;
    cout << endl;
    for (int x = 0; x < aux; x++)
    {
        for (int y = 0; y < aux2; y++)
        {cout << "Ingrese el valor para la matriz A, en la posicion [" << x << "][" << y << "]: ";cin >> A[x][y];cin.ignore(256, '\n');}cout << endl;
    }
    cout<<endl;
    cout<<endl;
    for (int x = 0; x < aux; x++)
    {
        for (int y = 0; y < aux2; y++)
        {cout<<A[x][y]<<" "; }
        cout << endl;
    }
    // 
    for (int x = 0; x < aux2; x++)
    {
        for (int y = 0; y < aux; y++)
        A_resutl[x][y] = A[y][x];
    }
    cout<<endl;
    cout<<endl;
    for (int x = 0; x < aux2; x++)
    {
        for (int y = 0; y < aux; y++)
        {cout<<A_resutl[x][y]<<" "; }
        cout << endl;
    }


    return 0;
} // main
