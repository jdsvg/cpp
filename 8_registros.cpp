#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#include <cstdint>
// 
// Declrando un registros
// Un registro se define con la palabra clave struct
// Los registros serian objetos que estan conformados por campos, es decir, atributos
// Solo puede haber un registro con el mismo nombre
struct Persona{
    char nombre[50];
    char apellido[50];
    int edad;
};

int main() //Inicializador del programa
{
    /*
        REGISTROS
        Registros son una forma de agrupar datos y funciones a la vez.
        Cada registro es un objeto distinto, el cual se puede instanciar como una variable. Esta variable sera del "tipo" de cada registros
            - Como si fuera una clase: Es decir un objeto en si mismo.

    */

    Persona p;
    cout<<"Ingrese el nombre de la persona: ";
    cin.getline(p.nombre, 50); cout<<endl;
    cout<<"Ingrese el apellido de la persona: ";
    cin.getline(p.apellido, 50); cout<<endl;
    cout<<"Ingrese la edad de la persona: ";
    cin>>p.edad; cin.ignore(256, '\n');
    cout<<"El nombre, apellido y edad de la persona es: "<<p.nombre<<" "<<p.apellido<<", "<<p.edad<<", años."<<endl;

    return 0;
}//main