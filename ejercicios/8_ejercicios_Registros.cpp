#include <iostream>	 //llamando la libreria
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
// 
#include <cstring>
#define MAX 100
// 
// Declrando un registros
/* EJERCICIO 1 */
struct Proveedor{
    char nombre[50];
    int Cantidada_vendida;
    float precio_unitario;
    float importe;
};

/* EJERCICIO 2 */
struct Alumno{
    char nombre[50];
    float nota_1;
    float nota_2;
    float nota_3;
    float promedio;
};

/* EJERCICIO 3 */

struct Fecha{
    int dia;
    int mes;
    int anio;
};
struct Persona{
    char nombre[50];
    char apellido[50];
    Fecha fecha_nacimiento;
    int edad;
    char sexo;

};





// Definiendo prototipo de la funciones

/* EJERCICIO 1 */
void llenar_proveedores(Proveedor[], int);
void mostrar_proveedores(Proveedor[], int);
Proveedor proveedorMasBarato(Proveedor[], int);
Proveedor proveedorMasCaro(Proveedor[], int);
void mostrar_proveedor(Proveedor);

/* EJERCICIO 2 */
void llenar_alumnos(Alumno[], int);
void ordenar_alumnos(Alumno[], int);
void mostrar_alumnos(Alumno[], int);

/* EJERCICIO 3 */
void llenar_persona(Persona[], int);
void mostrar_persona_filtrada(Persona[], int, Fecha, Fecha);
Persona leer_persona();
Fecha leerFecha();
bool esta_entre_las_fechas(Persona, Fecha, Fecha);
int numero_dias(Fecha);//No es exacto

int main() //Inicializador del programa
{
    /*
        EJERCICIO 1

        Escribir un progrmaa que defina una tabla de proveedores
        Teniendo cada proveedor los siguientes datos: Nombre, Cantidad vendida, precio unitario
        Visualizar los datos de cada proveedor: El nombre, el importe total de compra
        Tambien se debe visualizar el proveedor mas barato y el proveedor mas caro
        Importante: Introducir los requeridos datos por teclado, pero calcular el importe total de la venta: Cantidada_vendida * Precio unitario

    */
    // Proveedor proveedores[MAX];
    // Proveedor auxProveedor;
    // int n = 0;
    // cout<<"Ingrese la cantidad de proveedores: ";
    // cin>>n; cin.ignore(256, '\n');
    // // 
    // llenar_proveedores(proveedores, n);
    // mostrar_proveedores(proveedores, n);
    // auxProveedor = proveedorMasBarato(proveedores, n);
    // cout<<"El proveedor mas barato es: "; mostrar_proveedor(auxProveedor);
    // auxProveedor = proveedorMasCaro(proveedores, n);
    // cout<<"El proveedor mas barato es: "; mostrar_proveedor(auxProveedor);
    
    
    
    /*
        EJERCICIO 2

        Escribir un programa que permite ingresar el nombre y 3 notas de N aumnos,
        Se deben almacenar en un array de estructura.
        Mostrar los alumnos ingresados y su promedio ordenados de mayor a menor
    */
    
    // Alumno alumnos[MAX];
    // Alumno auxAlumno;

    // int m = 0;
    // cout<<"Ingrese la cantidad de alumnos: ";
    // cin>>m; cin.ignore(256, '\n');
    // llenar_alumnos(alumnos, m);


    // strcpy(alumnos[0].nombre, "Juan");
    // alumnos[0].nota_1 = 10;
    // alumnos[0].nota_2 = 10;
    // alumnos[0].nota_3 = 10;
    // alumnos[0].promedio = (alumnos[0].nota_1 + alumnos[0].nota_2 + alumnos[0].nota_3) / 3;

    // strcpy(alumnos[1].nombre, "Pedro");
    // alumnos[1].nota_1 = 9;
    // alumnos[1].nota_2 = 9;
    // alumnos[1].nota_3 = 9;
    // alumnos[1].promedio = (alumnos[1].nota_1 + alumnos[1].nota_2 + alumnos[1].nota_3) / 3;

    // strcpy(alumnos[2].nombre, "Maria");
    // alumnos[2].nota_1 = 8;
    // alumnos[2].nota_2 = 8;
    // alumnos[2].nota_3 = 8;
    // alumnos[2].promedio = (alumnos[2].nota_1 + alumnos[2].nota_2 + alumnos[2].nota_3) / 3;

    // mostrar_alumnos(alumnos, 3);
    

    /*
        EJERCICIO 3

        Escriba un programa que imprima todos os nombres, apellidos y edades de todos los varones nacidos entre dos fechas.
        Las fechas deben ser ingresadas por teclado.
        El registro debera tener los siguientes datos: Apellido, Nombre, Fecha de nacimiento (Dia, Mes, Año), edad y Sexo
    */
    
    Persona Personas[MAX];
    
    int l = 0;
    Fecha fecha_ini, fecha_fin, fecha_aux;
    // cout<<"Ingrese la cantidad de personas: ";
    // cin>>l; cin.ignore(256, '\n');
    // llenar_persona(Personas, l);

    strcpy(Personas[0].nombre, "Juan");
    strcpy(Personas[0].apellido, "Perez");
    Personas[0].edad = 20;
    Personas[0].sexo = 'M';
    Personas[0].fecha_nacimiento.dia = 22;
    Personas[0].fecha_nacimiento.mes = 4;
    Personas[0].fecha_nacimiento.anio = 1997;

    cout<<"Fecha de inicio: ";
    fecha_ini = leerFecha();

    cout<<"Fecha de fin: ";
    fecha_fin = leerFecha();

    l = 1;
    mostrar_persona_filtrada(Personas, l, fecha_ini, fecha_fin);

    
    return 0;
}//main






// Declarando contenido de los prototipos de funciones o procedimientos


/* EJERCICIO 1 */
void llenar_proveedores(Proveedor Proveedores[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"Ingrese los datos por proveedor: "<<i+1<<endl;
        cout<<"Ingrese el nombre del proveedor: "; cin.getline(Proveedores[i].nombre, 50);
        cout<<"La cantidad vendida para el proveedor: "; cin>>Proveedores[i].Cantidada_vendida; cin.ignore(256, '\n');
        cout<<"Ingrese el precio unitario de la venta del proveedor: "; cin>>Proveedores[i].precio_unitario; cin.ignore(256, '\n');
        Proveedores[i].importe = Proveedores[i].Cantidada_vendida * Proveedores[i].precio_unitario;
        cout<<endl;
        cout<<endl;
    }
    
}

void mostrar_proveedores(Proveedor Proveedores[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"Datos del proveedor: "<<i+1<<endl;
        cout<<"Nombre del proveedor: "<<Proveedores[i].nombre<<endl;
        cout<<"Cantidad vendida del proveedor: "<<Proveedores[i].Cantidada_vendida<<endl;
        cout<<"Precio unitario de la venta del proveedor: "<<Proveedores[i].precio_unitario<<endl;
        cout<<"Importe total de la venta del proveedor: "<<Proveedores[i].importe<<endl;
        cout<<endl;
        cout<<endl;
    }
    
}


Proveedor proveedorMasBarato(Proveedor Proveedores[], int count){
    Proveedor mas_barato = Proveedores[0];
    for (int i = 1; i < count; i++)
    {
        if(Proveedores[i].precio_unitario < mas_barato.precio_unitario ){mas_barato = Proveedores[i];}
    }
    return mas_barato;
}

Proveedor proveedorMasCaro(Proveedor Proveedores[], int count){
    Proveedor mas_caro = Proveedores[0];
    for (int i = 1; i < count; i++)
    {
        if(Proveedores[i].precio_unitario > mas_caro.precio_unitario ){mas_caro = Proveedores[i];}
    }
    return mas_caro;
}


void mostrar_proveedor(Proveedor Proveedor){
    cout<<"Nombre: "<<Proveedor.nombre<<endl;
    cout<<"Cantidad de elementos: "<<Proveedor.Cantidada_vendida<<endl;
    cout<<"Precio unitario: "<<Proveedor.precio_unitario<<endl;
    cout<<"Importe total de: "<<Proveedor.importe<<endl;
    cout<<endl;
}




/* EJERCICIO 2 */
void llenar_alumnos(Alumno Alumnos[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"Ingrese los datos para el alumno: "<<i+1<<endl;
        cout<<"Ingrese el nombre del alumno: "; cin.getline(Alumnos[i].nombre, 50);
        cout<<"Ingrese la nota 1: "; cin>>Alumnos[i].nota_1; cin.ignore(256, '\n');
        cout<<"Ingrese la nota 2: "; cin>>Alumnos[i].nota_2; cin.ignore(256, '\n');
        cout<<"Ingrese la nota 3: "; cin>>Alumnos[i].nota_3; cin.ignore(256, '\n');
        Alumnos[i].promedio = (Alumnos[i].nota_1+Alumnos[i].nota_2+Alumnos[i].nota_3)/count;
        cout<<endl;
        cout<<endl;
    }
    
}


void ordenar_alumnos(Alumno Alumnos[], int count){
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-1; j++)
        {
            if(Alumnos[j].promedio < Alumnos[j+1].promedio){
                Alumno aux = Alumnos[j];
                Alumnos[j] = Alumnos[j+1];
                Alumnos[j+1] = aux;
            }
        }
    }
    
}


void mostrar_alumnos(Alumno Alumnos[], int count){
    ordenar_alumnos(Alumnos, count);
    cout<<"Promedio de los alumnos de mayor a menor: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<"Alumno: "<<i+1<<endl;
        cout<<"Nombre: "<<Alumnos[i].nombre<<endl;
        cout<<"Promedio: "<<Alumnos[i].promedio<<endl;
        cout<<endl;
        cout<<endl;
    }
}



/* EJERCICIO 3 */
void llenar_persona(Persona Personas[], int count){
    for (int i = 0; i < count; i++)
    {
        cout<<"Ingrese los datos para la persona: "<<i+1<<endl;
        Personas[i] = leer_persona();cout<<endl;
    }
}

void mostrar_persona_filtrada(Persona Personas[], int count, Fecha fecha_ini, Fecha fecha_fin){
    for (int i = 0; i < count; i++)
    {
        // cout<<"Persona: "<<i+1<<" - "<<Personas[i].nombre<<endl;
        // cout<<"Persona: "<<i+1<<" - "<<Personas[i].sexo<<endl;
        // cout<<"Fecha inicial: "<<fecha_ini.dia<<"/"<<fecha_ini.mes<<"/"<<fecha_ini.anio<<endl;
        // cout<<"Fecha final: "<<fecha_fin.dia<<"/"<<fecha_fin.mes<<"/"<<fecha_fin.anio<<endl;
        // cout<<"Fecha de nacimiento: "<<Personas[i].fecha_nacimiento.dia<<"/"<<Personas[i].fecha_nacimiento.mes<<"/"<<Personas[i].fecha_nacimiento.anio<<endl;
        // cout<<"Esta entre las fechas: "<<esta_entre_las_fechas(Personas[i], fecha_ini, fecha_fin)<<endl;
        if((Personas[i].sexo == 'M') && esta_entre_las_fechas(Personas[i], fecha_ini, fecha_fin)){
            cout<<"Persona: "<<Personas[i].nombre<<" "<< Personas[i].apellido<<" - "<<Personas[i].edad<< endl;
            cout<<"Fecha de nacimiento: "<<Personas[i].fecha_nacimiento.dia<<"/"<<Personas[i].fecha_nacimiento.mes<<"/"<<Personas[i].fecha_nacimiento.anio<<endl;
            cout<<endl;
            cout<<endl;
        }
    }
}

Persona leer_persona(){
    Persona Personas;
    cout<<"Ingrese el nombre de la persona: "; cin.getline(Personas.nombre, 50);
    cout<<"Ingrese el apellido de la persona: "; cin.getline(Personas.apellido, 50);
    cout<<"Ingrese la edad de la persona: "; cin>>Personas.edad; cin.ignore(256, '\n');
    cout<<"Ingrese el sexo de la persona: "; cin.getline(Personas.nombre, 2);
    cout<<"Fecha de nacimiento: ";
    Personas.fecha_nacimiento = leerFecha();
    return Personas;
}

Fecha leerFecha(){
    Fecha fecha;
    cin>>fecha.dia>>fecha.mes>>fecha.anio;
        /*
            Buffer: 22 01 2022
            fecha.dia = 22;
            fecha.mes = 01;
            fecha.anio = 2022;
        */
    return fecha;
}

bool esta_entre_las_fechas(Persona Personas, Fecha fecha_ini, Fecha fecha_fin){
    // Intrucciones basandose en una comparativa de dias
    // if(Personas.fecha_nacimiento.dia >= fecha_ini.dia && Personas.fecha_nacimiento.dia <= fecha_fin.dia){
    //     if(Personas.fecha_nacimiento.mes >= fecha_ini.mes && Personas.fecha_nacimiento.mes <= fecha_fin.mes){
    //         if(Personas.fecha_nacimiento.anio >= fecha_ini.anio && Personas.fecha_nacimiento.anio <= fecha_fin.anio){
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // Instrucciones haciendo uso de "numero_dias". No es exacto
    int dias_ini = numero_dias(fecha_ini);
    int dias_fin = numero_dias(fecha_fin);
    int dias_persona = numero_dias(Personas.fecha_nacimiento);
    if(dias_persona >= dias_ini && dias_persona <= dias_fin){
        return true;
    }else{
        return false;
    }
}

//No es exacto
int numero_dias(Fecha Fechas){
    return Fechas.dia+Fechas.mes*30+Fechas.anio*365;
}