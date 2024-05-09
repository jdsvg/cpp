#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
//EJERCICIOS
    cout<<"EJERCICIOS"<<endl;
    //
/*
//Mostrar los primeros 100 numeros narurales
    int x =0;
//con FOR
    for (; x <= 100; x++)
    {
        cout<<x<<endl;
    }
//con WHILE
    x = 0;
    while(x <= 100){
        cout<<x<<endl;
        x++;
    }
//con DO-WHILE
    x = 0;
    do
    {
        cout<<x<<endl;
        x++;
    } while (x<=100);
    */
/*
    Escriba un programa que calcule la cantidad de digitos que tiene un numero
*/
/*
//con FOR
    int numero = 0,aux = 0,cont = 0;
    for (int i = numero ;i >=0; i--)//mientras que I sea mayor a cero, entra al FOR
    {
        cont++;
        i = i/10;
        cout<<"I: "<<i<<endl;
    }
    cout<<"Contador: "<<cont<<endl;
//
//con WHILE
    cont = 0;
    
    while (numero >= 0)
    {
        numero = numero /10;
        if (numero == 0){
            numero = -1;
        }
        cont++;
        cout<<"Numero: "<<numero<<endl;
    }
    cout<<"Contador: "<<cont<<endl;
//
//con DO-WHILE
    numero = 0;
    cont = 0;
    do
    {
        cont++;
        numero = numero/10;
        cout<<"Numero: "<<numero<<endl;
    } while (numero > 0);
    cout<<"Contador: "<<cont<<endl;
    */
//
/*
Escriba un programa que lea varios numeros hasta ingresar un numero valor negativo.
Luego sumar los valores ingresados
*/
/*
//con FOR
    int valor =0 ;
    int entrada = 0;
    for (int i = 1; i > 0 ; i++)
    {
        cout<<"Ingrese el valor: "<<endl;
        cin>>entrada;
        if (entrada >= 0)
        {
            valor += entrada;
        }else{
            i = -1;
        }//if
    //    
    }//for
    cout<<"Valor: "<<valor<<endl;
//
//con WHILE
    valor = 0;
    entrada = 0; 
    while (entrada >= 0)
    {
        cout<<"Ingrese el valor: "<<endl;
        cin>>entrada;
        if (entrada >= 0)
        {
            valor += entrada;
        }//if
    //
    }//while
    cout<<"Valor: "<<valor<<endl;
//
//con DO-WHILE
    valor = 0;
    entrada = 0; 
    do
    {
        cout<<"Ingrese el valor: "<<endl;
        cin>>entrada;
        if (entrada >= 0)
        {
            valor += entrada;
        }//if
    } while (entrada >= 0);
    cout<<"Valor: "<<valor<<endl;
    */
//
/*
Ingresar N y operar 1/2 + 1/3 + 1/4 + ...+ 1/N
*/
//con FOR
/*
    int n = 0; 
    double valor = 0.0;
    cout<<"Ingrese N:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        valor += double(1) / double(i+2); //Todo numero dividido entre un entero, da como resultado un entero
    }//for
    cout<<"Valor:"<<valor<<endl;
//
//con WHILE

    n = 0; 
    valor = 0.0;
    cout<<"Ingrese N:"<<endl;
    cin>>n;
    while ( n != 0){
        valor += double(1)/double(n+1);
        n--;
    }
    cout<<"Valor:"<<valor<<endl;
//con DO-WHILE
    n = 0; 
    valor = 0.0;
    cout<<"Ingrese N:"<<endl;
    cin>>n;
    do
    {
        valor += double(1)/double(n+1);
        n--;
    } while (n != 0);
    cout<<"Valor:"<<valor<<endl;    
    */
//
/*
Escribir un codigo que imprima un triangulo rectangulo, en base a una entrada que sera su base y su altura
*/
//con FOR
/*
    int n = 0;
    string triangulo = "";
    cout<<"Ingrese el tamaño del triangulo: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        triangulo += "*";
        cout<<triangulo<<endl;
    }
//
//con WHILE
    n = 0;
    cout<<"Ingrese el tamaño del triangulo: ";
    cin>>n;
    triangulo = "";
    while (n > 0)
    {
        triangulo += "*";
        cout<<triangulo<<endl;
        n--;
    }
//con DO-WHILE
    n = 0;
    cout<<"Ingrese el tamaño del triangulo: ";
    cin>>n;
    triangulo = "";
    do
    {
        cout<<triangulo<<endl;
        triangulo += "*";
        n--;
    } while (n >= 0);
    */
//
/*
Diseñar un programa que listos los n primeros numeros ingresados por el usuario
*/
//con FOR
    int a=0,b=1,c=0,n=0;
    cout<<"Ingres el numero de terminos para fibonaci"<<endl;
    cin>>n;
    for (int i = 0; i <= n; i++)
        {
        c = a+b;
        b=a;
        cout<<a<<endl;
        a = c;
        }
//
//con while
    a=0,b=1,c=0,n=0;
    int cont=0;
    cout<<"Ingres el numero de terminos para fibonaci"<<endl;
    cin>>n;
    while (cont <= n)
    {
        c = a+b;
        b=a;
        cout<<a<<endl;
        a = c;
        cont++;
    }
//
//con DO-WHILE
    a=0,b=1,c=0,n=0,cont=0;
    cout<<"Ingres el numero de terminos para fibonaci"<<endl;
    cin>>n;
    do
    {
        cout<<a<<endl;
        c = a+b;
        b=a;
        a = c;
        cont++;
    } while (cont <= n);
    
}//main