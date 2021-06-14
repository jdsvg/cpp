#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
//Usando if y else:

    if (5==5){//Validacion:
        cout<<"5, es igual 5"<<endl;
    }else{//sino
        cout<<"5, no es igual 5"<<endl;
    }
    //
    if(5>5){//Validacion:
        cout<<"5, es mayor 5"<<endl;
    }else if(4>5){//Si no
        cout<<"4, no es mayor 5"<<endl;
    }else{
        cout<<"5, no es mayor 5"<<endl;
    }
    //
//Usando switch:
//Solamente se analizaran variables de tipo entero (int) o letras (char)
    int variable = 0;
    cout<<"Ingrese el caso: ";
    cin>>variable;
    switch (variable){
    case 1: cout<<"Caso 1"<<endl;
        break;
    case 2: cout<<"Caso 2"<<endl;
        break;
    case 3: cout<<"Caso 3"<<endl;
        break;
    default: cout<<"Ningun caso"<<endl;
        break;
    }
    //
}
