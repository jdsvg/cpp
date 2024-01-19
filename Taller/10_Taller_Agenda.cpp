#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
// 
#include <iostream>
#include <fstream>
// 
// #define DIR_ARCHIVO "resources/contacts.dat" //define, no asigna valor de memoria, por lo que no se puede usar como puntero, que es imporante tenerlo si se va a manejar un struct con archivo_salida binarios
const char x_DIR_ARCHIVO[] = "resources/contacts.dat";


struct Contacto{
    char nombre[30];
    char apellido[45];
    int edad;
    char email[45];
};

void Ingresar_contacto(Contacto contacto);
Contacto leer_contacto();


int main() //Inicializador del programa
{
    /*
        TALLER AGENDA
        Ingresar Contactos
        Buscar Contactos
        Eliminar Contactos
        Actualizar Contactos
    */
    Contacto contacto = leer_contacto();
    Ingresar_contacto(contacto);


return 0;}//main


void Ingresar_contacto(Contacto contacto){
    ofstream archivo_salida;
    archivo_salida.open(x_DIR_ARCHIVO, ios::binary | ios::app);
    archivo_salida.write((char*)&contacto, sizeof(contacto));
    archivo_salida.close();
    // archivo_salida<<contacto.nombre<<endl;
    // archivo_salida<<contacto.apellido<<endl;
    // archivo_salida<<contacto.edad<<endl;
    // archivo_salida<<contacto.email<<endl;
    // archivo_salida.close();
}


Contacto leer_contacto(){
    Contacto contacto;
    cout<<"\t\t   Nombre: ";
    cin.getline(contacto.nombre, 30);
    cout<<"\t\t Apellido: ";
    cin.getline(contacto.apellido, 45);
    cout<<"\t\t     Edad: ";
    cin>>contacto.edad;cin.ignore(256, '\n');
    cout<<"\t\t    Email: ";
    cin.getline(contacto.email, 45);
    return contacto;
}

