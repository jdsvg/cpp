#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#define MAX 100 // Creando una constante

/*
    Las funciones tambien tienen un "tipo".
    Estas funciones pueden o no requerir parametros para luego operar y retornar un valor en funcion de dichos parametros, o ser 'void' (sin 'return').
    Las funciones void, son 'procedimientos', las cuales operan valores pero no retornan ningun valor. Pero pueden recibir parametros.
*/

// Las siguientes instrucciones representan un 'PROTOTIPO'.
// Es decir, se utilizan para definir una 'funcion' o 'procedimiento', pero sin definir el comportamiento de la misma.
void mensaje();
int suma(int a, int b);
bool es_Par(int);
// 
int cambiarCien_Por_Valor(int);
void cambiarCien_Por_Referencia(int&);
void cambiarCien_Por_Puntero(int*);
//
void mostrar_arreglo(int[], int);
void llenar_arreglo(int[], int);
void mostrar_matriz(int[][MAX], int, int);
void llenar_matriz(int[][MAX], int, int);
// 
// SOBRE CARGA DE FUNCIONES
// Se refiere a la utilizacion de multiples funciones con el mismo nombre, pero que reciben cada una diferentes parametros o en diferente orden.
// Sin embargo no esta permitido tener funciones, que aunque tengan diferentes tipos, tengan los mismos parametros: 
// double multiplicacion(int, int); //Esta funcion no puede ser sobrecargada.
int multiplicacion(int, int);
float multiplicacion(float, float);
double multiplicacion(double, double);
float multiplicacion(int, double);


int main() //Inicializador del programa
{
    /*
        FUNCIONES Y PROCEDIMIENTOS
    */
    // mensaje();
    // mensaje();
    // cout<<endl;
    // cout<<endl;
    // // 
    // cout<<"Uso basico de las funciones y procedimientos"<<endl;
    // cout<<"La suma de 10 + 20 es: "<<suma(10, 20)<<endl;
    // // int suma = suma(10, 20); NO SE PUEDE ASIGNAR UN NOMBRE A UNA VARIABLE QUE SEA EL MISMO QUE EL DE UNA FUNCION
    // int result_suma = suma(10, 20);
    // cout<<"El valor del resultado de la suma: 10 + 20 es: "<<result_suma<<endl;
    // cout<<endl;
    // cout<<endl;
    // // 
    // cout<<"Se indica si el numero"<<10<<" es par o impar: "<<es_Par(9)<<endl;
    // bool par = es_Par(10);
    // if (par == true)
    // {
    //     cout<<"El numero es par"<<endl;
    // }else
    // {
    //     cout<<"El numero es impar"<<endl;
    // }
    // // 
    // if (es_Par(11) == true)
    // {
    //     cout<<"El numero es par"<<endl;
    // }else
    // {
    //     cout<<"El numero es impar"<<endl;
    // }
    // // 
    // if(es_Par(12)){
    //     cout<<"El numero es par"<<endl;
    // }else{
    //     cout<<"El numero es impar"<<endl;
    // }
    // cout<<endl;
    // cout<<endl;
    // cout<<"Uso basico del pasos por referencia y por valor en funciones y procedimientos"<<endl;
    // int numero = 5;
    // cout<<"El valor de la variable 'numero' antes del cambio por valor es: "<<numero<<endl;
    // numero = cambiarCien_Por_Valor(numero);
    // cout<<"El valor de la variable 'numero' antes del cambio por valor es: "<<numero<<endl;
    // cout<<endl;
    // numero = 5;
    // cout<<"El valor de la variable 'numero' antes del cambio por referencia es: "<<numero<<endl;
    // cambiarCien_Por_Referencia(numero);
    // cout<<"El valor de la variable 'numero' antes del cambio por referencia es: "<<numero<<endl;
    





    // cout<<endl;
    // cout<<endl;
    // cout<<"Uso basico del pasos por punteros y por valor en funciones y procedimientos"<<endl;
    // int var = 5;
    // cout<<"El valor de la variable 'var' antes del cambio por puntero es: "<<var<<endl;
    // cambiarCien_Por_Puntero(&var);
    // cout<<"El valor de la variable 'var' antes del cambio por puntero es: "<<var<<endl;




    // cout<<endl;
    // cout<<endl;
    // int aux = 0, aux2 = 0;
    // cout<<"Uso basico de los arreglos y matrices en funciones y procedimientos"<<endl;
    // int arreglo[MAX];
    // cout<<"Indique cuantas filas tendra su arreglo: ";cin>>aux;cin.ignore(256, '\n');
    // llenar_arreglo(arreglo, aux);
    // cout<<"Mostrando arreglo"<<endl;
    // mostrar_arreglo(arreglo, 5);
    // cout<<endl;
    // cout<<"Indique cuantas filas tendra su matriz: ";cin>>aux;cin.ignore(256, '\n');
    // cout<<"Indique cuantas columnas tendra su matriz: ";cin>>aux2;cin.ignore(256, '\n');
    // int matriz[MAX][MAX];
    // llenar_matriz(matriz, aux, aux2);
    // cout<<"Mostrando arreglo"<<endl;
    // mostrar_matriz(matriz, aux, aux2);
    






    cout<<endl;
    cout<<endl;
    cout<<"Uso basico sobrecarga de funciones"<<endl;
    int var_int = 5;
    float var_float = 5.50;
    double var_double = 5.51;
    cout<<"Multiplicando elementos para multiplicacion entera: "<<multiplicacion(var_int, var_int)<<endl;
    cout<<"Multiplicando elementos para multiplicacion flotante: "<<multiplicacion(var_float, var_float)<<endl;
    cout<<"Multiplicando elementos para multiplicacion doble: "<<multiplicacion(var_double, var_double)<<endl;
    cout<<"Multiplicando elementos para multiplicacion de un valor entero y un valor flotante, que retorna un float: "<<multiplicacion(var_int, var_double)<<endl;





    return 0;
}//main




// Una vez creados los prototipos, los llamamos en el programa principal. (Despues del 'main')
void mensaje(){
    cout<<"Mensaje desde un procedimiento"<<endl;
}
int suma(int a, int b){
    return a+b;
}
bool es_Par(int a){
    if(a % 2 == 0){return true;}
    else{return false;}
}


/*
    PASO POR VALOR Y PASO POR REFERENCIA
*/

//Las siguientes son funciones que cambian el valor de la variable 
int cambiarCien_Por_Valor(int a){
    return 100;
}

void cambiarCien_Por_Referencia(int &a){
    a = 100;
}

void cambiarCien_Por_Puntero(int *a){
    *a = 100;
}



//Las siguientes son funciones que operan arrays y matrices
void mostrar_arreglo(int Ax[], int a){
    for (int i = 0; i < a; i++)
    {
        cout<<Ax[i]<<", ";
    }
}
void llenar_arreglo(int Ax[], int a){
    for (int i = 0; i < a; i++)
    {
        cout<<"Ingrese el valor para la posicion ["<<i<<"]: ";cin>>Ax[i];
    }
}
void mostrar_matriz(int Mx[][MAX], int a, int b){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<Mx[i][j]<<", ";
        }
        cout<<endl;
    }
}



void llenar_matriz(int Mx[][MAX], int a, int b){

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"Ingrese el valor para la posicion ["<<i<<"]["<<j<<"]: ";cin>>Mx[i][j];
        }
    }
}

// 
// La siguientes son funciones que representan sobrecarga
int multiplicacion(int a, int b){
    return a*b;
}
float multiplicacion(float a, float b){
    return a*b;
}
double multiplicacion(double a, double b){
    return a*b;
}
float multiplicacion(int a, double b){
    return a*b;
}