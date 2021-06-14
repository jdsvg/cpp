#include <iostream>	 //llamando la libreria
#include <cmath> //Libreria para calculos matematicos
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
//Area de un Triangulo
    float base = 0,altura = 0, area = 0;
    //
    cout<<"Inglese la base del triangulo: ";
    cin>>base;
    cout<<"Inglese la altura del triangulo: ";
    cin>>altura;
    //
    area = (base*altura)/2;
    cout<<"El area del triangulo es: "<<area<<endl;
    //
//Area de una esfera

    float volumen = 0, radio = 0;
    const double PI = 3.14159;
    //
    cout<<"Inglese el radio de la esfera: ";
    cin>>radio;
    //
    volumen = (4/3)*PI*pow(radio,3);
    cout<<"El volumen de la esfera es: "<<volumen<<endl;
    //
//Promedio de 3 notas
    float nota1 = 0,nota2 = 0,nota3 = 0,promedio = 0;
    cout<<"Inglese la primer nota: ";
    cin>>nota1;
    cout<<"Inglese la segunda nota: ";
    cin>>nota2;
    cout<<"Inglese la tercer nota: ";
    cin>>nota3;
    //
    promedio = (nota1+nota2+nota3)/3;
    cout<<"El prmedio es: "<<promedio<<endl;
    //
//Convertir de celsius a Fahrenheit y Kelvin
    float celsius = 0, fahrenheit = 0, kelvin = 0;
    cout<<"Ingrese los grados celsius: ";
    cin>>celsius;
    fahrenheit =  (9*celsius)/5+32;
    kelvin = celsius+273.15;
    cout<<"Los grados celsius: "<<celsius<<" a grados Fahrenheit, son: "<<fahrenheit<<endl<<" Y a grados Kelvin, son: "<<kelvin<<endl;
    //
//Ditancia entre dos puntos
    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, distancia = 0;
    cout<<"P_1: ";
    cout<<"X1: ";
    cin>>x1;
    cout<<"y1: ";
    cin>>y1;
    cout<<"P_2: ";
    cout<<"X2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;
    distancia = sqrt( pow( (x2-x1) , 2 ) + pow( (y2-y1) , 2 ) );
    cout<<"La distancia entre los dos puntos es: "<<distancia<<endl;
    
    return 0;
}//main