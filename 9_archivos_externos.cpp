#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
// 
#include <iostream>
#include <fstream>
// 


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

    /*
        ofstream -> Es el flujo de escritura.

        ios::in: Abre el archivo en modo de lectura. Permite leer el contenido del archivo, pero no permite realizar operaciones de escritura. Esta opción es útil cuando solo necesitas leer el contenido existente del archivo.

        ios::app: Abre el archivo en modo de adjuntar. Permite agregar datos al final del archivo sin sobrescribir el contenido existente. Los nuevos datos se agregarán al final del archivo.

        ios::ate: Abre el archivo y coloca el puntero de posición al final del archivo. Esto significa que cualquier operación de escritura se realizará al final del archivo. También permite leer cualquier parte del archivo utilizando desplazamientos.
            - 

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
    // archivo_salida.open("9_recursos/Archivo1.txt", ios::app);
    // archivo_salida<<"\nHola mundo "<<x<<endl; //Redireccion de flujo: Escribir en el archivo.
    // archivo_salida.close(); //Cierre de flujo: Cerrar el archivo.






    //Leer un archivo
    ifstream archivo_entrada;
    archivo_entrada.open("9_recursos/Archivo1.txt", ios::in); // ios::in: Abre el archivo en modo de lectura.
    char linea[80]; //Leera solo 80 caracteres
    // archivo_entrada>>linea; //Leera solo hasta encontrar un espacio o un '\n' la linea leida
    archivo_entrada.getline(linea, 80); //Leera hasta tomar 80 caracteres o hasta encontrar un '\n' la linea leida
    cout<<linea<<endl;
    archivo_entrada.close(); //Cierre de flujo: Cerrar el archivo.
    return 0;
}//main


