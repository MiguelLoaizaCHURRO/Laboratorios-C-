/*
LABORATORIO #4
Proposito: La aplicación declara dos vectores para almacenar objetos de ambas entidades (clases)
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 07-11-2023
Version: 1.0
*/

#include "Usuarios.h"
#include <iostream>

using namespace std;

Usuarios::Usuarios()
{
    string nombre, apellido, edad;      //variables para leer datos
    //ctor
}

Usuarios::~Usuarios()
{
    //dtor
}

void Usuarios::setNombre(){         //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese el nombre: ";
    cin>>nombre;
}

string Usuarios::getNombre()const {
    return nombre;
}

void Usuarios::setApellido(){           //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese el apellido: ";
    cin>>apellido;
}

string Usuarios::getApellido()const {
    return apellido;
}

void Usuarios::setEdad(){           //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese la edad: ";
    cin>>edad;
}

string Usuarios::getEdad()const {
    return edad;
}
