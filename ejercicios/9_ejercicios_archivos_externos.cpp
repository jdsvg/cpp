#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
// 
#include <iostream>
#include <fstream>
// 
void pasar_a_mayusculas(char cadena[]);
void pasar_lineas(const char archivo_origen[], const char archivo_destino[]);

int main() //Inicializador del programa
{

    /*
        EJERCICIO 1

        Escribe un programa que lea un archovo y escriba en otro archovo el contenido del primer archivo, con todas las letras en mayúsculas.
    */

    ifstream archivo_entrada;
    char c = ' ';
    int count = 0;
    archivo_entrada.open("ejercicios/9_ejercicios_recursos/Ejercicio1.txt");
    pasar_lineas("ejercicios/9_ejercicios_recursos/Ejercicio1_1.txt", "ejercicios/9_ejercicios_recursos/Ejercicio1_2.txt");


return 0;}//main


void pasar_a_mayusculas(char cadena[]){
    int i = 0;
    while(cadena[i] != '\0'){
        cadena[i] = toupper(cadena[i]);
        i++;
    }
}

void pasar_lineas(const char archivo_origen[], const char archivo_destino[]){
    ifstream archivo_entrada;
    ofstream archivo_salida;
    char linea[256];
    archivo_entrada.open(archivo_origen, ios::in);
    archivo_salida.open(archivo_destino, ios::out);

    if(archivo_entrada.good()){
        while(!archivo_entrada.eof()){
            archivo_entrada.getline(linea, 256);
            pasar_a_mayusculas(linea);
            archivo_salida<<linea<<endl;
        }
    }else{
        cout<<"No se puede leer el archivo de origen"<<endl;
    }
    archivo_entrada.close();
    archivo_salida.close();
}