#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
/*  Arreglos Bidimencionales - Matrices */
    /*
            C0  C1  C2
        F0   1   2   3
        F1   4   5   6
        F2   7   8   9
    */
    //En el siguiente ejemplo se vera que habra una matriz, con filas por 'Asignacion' y columnas por 'Decleracion' 
    int A[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //En el siguiente ejemplo se vera que habra una matriz, tanto con filas por 'Declaracion' como tambien columnas por 'Decleracion' 
    cout<<"Mostrando elemento de la primer fila y primer columna, de la Matriz A: "<<A[0][0]<<endl;
    cout<<"Mostrando elemento de la segunda fila y primer columna, de la Matriz A: "<<A[1][0]<<endl;
    cout<<"Mostrando elemento de la tercer fila y tercer columna, de la Matriz A: "<<A[2][2]<<endl;
    
    cout<<endl;
    cout<<endl;
    char B[4][4]={{' ','C','C','C'},{'F','1','2','3'},{'F','4','5','6'},{'F','7','8','9'}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++){cout<<B[i][j]<<" ";}
        cout<<endl;
    }
    
    cout<<endl;
    cout<<endl;
    //Recorrido por filas
    int filas = 3, columnas = 3;
    int C[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        { 
            cout<<"Ingrese el valor para la matriz B, en la posicion: ";
            cout<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>C[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++){cout<<C[i][j]<<" ";}
        cout<<endl;
    }

    // Recorrido por columnas
    filas = 3, columnas = 3;
    int D[filas][columnas];
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        { 
            cout<<"Ingrese el valor para la matriz B, en la posicion: ";
            cout<<"["<<j<<"]"<<"["<<i<<"]: ";
            cin>>D[j][i];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++){cout<<D[i][j]<<" ";}
        cout<<endl;
    }


    return 0;
}//main