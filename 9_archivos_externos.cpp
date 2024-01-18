#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
// 
#include <iostream>
#include <fstream>
// 

struct Persona{
    char nombre[8]; // 1 caracter ocupa 1byte; 8 caracteres ocupan 8bytes
    int edad; // 1 entero ocupa 4byte; 
};

struct Persona2{
    char nombre[8]; // 1 caracter ocupa 1byte; 8 caracteres ocupan 8bytes
    int edad; // 1 entero ocupa 4byte; 
};

int main() //Inicializador del programa
{
    /*
        MANEJO DE ARCHIVOS EXTERNOS
        
        OutputStream: Es el flujo de salida.Es el objeto que permite escribir en el archivo externo.
            - ofstream (InputFile Stream): Es el objeto que permite escribir en el archivo externo.
        InputStream: Es el flujo de entrada.
            - ifstream (OutputFile Stream): Es el objeto que permite leer el archivo externo.

        Pasos basicos:
            - Abrir el archivo externo
            - Manipular el archivo externo
            - Cerrar el archivo externo

    */

    //Leer un archivo
    // ifstream archivo_entrada;
    // archivo_entrada.open("9_recursos/Archivo1.txt", ios::in); // ios::in: Abre el archivo en modo de lectura.
    // int tamaño_array = 5;
    // char linea[tamaño_array];
    // archivo_entrada.getline(linea, tamaño_array); //Leera hasta tomar 80 caracteres o hasta encontrar un '\n' la linea leida. Se indca un caracter adicional ya se agregara el '\0', por getline
    // cout<<"-_"<<linea<<"_-"<<endl;
    // for (int i = 0; i < tamaño_array-1; i++){cout<<"-|"<<linea[i]<<endl;}
    // archivo_entrada.close(); //Cierre de flujo: Cerrar el archivo.
    // return 0;

    /*
        MODOS DE APERTURA

        ofstream -> Es el flujo de escritura.

        ios::in: Abre el archivo en modo de lectura. Permite leer el contenido del archivo, pero no permite realizar operaciones de escritura. Esta opción es útil cuando solo necesitas leer el contenido existente del archivo.

        ios::binary: Abre el archivo en modo binario
        
        ios::app: Abre el archivo en modo de adjuntar. Permite agregar datos al final del archivo sin sobrescribir el contenido existente. Los nuevos datos se agregarán al final del archivo.
            -Su cursor no se podra mover
        ios::ate::At_The_End: Abre el archivo y coloca el puntero de posición al final del archivo. Esto significa que cualquier operación de escritura se realizará al final del archivo. También permite leer cualquier parte del archivo utilizando desplazamientos.
            -Permite mover el cursor

        ios::trunc: Trunca el archivo si ya existe. Esto borra todo el contenido existente del archivo. Si el archivo no existe, se crea uno nuevo.

        Estas opciones se pueden combinar utilizando el operador de bits OR (|). 
        Por ejemplo, para abrir un archivo en modo de lectura y adjuntar, puedes utilizar ios::in | ios::app. 
            var_archivo_salida.open("ruta_del_archivo/archivo.txt", ios::in | ios::app);
            En este ejemplo, el archivo se abrirá en modo de lectura y adjuntar, 
            lo que significa lo que te permitirá leer el contenido existente del archivo y agregar datos al final sin sobrescribirlo. 
    */
    
    //Escribir en el archivo
    // int x; cin>>x; // cin -> Console Input -> Entrada por consola
    // cin.ignore(256, '\n');
    // cout<<"Hola mundo "<<x<<endl; //cout -> Console Output -> Salida por consola. Donde "<<", sera un operador de insercion para la salida por consola.
    // ofstream archivo_salida;
    // archivo_salida.open("9_recursos/Archivo1.txt", ios::app); //No es necesario que el archivo exista
    // archivo_salida<<"\nHola mundo "<<x<<endl; //Redireccion de flujo: Escribir en el archivo.
    // archivo_salida.close(); //Cierre de flujo: Cerrar el archivo.

    /*
        VERIFICAR ESTADO DEL FLUJO


        bad(): Devulve True, cuando: No hay permisos para abrir el archivo. Cuando no hay espacio en el disco. Cuendo no exite el archivo
        fail(): Devulve True, cuando: Hay un error de formato (tratas de leer un int y solo encuentra un char)
        eof()::End_of_File:  Devulve True, cuando: Se llego al fin del archivo: Cuando se leer un archivo liena por linea y se llega al final
        good(): Devulve True, cuando: bat() y fail() = good(), sera True
    */

    // ifstream archivo_entrada;
    // archivo_entrada.open("9_recursos/Archivo1.txt"); //No existe este archivo
    // // archivo_entrada.open("9_recursos/Archivo2.txt"); //No existe este archivo
    // if(archivo_entrada.good()){cout<<"Buen flujo de Apertura"<<endl;}
    // else{cout<<"Error en el flujo de apertura"<<endl;}
    // archivo_entrada.close()

    /*
        LEER MULTOPLES LINEAS EN UN ARCHIVO
    */
    // ifstream archivo_entrada;
    // archivo_entrada.open("9_recursos/Archivo1.txt");
    // char linea [80];
    // while(!archivo_entrada.eof()){ //Mientras no sea tenga el cursor en el fin del archivo
    //     archivo_entrada.getline(linea, 80);
    //     cout<<linea<<endl;
    // }
    // archivo_entrada.close();

    // char linea2 [256]; //
    // archivo_entrada.open("9_recursos/pruebas.cpp"); //No existe este archivo
    // if(archivo_entrada.good()){
    //     while(!archivo_entrada.eof()){archivo_entrada.getline(linea2, 256);cout<<linea2<<endl;}
    // }else{
    //     cout<<"No se puede leer"<<endl;
    // }


    /*
        ARCHIVOS BINARIOS
    */
    /* ESCRITURA DE UN ARCHIVO BINARIO 
        El proceso de escritura para los archivos binario es:
            Desde Memoria ->>>> Hacia el archivo
                -Es byte por byte
        
        Se necesitan los siguientes datos para hacer el traspaso de informacion de memoria hacia el archivo:
            1-. Desde que punto/posicion de la memoria se empezara el traspaso
            2-. Cuantos bytes se van a pasar
   */
    // ofstream archivo_salida;
    // cout<<sizeof(Persona)<<endl; //12bytes [8char + 4int]
    // archivo_salida.open("9_recursos/data.bin", ios::binary); //Las extenciones para un archivo binario son: .bin; .dat
    // //Para escribir informacion:
    // //Primer parametro: Puntero de tipo char que guarde el byte de inicio del del objeto
    // //Segundo parametro: Cantidad de bytes a pasar
    // Persona2 p = {"John", 23};
    // Persona2 p2 = {"Carlos", 32};
    // archivo_salida.write((char*)&p, sizeof(Persona2)); 
    // archivo_salida.write((char*)&p2, sizeof(Persona2)); 
    // archivo_salida.close();

    // /* LECTURA DE UN ARCHIVO BINARIO 
    //     El proceso de escritura para los archivos binario es:
    //         Desde el archivo ->>>> Hacia la memoria
    //             -Es byte por byte
        
    //     Se necesitan los siguientes datos para hacer el traspaso de informacion de memoria hacia el archivo:
    //         1-. A que punto/posicion de la memoria se van a pasar los bytes
    //         2-. Cuantos bytes se van a pasar
    // */
    // ifstream archivo_entrada;
    // archivo_entrada.open("9_recursos/data.bin", ios::binary); //Las extenciones para un archivo binario son: .bin; .dat
    // archivo_entrada.read((char*)&p, sizeof(Persona2));
    // cout<<p.nombre<<endl;
    // cout<<p.edad<<endl;
    
    // archivo_entrada.read((char*)&p, sizeof(Persona2));
    // cout<<p.nombre<<endl;
    // cout<<p.edad<<endl;
    // archivo_entrada.close();

    // /*IMPORTATEN NOTAR ESTA DIFERENCIA ENTRE UN WHILE EN VERDADERO DESPUES HABER ITERADO UN ARCHIVO Y UN WHILE EN FALSE SIN HABER ITERADO EL ARCHIVO*/
    // //Descomenta/comentar el codigo despues de la declaracion de 'archivo_entrada' hasta este comentario para ver el cambio
    // archivo_entrada.open("9_recursos/data.bin", ios::binary); 
    // while(archivo_entrada.eof()){
    //     archivo_entrada.read((char*)&p, sizeof(Persona2));
    //     cout<<p.nombre<<endl;
    //     cout<<p.edad<<endl;    
    // }
    // archivo_entrada.close();

    // archivo_entrada.open("9_recursos/data.bin", ios::binary); //Las extenciones para un archivo binario son: .bin; .dat
    // cout<<endl;cout<<endl;
    // while(!archivo_entrada.eof()){
    //     archivo_entrada.read((char*)&p, sizeof(Persona2));
    //     cout<<p.nombre<<endl;
    //     cout<<p.edad<<endl;    
    // }
    // archivo_entrada.close();

    // //Solucion al incidente mencionado anterior mente
    // archivo_entrada.open("9_recursos/data.bin", ios::binary); //Las extenciones para un archivo binario son: .bin; .dat
    // cout<<endl;cout<<endl;
    // while(archivo_entrada.read((char*)&p,sizeof(Persona2))){//Se controla la iteracion, no en funcion del archivo, sino en funcion del objeto en memoria
    //     /**********
    //         EOF         READ?       P
    //         NO          SI        Gian,23
    //         NO          SI        Gian,23
    //         NO          NO        Gian,23
    //         SALE DEL WHILE
    //     ************/
    //     cout<<p.nombre<<endl;
    //     cout<<p.edad<<endl;
    // }
    // archivo_entrada.close();

    /*
        ELIMINAR & RENOMBRAR ARCHIVOS
    */
    ofstream archivo_salida;
    char c = ' ';
    char old_name[50] = "9_recursos/old_name.txt";
    char new_name[50] = "9_recursos/new_name.txt";
    cout<<"Precione enter iniciar (Se borrara el 'archivo nuevo'): ";cin.get(c);
    if (remove(new_name) == 0) {
        cout << "Se borro el archivo correctamente" << endl;
    } else {
        cout << "No se pudo borrar el archivo" << endl;
    }
    cout<<"Precione enter para crear el 'archivo viejo': ";cin.get(c);
    archivo_salida.open(old_name, ios::binary);
    cout<<"Precione enter para renombrar el 'archivo viejo' a 'archivo nuevo': ";cin.get(c);
    if (rename(old_name, new_name) == 0) {
        cout << "Se renombro el archivo correctamente" << endl;
    } else {
        cout << "No se pudo renombrar el archivo" << endl;
    }
    cout<<"Precione enter para finalizar'";cin.get(c);
    archivo_salida.close();




return 0;}//main


