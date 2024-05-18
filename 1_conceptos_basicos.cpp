// conceptos_basicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>	 //llamando la libreria
#include <typeinfo> //Llamando la libreria para optener el 'tipo' de una variable
#include <cmath> //Libreria para calculos matematicos
#define pi 3.1416
using namespace std; //asignando namespace std al proyecto → /* https://openwebinars.net/blog/que-son-los-namespaces-en-c/ */
//
int main() //Inicializador del programa
{
	//
	/*
	* Secuencias de escape
	\n → Salto de linea
	\b → retrocede un caracter
	\r → Sobrepone la cadena seguida de la secuencia de escape, sobre el inicio de la cadena en sí
	\t → Tabulador
	\0 → Fin de linea
	*/
	cout << "Se pueden poner " << endl
		<< "varios endl, en un mismo cout" << endl;
	cout << "Probando Seuencia de escape: r" << endl;
	cout << "Acontinuacion se prenseta la cadena abcg, y def \nEsta ultima tiene 3 caracteres, por lo que se sobre pondra la segunda cadena en los primeros 3 caracteres de la primer cadena \nObteniendo la siguiente cadena: " << endl;
	cout << "Antes: "
		<< "abcg"
		<< "def\nDespues: " << endl;
	cout << "abcg\r"
		<< "def" << endl;
	cout <<endl;
	//
	/*
	*Variables:
	Los nombres de las  variables no pueden tener simbolos salvo, raya al piso "_"
	sizeof(tipoVariable): Devuelve el tamaño, en bytes  del tipo variable
	Si no se asigna un valor a la variable, se le asigna automaticamente un cavalor "basura"
	Tipos: 
		int: 	(Bytes[variables] = 4 u 8), puede almacenar 2^32 = 4.294.967.296 (4.294.967.295, si se cuenta el 0), valores cuando se usa 
				el indicativo = 'unsigned'.
				Sino se usa este indicativo, se asignara un bit para el signo, y se repartira el numero de valores a la mitad:
				Una mitad para los valores positivos y la otra para los valores negativos, quedando 2^31 = -2.147.483.648, a, 2.147.483.647
						
	char(Bytes = 1)
	char: Cuando se asigna un valor numerico a una variable char, esta lo convierte a su caracter correspondiente en codigo ASCII
	*/
	cout << "Variables" << endl;
	cout << "Int:" << endl;
	int numero1 = 2147483647;
	cout << "Este es el valor numero1 (usando: 2147483647): " << numero1 << endl;
	cout << "Pero si se excede de su limite retoma su minimo valor: " << endl;
	numero1 = 2147483648;
	cout << "Este es ahora el valor numero1 (usando: 2147483648): " << numero1 << endl;
	//Con unsigned
	cout << "Usando el valor unsigned" << endl;
	unsigned int numero2 = 4294967295;
	cout << "Numero 2 (usando: 4294967295) : " << numero2 << endl;
	cout << "Pero si se excede de su limite retoma su minimo valor: " << endl;
	numero2 = 4294967296;
	cout << "Numero 2 (usando: 4294967296) ahora: " << numero2 << endl;
	cout <<endl;
	//--
	/*
	*Notacion cientifica:
	e: Asignar esta notacion a un valor de una varibale, permite elevar el valor de la variable por dies veces el dato asignado: double var = 3e-3 → var = 3*-10^3 → var = 0.003
	*/
	double var = 3e-3;
	cout << "var= " << var << endl;
	cout <<endl;
	//
	cout <<"Divicion real vs divicion entera"<<endl;
	cout <<"Se diferencian en vase al tipo de dato"<<endl;
	cout <<7/3 <<" Entero=> "<<typeid(7/3).name()<<endl;
	cout <<7.0/3 <<" Double => "<<typeid(7.0/3).name()<<endl;
	cout <<endl;
	//
	cout <<"Precedencia Aritmentica"<<endl;
	cout <<"El lengaje sigue la ley de orden de operaciones de izquierda a derecha"<<endl;
	cout <<"Donde se operan primero los parentesis,luego divicion, luego multiplicacion y despues las sumas"<<endl;
	cout <<"(14-8)/2*(3+1) => 6/2*(3+1) => 3*(3+1) => 3*4 => 12: "<<(14-8)/2*(3+1)<<endl;
	cout <<endl;
	//
	//Procurar dejar la operacion verdadera a la izquierda
	cout<<"Operadores Logicos y de comparacion"<<endl;
	cout<<"Se analizan de derecha a izquierda"<<endl;
	bool r1 = (true&&true) || false;//True
	bool r2 = (5==5) || (6!=2) && !(1==1);//True
	bool r3 = false && true || false;//False
	bool r4 = (5<3) || (3>=3) || true;//True
	bool r5 = ( (3<=3)&& (5<5) || false ); //False
	cout<<r1<<"\n"<<r2<<"\n"<<r3<<"\n"<<r4<<"\n"<<r5<<"\n"<<endl;
	cout<<endl;
	//
	cout<<"Operando la libreria cmath"<<endl;
	cout<<"Potencia 5 a la 5: "<<pow(5,5)<<endl;
	cout<<"Raiz de 100.0: "<<sqrt(100.0)<<endl;
	cout<<"Seno de 30 (rad= 0.523599): "<<sin(0.523599)<<endl;
	cout<<"Coseno de 60 (rad= 1.0472): "<<cos(1.0472)<<endl;
	cout<<"Tangente de 45 (rad= 0.785398): "<<tan(0.785398)<<endl;
	//
	cout<<"Constantes"<<endl;
	/*	Se pueden definir de dos formas
		1ra: Aplicando '#define nombre valor', donde se llaman las librerias
		2da: Usando el operador const tipoVariable var = valor;
	*/
	const double PI = 3.1415;
	cout<<"Constante de #define "<<pi<<endl;
	cout<<"Constante de const "<<PI<<endl;
	//
	
} //main
