#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#include <cstdint>
int main() //Inicializador del programa
{
    /*
        PUNTEROS
        Los punteros solo asignan direcciones de memoria.

        * -> Declaracion de un puntero
        & -> Referencia de un puntero (Dirección de memoria)

        Parte de una variable:
            Tipo
            Nombre
            contenido
            dirección de memoria
            ...
        

        tipo *puntero = &variable;
        int *puntero = &variable; //Se debe asignar una direccion de memoria de una variable que tiene el mismo tipo que el puntero

        Un puntero puede crearse sin declararse
        Los punteros permiten aplicar 'aritmetica de punteros', que es poder manipular moverse o manipular la memoria a la que apunta una variable

    */
    // int var = 200;    
    // cout << "El tamaño de la variable 'var' es: " << sizeof(var) << " bytes" << endl;
    // cout <<"Acceciendo al contenido de la variable 'var': "<< var << endl;
    // cout <<"Acceciendo a la direccion en memoria de la variable 'var': "<< &var <<". En formato entero: "<<reinterpret_cast<uintptr_t>(&var) <<endl;
    // cout<<endl;
    // int *puntero = &var;
    // cout <<"Acceciendo al contenido del puntero 'puntero' (la direecion de memoria de 'var'): "<< puntero << endl;
    // cout <<"Acceciendo al contenido de la variable 'var' atravez del puntero 'puntero': "<< *puntero << endl; //Indireccion
    // cout <<"Acceciendo a la direccion en memoria del puntero 'puntero': "<< &puntero <<". En formato entero: "<<reinterpret_cast<uintptr_t>(&puntero) <<endl;

    
    
    
    
    
    /* 
        INDIRECCION 
        
        Se trata de poder acceder a la direccion de memoria de una variable, y trabajar con los valores almacenados en esta memoria a travez de un puntero.
    */
    // cout<<endl;
    // cout<<endl;
    // int var = 10*10;
    // int *puntero = &var; //Asignando direccion de memoria de la variable 'var' al puntero
    // cout<<"El puntero ahora puede acceder a la variable 'var', y el valor de la variable 'var' es: " <<*puntero<<endl;
    // cout<<"Direccion de memoria de la variable 'var' "<<puntero<<endl;
    // int var2=2;
    // *puntero = var2; //Reemplazando el valor de la variable 'var' con el valor de la variable 'var2'
    // cout<<"Se reemplazo el valor de la variable 'var', ahora es: "<<*puntero<<endl;
    // cout<<"La direccion de memoria de la variable 'var' continua siendo: "<<puntero<<endl;
    // cout<<"El valor de la variable 'var2' es "<<var2<<endl;
    // cout<<"El valor de la variable 'var' es "<<var<<endl;
    // puntero = &var2; //Asignando direccion de memoria de la variable 'var2' al puntero
    // cout<<"El puntero ahora puede acceder a la variable 'var2', y el valor de la variable 'var2' es: " <<*puntero<<endl;
    // cout<<"Direccion de memoria de la variable 'var' "<<puntero<<endl;
    // cout<<endl;
    // cout<<endl;


    /*
        REFERENCIAS
        & -> Operador de Referencia


        A diferencia de los punteros, las referencias deben ser inicializadas.
        Por otro lado las referencias no pueden reasignarse de nuevo.
    */

    // int var = 100;
    // int var2 = 200;
    // int &referencia = var;
    // int *puntero = &var;
    //
    // cout<<"La sentencia 'referencia' tiene el valor de 'var' que es: "<<referencia<<endl;    
    // cout<<"La sentencia '&referencia' tiene la misma direccion de 'var' la cual es: "<<&referencia<<endl;    
    // cout<<"La setencia '*puntero' tiene el valor de 'var' que es: "<<*puntero<<endl;
    // cout<<"La sentencia 'puntero' tiene la misma direccion de 'var' la cual es: "<<puntero<<endl;
    // cout<<endl;
    // cout<<endl;
    // referencia = var2;//En este caso no se esta re asignando la referencia. Se esta modificando el valor de la variable 'var' a travez de la variable 'referencia'
    // cout<<"La variable 'referencia' ahora asigno el valor de 'var2' al valor de 'var': "<<referencia<<" "<<var<<endl;    
    // cout<<"La sentencia '&referencia' aun mantiene la misma direccion de 'var' la cual es: "<<&referencia<<endl;   








    /*
        PUNTEROS A ARRAYs

        Un array se podria considerar como un puntero que apunta a una ubicacion de memoria que contiene una secuencia de valores del tipo del array.
        Los arrays al ser un "puntero indirecto", permiten tamiben aplicar la logica de 'aricmetica de punteros'
    */

    int array[5] = {10,20,30,40,50};
    int *puntero = array;
    cout<<"Al imprimir un array, lo se puede optener es la ubicacion de memoria por la que inica el array (la ubicacion del primer elemento): "<<array<<endl;
    // 
    // Accediento a los valores del array y las direcciones de memoria de cada uno de ellos usando, la notacion convencional de arrays 
    cout<<"Valor del array en la posicion 0: "<<array[0]<<endl;
    cout<<"Valor del array en la posicion 1: "<<array[1]<<endl;
    cout<<"Valor del array en la posicion 2: "<<array[2]<<endl;
    cout<<"Valor del array en la posicion 3: "<<array[3]<<endl;
    cout<<endl;
    // 
    // Accediento a los valores del array y las direcciones de memoria de cada uno de ellos, usando la notacion de puntero
    cout<<"Valor del array en la posicion 0, utilizando la notacion de puntero: "<<*array<<" Posicion en moemoria del array: "<<array<<endl;
    cout<<"Valor del array en la posicion 1, utilizando la notacion de puntero: "<<*(array+1)<<" Posicion en moemoria del array: "<<array+1<<endl;
    cout<<"Valor del array en la posicion 2, utilizando la notacion de puntero: "<<*(array+2)<<" Posicion en moemoria del array: "<<array+2<<endl;
    cout<<"Valor del array en la posicion 3, utilizando la notacion de puntero: "<<*(array+3)<<" Posicion en moemoria del array: "<<array+3<<endl;
    cout<<endl;
    // 
    //Realiando operaciones temporales sobre los valores del array, sin afectar la integridad del dato en la memoria del array 
    cout<<"Valor del array en la posicion 0, utilizando la notacion de puntero: "<<*array  <<endl;
    cout<<"Aumentando el valor del array en la posicion 0, utilizando la notacion de puntero, pero sin afectar el valor en la memoria: "<<*array+4<<endl;
    cout<<"El valor del array en la posicion 0, continua siendo: "<<*array  <<endl;
    cout<<endl;


    
    return 0;
}//main