#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
/*    
//WHILE, entra si se cumple la condicion, y hasta que se deje cumplir (cumpliria la instruccion con un ciclo de mas)
    int numero = 5;
    while(numero != 6 ){
        cout<<"ciclo while "<<numero<<endl;
        numero++;
    }

//DO-WHILE, ejecuta la instruccion una vez, y hasta que se cumpla la condicion
    do
    {
        cout<<"ciclo do-while "<<numero<<endl;
        numero--;
    } 
    while (numero == 5);

*/

//
//FOR
//
/*
    //Siempre tiene que estar los dos punto y coma (;;)
    int i = 1;
    //
    //Se puede escribir un for sin restricciones de la sguiente forma
    //for(;;){//Se ejecutara infinitamente mostrando siempre '1'
    //    cout<<i<<endl;
    //}
    //
    //Se ejecutara infinitamente mostrando siempre la suma de 1 en 1
    //
    //for(;;i++){
    //    cout<<i<<endl;
    //}
    //
    //Se ejecutara mostrando siempre la suma de 1 en 1, hasta 100
    //
    for(;i<=100;i++){
        cout<<i<<endl;
    }
    //
    //Se ejecutara desde 0, mientras que el valor no supere '11', y se ira sumando de 1 en 1
    for (int i = 0; i < 11; i++)
    {
        cout<<i<<endl;
    }
    //
    //Se ejecutara desde 0, mientras que el valor no supere '11', y se ira restando de 1 en 1. 
    //La operacion se ira al infinito por su estructura (i --)
    //
    //for (int i = 0; i < 11; i--)
    //{
    //    cout<<i<<endl;
    //}
    */
//
//AMBITO DE UNA VARIABLE
//Una variable no puede declararse dos veces en el mismo ambito
//Cada estructura de codigo es un ambito diferente
//
/*
    int i = 0;
    i = 12;//Ambito: main
    //
    for (int i = 0; i < 10; i++)
    {
        cout<<i<<endl;//Ambito: for
        if(true){
            int i = -1;
            cout<<i<<endl;//Ambito: if
        }//if
    }//for
    //
    cout<<i<<endl;//Ambito: main
*/
// 

//Lo siguiente se conoce como una "variable global". 
//Donde cada estructura de codigo puede acceder a la informacion de la variable, cambiando el estado de la misma
//
    int i = 0;
    for (; i < 10; i++)
    {
        cout<<i<<" for"<<endl;//Ambito: for
        if(true){
            cout<<i<<" if"<<endl;//Ambito: if
        }//if
    }//for
    //
    cout<<i<<" main"<<endl;//Ambito: main
//

}//main