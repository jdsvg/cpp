#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#define MAX 100 // Creando una constante

// Declarando prototipos de funciones o procedimientos
/* EJERCICIO 1 */
double potencia_iterativa(double, double);
double potencia_recursiva(double, double, double);
// 
/* EJERCICIO 2 */
bool son_amigos(int, int);
int suma_divisores(int); // Hallara todos los divisores

/* EJERCICIO 3 */
void llenar_arreglo(int[], int);
void mostrar_arreglo(int[], int);
void invertir_arreglo(int[], int);

int main() //Inicializador del programa
{
    /*
        EJERCICIO 1

        Escriba una funcion que calcule la potencia de un numero
    */
    // double base, exponente;
    // cout << "Ingrese el numero base: ";
    // cin >> base;
    // cout << "Ingrese el numero exponente: ";
    // cin >> exponente;
    // cout<<"La potencia es (en iterancia): "<<potencia_recursiva(base, base, exponente)<<endl;
    // cout<<"La potencia es (en recursividad): "<<potencia_recursiva(base, base, exponente)<<endl;


    /*
        EJERCICIO 2

        Escriba una funcion que diga si dos numeros son amigos.
        Dos numeros son amigos si cada uno de ellos es igual a la suma de los divisores del otro
        284: 1 + 2 + 4 + 71 + 142 = 220
        220: 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284


        1) Identificar el problema central
            R: Identificar si dos numeros son amigos
        1.1) Suma de divisores
    */
    // int aux = 0, aux2 = 0;
    // cout<<"Indique el primer numero: ";cin>>aux;cin.ignore(256, '\n');
    // cout<<"Indique el segundo numero: ";cin>>aux2;cin.ignore(256, '\n');
    // if(son_amigos(aux, aux2) == true){cout<<"Son amigos"<<endl;}
    // else{cout<<"No son amigos"<<endl;}


    /*
        EJERCICIO 3

        Escriba una funcion que permita invertir los elementos de un arreglo
    */
    int aux = 0;
    cout<<"Indique el tamano del arreglo: ";cin>>aux;cin.ignore(256, '\n');
    int array[aux];
    llenar_arreglo(array, aux);
    mostrar_arreglo(array, aux);
    invertir_arreglo(array, aux);
    mostrar_arreglo(array, aux);






    return 0;
}//main





// Declarando contenido de los prototipos de funciones o procedimientos

/* EJERCICIO 1 */
double potencia_iterativa(double base, double exponente){
    double resultado = 1;
    for (int i = 0; i < exponente; i++){resultado *= base;}
    return resultado;
}
// 
double potencia_recursiva(double base, double exponente, double count){
    count--;
    if (count < 1){return base;}
    else{
        base = base * exponente;
        return potencia_recursiva(base, exponente, count);
    }
}
// 

/* EJERCICIO 2 */
bool son_amigos(int a, int b){
    if(suma_divisores(a) == b && suma_divisores(b) == a){return true;}
    else{return false;}
}

// Hallara todos los divisores
int suma_divisores(int a){
    int acumulador = 0;
    for (int i = 1; i <= a/2; i++){
        if (a % i == 0){acumulador += i;}
    }
    return acumulador;
}



/* EJERCICIO 3 */
void llenar_arreglo(int Ax[], int a){
    for (int i = 0; i < a; i++){cout<<"Ingrese el valor para la posicion ["<<i<<"]: ";cin>>Ax[i];}
}
void mostrar_arreglo(int Ax[], int a){
    for (int i = 0; i < a; i++){cout<<Ax[i]<<", ";}
    cout<<endl;
}

void invertir_arreglo(int array[], int count){
    for (int i = 0; i < count/2; i++)
    {
        int aux = array[i];
        array[i] = array[count - 1 - i];
        array[count - 1 - i] = aux;
    }
    
}
