#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
/*  Arreglos unidimencionales */
    // int arreglo1[10]; // Setean array por Declaracion
    // int arreglo2[] = {1,2,3,4,5}; //Setean array Asignacion

    // cout<<"Arreglo por declaracion: arreglo1"<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<"Ingrese el valor para la posicion: "<<i<<endl;
    //     cin>>arreglo1[i];
    // }
    // cout<<endl;
    // for(int i=0; i<10; i++){cout<<"El valor de la posicon "<<i<<" es: "<<arreglo1[i]<<endl;}

    // cout<<endl;
    // cout<<"Arreglo por asignacion: arreglo2"<<endl;
    // for(int i=0; i<5; i++){cout<<"El valor de la posicon "<<i<<" es: "<<arreglo2[i]<<endl;}
    
    /*  Cadenas de texto */
    // cout<<endl;
    // char cadena1 [] = "John Villamil";
    // char cadena2 [] = {'J','O','H','N','V','I','L','L','A','M','I','L'}; //Importante en este caso poner el '\0"
    // char cadena3[10];
    // //En caso de los arrays de "char", no sera necesario asignar o mostrar valores con el uso de un blucle que itere el array

    // cout<<"cadena1: "<<cadena1<<endl;
    // cout<<"cadena2: "<<cadena2<<endl;
    
    // cout<<"(Antes) cadena3: "<<cadena3<<endl;
    // cout<<"Ingrese una cadena para cadena3: "<<endl;
    // cin.getline(cadena3, 10); 
    //         //En C++, "cin" leera hasta donde se le indique un espacio. Con "getline", se puede evitar esto.
    //         //.getline(cadena3, 10); Evitara que "cin" genere un desbordamiento de memoria, permitiendo agregar mas caracteres de los esperados
    //         //(cadena3, 10). indicara que leera  los 10 primeros caracteres, junto con el '\0', que pondra automaticamente
    // cout<<"(Despues) cadena3: "<<cadena3<<endl;





    // /*  Control del buffer de entrada */
    // char nombre[25];
    // int edad;

    // // El siguiente ejemplo fallara, omitiendo la solicitud del nombre.
    // //Ya que al indicar algun numero se toma tambien '\n' (Que es el salto de linea ocacionado por el Enter), en el buffer de entrada.
    // //Porque este buffer tendra: '23\n', asignando los caracteres numericos a la variable numerica
    // //Y los demas caracteres a la variable char (la cual se encuende como un array implicito) 
    // cout<<"Ingresa tu edad"<<endl;
    // cin>>edad; 
    // cout<<"Ingresa tu nombre"<<endl;
    // cin.getline(nombre, 26);
    // cout<<"Nombre: {"<<nombre<<"} "<<"Edad: {"<<edad<<"}"<<endl;
    // //
    // cout<<endl;
    // //Esto se puede evitar, agregando .ignore()
    // //Esta funcion puede aceptar varios parametros .ignore( <cantidad_de_caracteres_que_borrara> , <ultimo_caracter_a_borrar> )
    // //El maximo numero de caracteres que podra borrar sera: 256.
    // //Si no se le pasa el primer paramtro, eliminara solo el primer caracter que encuentre.
    // cout<<"Ingresa tu edad"<<endl;
    // cin>>edad; 
    // cin.ignore(256, '\n');
    // cout<<"Ingresa tu nombre"<<endl;
    // cin.getline(nombre, 26);
    // cout<<"Nombre: {"<<nombre<<"} "<<"Edad: {"<<edad<<"}"<<endl;

    return 0;
}//main