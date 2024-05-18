#include <iostream>  //llamando la libreria
using namespace std; // asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
#include <fstream>
#include <cstring>
#include <cstdlib>
//
// #define DIR_ARCHIVO "resources/contacts.dat" //define, no asigna valor de memoria, por lo que no se puede usar como puntero, que es imporante tenerlo si se va a manejar un struct con archivo_salida binarios
const char x_DIR_ARCHIVO[] = "resources/contacts.dat";
const char x_DIR_ARCHIVO_TEMPORAL[] = "resources/temp.dat";

struct Contacto
{
    char nombre[30];
    char apellido[45];
    int edad;
    char email[45];
};

/*
    FUNCIONES CORE DEL PROGRAMA
*/
Contacto settear_contacto();
void Escribir_Contacto(Contacto contacto);
bool Existe_Contacto(char nombre[], char apellido[]);
Contacto Buscar_Contacto(char nombre[], char apellido[]);
void Mostrar_Contacto(Contacto contacto);
void Listar_Contactos();
void Eliminar_Contacto(char nombre[], char apellido[]);
void Actualizar_Contacto(char nombre[], char apellido[]);

/*
    FUNCIONES DEL MENU
*/
void Menu_Ingresar(); 
void Menu_Buscar(); 
void Menu_Listado(); 
void Menu_Eliminar(); 
void Menu_Actualizar(); 

int main() // Inicializador del programa
{
    /*
        TALLER AGENDA
        Ingresar Contactos(x)
        Buscar Contactos(x)
        Listar Contactos(x)
        Actualizar Contactos()
        Eliminar Contactos(x)
    */

    /************************************
     *      MENUS
     * ************************************/
    int opt = 0;
    cout<<"\t\t\tAGENDA"<<endl;

    do{
        
        cout<<"Menu general de la agenda:"<<endl;
        cout<<"1). Ingresar Contacto:"<<endl;
        cout<<"2). Buscar Contacto:"<<endl;
        cout<<"3). Listar todos los contactos:"<<endl;
        cout<<"4). Actualizar Contacto:"<<endl;
        cout<<"5). Eliminar Contacto:"<<endl;
        cout<<"6). Salir:"<<endl;
        cin>>opt; cin.ignore(); 
        switch (opt)
        {
        case 1: system("clear"); Menu_Ingresar(); break;
        case 2: system("clear"); Menu_Buscar(); break;
        case 3: system("clear"); Menu_Listado(); break;
        case 4: system("clear"); Menu_Actualizar(); break;
        case 5: system("clear"); Menu_Eliminar(); break;
        case 6: system("clear"); break;
        default:
            cout<<"Opcion incorrecta"<<endl;
        }
    } while (opt != 6);
    cout<<"Adios."<<endl;
    





    /************************************
     *      EJEMPLOS DE LAS FUNCIONES
     * ************************************/
    
    /**
    Escribiendo contactos nuevos
    **/
        //Contacto 1
    // Contacto contacto = settear_contacto();
    // Escribir_Contacto(contacto);
        //Contacto 2
    // Contacto contacto = settear_contacto();
    // Escribir_Contacto(contacto);

    /**
    Mostrando un contacto buscado por nombre y apellido
    **/
    // char nombre[30] = "John";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // char apellido[45] = "Doe";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // if(Existe_Contacto(nombre, apellido)){
    //     cout<<"Datos del contacto encontrado"<<endl;
    //     Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
    // }else{
    //     cout<<"Contacto no encontrado"<<endl;
    // }

    //Mostrando todos los contactos
    // cout<<"Mostrando todos los contactos"<<endl;
    // Listar_Contactos();



    /**
    Actualizando un contacto buscado por nombre y apellido
    **/
    // cout<<"Contanto ANTES de la actualizacion"<<endl;
    // char nombre[30] = "John2";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // char apellido[45] = "Doe2";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // if(Existe_Contacto(nombre, apellido)){
    //     cout<<"Datos del contacto encontrado"<<endl;
    //     Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
    // }else{
    //     cout<<"Contacto no encontrado"<<endl;
    // }
    // //
    // Actualizar_Contacto(nombre, apellido);
    // //
    // cout<<"Contanto DESPUES de la actualizacion"<<endl;
    // char nombre2[30] = "John3";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // char apellido2[45] = "Doe3";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // if(Existe_Contacto(nombre2, apellido2)){
    //     cout<<"Datos del contacto encontrado"<<endl;
    //     Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
    // }else{
    //     cout<<"Contacto no encontrado"<<endl;
    // }
    // cout<<"Mostrandos todos los contactos"<<endl;
    // Listar_Contactos();


    /**
    Eliminando un contacto por nombre y apellido
    **/
    // cout<<"Contactos ANTES de la eliminacion"<<endl;
    // Listar_Contactos();
    // char nombre[30] = "John";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // char apellido[45] = "Doe";//------------------------->MODIFICAR SEGUN LO REQUERIDO
    // Eliminar_Contacto(nombre, apellido);
    // cout<<"Contactos DESPUES de la eliminacion"<<endl;
    // Listar_Contactos();



    return 0;
} // main

/*
    FUNCIONES DEL MENU
*/

void Menu_Ingresar(){
    cout<<"Ingreso de nuevo Contacto"<<endl;
    Contacto contacto = settear_contacto();
    if (Existe_Contacto(contacto.nombre, contacto.apellido)){
        cout<<"El Contacto ya existe"<<endl;
    }else{
        Escribir_Contacto(contacto);
        cout<<"Contacto agregado exitosamente"<<endl;
    }
}

void Menu_Buscar(){
    cout<<"Busqueda de Contacto(s)"<<endl;
    char nombre[30] = "";
    char apellido[45] = "";
    cout<<"Nombre del Contacto: ";cin.getline(nombre, 30);
    cout<<"Apellico del Contacto: ";cin.getline(apellido, 45);
    if(Existe_Contacto(nombre, apellido)){
        cout<<"Datos del contacto encontrados:"<<endl;
        Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
    }else{
        cout<<"Contacto no encontrado"<<endl;
    }


}

void Menu_Listado(){
    cout<<"Listando todos los Contactos"<<endl;
    Listar_Contactos();
}

void Menu_Eliminar(){
    cout<<"Eliminacion de Contacto"<<endl;
    char nombre[30] = "";
    char apellido[45] = "";
    char opt[2] = "";
    cout<<"Nombre del Contacto: ";cin.getline(nombre, 30);
    cout<<"Apellico del Contacto: ";cin.getline(apellido, 45);
    if(Existe_Contacto(nombre, apellido)){
        Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
        while(strcmp(opt,"s") != 0 && strcmp(opt,"S") != 0 && strcmp(opt,"n") != 0 && strcmp(opt,"N") != 0){
            cout<<"¿Seguro que desea eliminar el contacto? (S/n)"<<endl;cin.getline(opt,2);
            if (strcmp(opt,"s") == 0 || strcmp(opt,"S") == 0){
                Eliminar_Contacto(nombre, apellido);
                cout<<"Contacto "<<nombre<<" "<<apellido<<", eliminado correctamente";
            }else if (strcmp(opt,"n") == 0 || strcmp(opt,"N") == 0){
                cout<<"El contacto NO se elimino"<<endl;
            }else{
                cout<<"Opcion incorrecta S/n"<<endl;
            }
        }
    }else{
        cout<<"Contacto no encontrado"<<endl;
    }
}

void Menu_Actualizar(){
    cout<<"Actualizacion  de Contacto"<<endl;
    char nombre[30] = "";
    char apellido[45] = "";
    char opt[2] = "";
    cout<<"Nombre del Contacto: ";cin.getline(nombre, 30);
    cout<<"Apellico del Contacto: ";cin.getline(apellido, 45);
    if(Existe_Contacto(nombre, apellido)){
        Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
        while(strcmp(opt,"s") != 0 && strcmp(opt,"S") != 0 && strcmp(opt,"n") != 0 && strcmp(opt,"N") != 0){
            cout<<"¿Seguro que desea actualizar el contacto? (S/n)"<<endl;cin.getline(opt,2);
            if (strcmp(opt,"s") == 0 || strcmp(opt,"S") == 0){
                Actualizar_Contacto(nombre, apellido);
                cout<<"Contacto actualizado corretamente"<<endl;
                Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
            }else if (strcmp(opt,"n") == 0 || strcmp(opt,"N") == 0){
                cout<<"El contacto NO se actualizo"<<endl;
                Mostrar_Contacto(Buscar_Contacto(nombre, apellido));
            }else{
                cout<<"Opcion incorrecta S/n"<<endl;
            }
        }
    }else{
        cout<<"Contacto no encontrado"<<endl;
    }
}












/*
    FUNCIONES CORE DEL PROGRAMA
*/


void Actualizar_Contacto(char nombre[], char apellido[]){
    ifstream archivo_entrada;
    ofstream archivo_temporal;
    Contacto contacto;
    archivo_entrada.open(x_DIR_ARCHIVO, ios::binary);
    archivo_temporal.open(x_DIR_ARCHIVO_TEMPORAL, ios::binary);
    if(archivo_entrada.good() && archivo_temporal.good()){
        while(archivo_entrada.read((char*)&contacto, sizeof(Contacto))){
            if (strcmp(nombre, contacto.nombre) == 0 && strcmp(apellido, contacto.apellido) == 0){
                Contacto contacto_actualizado = settear_contacto();
                archivo_temporal.write((char*)&contacto_actualizado, sizeof(Contacto));
            }else{
                archivo_temporal.write((char*)&contacto, sizeof(Contacto));
            }
        }
    }else{
        cout<<"No se puede leer el archivo"<<endl;
        archivo_entrada.close();
        archivo_temporal.close();
    }

    archivo_entrada.close();
    archivo_temporal.close();

    //Importante: Si bien puede ser que, segun la version del compilador, no se manifiesten ciertos incidentes al manipular archivos externos por el sistema
        //Se recomienda primero cerrar los archivos externos se vayan a manipular por el sistema
    remove(x_DIR_ARCHIVO);
    rename(x_DIR_ARCHIVO_TEMPORAL, x_DIR_ARCHIVO);
}

void Eliminar_Contacto(char nombre[], char apellido[]){
    ifstream archivo_entrada;
    ofstream archivo_temporal;
    Contacto contacto;
    archivo_entrada.open(x_DIR_ARCHIVO, ios::binary);
    archivo_temporal.open(x_DIR_ARCHIVO_TEMPORAL, ios::binary);
    if(archivo_entrada.good() && archivo_temporal.good()){
        while(archivo_entrada.read((char*)&contacto, sizeof(Contacto))){
            if (strcmp(nombre, contacto.nombre) != 0 || strcmp(apellido, contacto.apellido) != 0){
                archivo_temporal.write((char*)&contacto, sizeof(Contacto));
            }
        }
    }else{
        cout<<"No se puede leer el archivo"<<endl;
        archivo_entrada.close();
        archivo_temporal.close();
    }
    archivo_entrada.close();
    archivo_temporal.close();

    //Importante: Si bien puede ser que, segun la version del compilador, no se manifiesten ciertos incidentes al manipular archivos externos por el sistema
        //Se recomienda primero cerrar los archivos externos se vayan a manipular por el sistema
    remove(x_DIR_ARCHIVO);
    rename(x_DIR_ARCHIVO_TEMPORAL, x_DIR_ARCHIVO);
}

void Listar_Contactos(){
    ifstream archivo_entrada;
    Contacto contacto;
    archivo_entrada.open(x_DIR_ARCHIVO, ios::binary);
    if (archivo_entrada.good()){
        while (archivo_entrada.read((char*)&contacto, sizeof(Contacto))){
            Mostrar_Contacto(contacto);
        }
        archivo_entrada.close();
    }else{
        cout<<"No se puede leer el archivo"<<endl;
        archivo_entrada.close();
    }

}

void Mostrar_Contacto(Contacto contacto){
    cout<<endl;
    cout << "\t Nombre:   "<<contacto.nombre<<endl;
    cout << "\t Apellido: "<<contacto.apellido<<endl;
    cout << "\t Edad:     "<<contacto.edad<<endl;
    cout << "\t Email:    "<<contacto.email<<endl;
    cout<<endl;
}

Contacto Buscar_Contacto(char nombre[], char apellido[]){
    Contacto contacto;
    ifstream archivo_entrada;
    archivo_entrada.open(x_DIR_ARCHIVO, ios::binary);
    if (archivo_entrada.good()){
        while (archivo_entrada.read((char *)&contacto, sizeof(Contacto))){
            //
            // strcmp :: srting compare -> compara dos cadenas
            //
            if (strcmp(nombre, contacto.nombre) == 0 && strcmp(apellido, contacto.apellido) == 0){
                archivo_entrada.close();
                return contacto;
            }
        }
    }
    return contacto; //Controll Exception
}

bool Existe_Contacto(char nombre[], char apellido[]){
    Contacto contacto;
    ifstream archivo_entrada;
    archivo_entrada.open(x_DIR_ARCHIVO, ios::binary);
    if (archivo_entrada.good()){
        while (archivo_entrada.read((char*)&contacto, sizeof(Contacto))){
            //
            // strcmp :: srting compare -> compara dos cadenas
            //
            if (strcmp(nombre, contacto.nombre) == 0 && strcmp(apellido, contacto.apellido) == 0){
                archivo_entrada.close();
                return true;
            }
        }
        archivo_entrada.close();
        return false;
    }
    return 0;
}

void Escribir_Contacto(Contacto contacto){
    
    
    ofstream archivo_salida;
    archivo_salida.open(x_DIR_ARCHIVO, ios::binary | ios::app);
    archivo_salida.write((char*)&contacto, sizeof(Contacto));
    archivo_salida.close();
    //Usamos la primer forma de escritura, ya que nos 
    // archivo_salida<<contacto.nombre<<endl;
    // archivo_salida<<contacto.apellido<<endl;
    // archivo_salida<<contacto.edad<<endl;
    // archivo_salida<<contacto.email<<endl;
    // archivo_salida.close();
}

Contacto settear_contacto(){
    Contacto contacto;
    cout << "\t\t   Nombre: ";
    cin.getline(contacto.nombre, 30);
    cout << "\t\t Apellido: ";
    cin.getline(contacto.apellido, 45);
    cout << "\t\t     Edad: ";
    cin >> contacto.edad;
    cin.ignore(256, '\n');
    cout << "\t\t    Email: ";
    cin.getline(contacto.email, 45);
    return contacto;
}