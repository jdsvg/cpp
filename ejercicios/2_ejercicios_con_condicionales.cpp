#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
//EJERCICIOS
/*
//Indicar si un numero es par o impar:
    int numero = 0;
    cout<<"Ingresa un numero: ";
    cin>>numero;

    if(numero % 2 == 0){
        cout<<"El numero: "<<numero<<", es par"<<endl;
    }else{
        cout<<"El numero: "<<numero<<", es impar"<<endl;
    }
//Indicar si un numero es positivo, negativo o neutro
    numero = 0;
    cout<<"Ingresa un numero: ";
    cin>>numero;

    if(numero > 0){
        cout<<"El numero es positivo"<<endl;
    }else if(numero < 0){
        cout<<"El numero es negativo"<<endl;    
        
    }else{
                cout<<"El numero es neutro"<<endl;
        }

//En un estacionamiento cobran $1.50, por hora o fraccion.
//Diseñe un programa que determine cuanto debe pagar un cliente 
//por el estaconamiento de su vehiculo, conociendo el tiempo de 
//estacionamiento en horas y minutos

    int horas = 0, minutos = 0;
    double total = 0;
    cout<<"Horas"<<endl;
    cin>>horas;
    cout<<"Minutos"<<endl;
    cin>>minutos;
    //
    if(minutos > 0){
        horas++;
    }
    total =horas*1.50;
    cout<<"Total a pagar: "<<total<<endl;

//Programa para mostrar el nombre del mes, en base al numero ingresado

    numero = 0;
    cout<<"Numero: ";
    cin>>numero;
    //
    switch (numero)
    {
    case 1:
        cout<<"Enero"<<endl;
        break;
    case 2:
        cout<<"Febrero"<<endl;
        break;
    case 3:
        cout<<"Marzo"<<endl;
        break;
    case 4:
        cout<<"Abril"<<endl;
        break;
    case 5:
        cout<<"Mayo"<<endl;
        break;
    case 6:
        cout<<"Junio"<<endl;
        break;
    case 7:
        cout<<"Julio"<<endl;
        break;
    case 8:
        cout<<"Agosto"<<endl;
        break;
    case 9:
        cout<<"Septiembre"<<endl;
        break;
    case 10:
        cout<<"Octubre"<<endl;
        break;
    case 11:
        cout<<"Noviembre"<<endl;
        break;
    case 12:
        cout<<"Diciembre"<<endl;
        break;
    default:
        cout<<"Numero no valido"<<endl;
        break;
    }

//Construye un programa que diga si un caracter es una vocal


    char vocal;
    cout<<"Caracter: ";
    cin>>vocal;
    //
    switch (vocal)
    {
    case 'a'://Va a encontrar el caso valido y seguidamente buscara la siguiente linea de ejecucion
    case 'e':
    case 'i':
    case 'o':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Es una vocal"<<endl;
        break;
    default:
        cout<<"No es una vocal: "<<endl;
        break;
    }

*/


/*
Ingresar el sueldo de un trabajor, su categoria,
su conicion: Estable (E), No estable (N), y repotar elpago total
que se le debe hacer de acuerdo a lo siguiente:
El porcentaje de bonificacion con respecto al sueldo se calcula
con respecto a la siguente tabla:

CATEGORIA ESTABLE NO_ESTABLE
    A       20%         17%
    B       18%         15%
    C       15%         14%
    D       12%         10%

El calcul del descuento es con respecto al sueldo+bonificacion
E: 6 %      N: 4%
*/
    char categoria,estabilidad;
    float sueldo = 0, bonificacion = 0;
    bool banderaCategoria = false, banderaEstabilidad = false;
    //
    cout<<"Sueldo: "<<endl;
    cin>>sueldo;
    cout<<"Estabilidad: "<<endl;
    cin>>estabilidad;
    switch (estabilidad)
    {
    case 'e'://Va a encontrar el caso valido y seguidamente buscara la siguiente linea de ejecucion
    case 'E':
        banderaEstabilidad = true;
        break;
    default:
        banderaEstabilidad = false;
        break;
    }
    //
    if(banderaEstabilidad){
        cout<<"Categoria: ";
        cin>>categoria;
        switch (categoria)
        {
            case 'a'://Va a encontrar el caso valido y seguidamente buscara la siguiente linea de ejecucion
            case 'A':
                bonificacion = 26;
                break;
            case 'b':
            case 'B':
                bonificacion = 24;
                break;
            case 'c':
            case 'C':
                bonificacion = 21;
                break;
            case 'd':
            case 'D':
                bonificacion = 18;
                break;
            default:
                cout<<"Categoria invalida";
                break;
        }//switch (categoria)
    }else{
        cout<<"Categoria: ";
        cin>>categoria;
        switch (categoria)
        {
            case 'a'://Va a encontrar el caso valido y seguidamente buscara la siguiente linea de ejecucion
            case 'A':
                bonificacion = 21;
                break;
            case 'b':
            case 'B':
                bonificacion = 19;
                break;
            case 'c':
            case 'C':
                bonificacion = 18;
                break;
            case 'd':
            case 'D':
                bonificacion = 14;
                break;
            default:
                cout<<"Categoria invalida";
                break;
        }//switch (categoria)
    }//if(banderaEstabilidad)
    //
    cout<<"Estabilidad: "<<estabilidad<<endl;
    cout<<"Categoria: "<<categoria<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
    cout<<"Bonificacion: "<<bonificacion<<endl;
    sueldo +=(sueldo * bonificacion)/100;
    cout<<"Sueldo total: "<<sueldo;
    return 0;
}
