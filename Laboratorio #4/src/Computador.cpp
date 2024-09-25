/*
LABORATORIO #4
Proposito: La aplicación declara dos vectores para almacenar objetos de ambas entidades (clases)
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 07-11-2023
Version: 1.0
*/

#include "Computador.h"
#include <iostream>

using namespace std;

Computador::Computador()
{
    string procesador, ram, grafica;        //variables para leer datos
    //ctor
}

Computador::~Computador()
{
    //dtor
}

void Computador::setProcesador(){       //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese el procesador: ";
    cin>>procesador;
}

string Computador::getProcesador()const {
    return procesador;
}

void Computador::setRam(){          //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese la ram: ";
    cin>>ram;
}

string Computador::getRam()const {
    return ram;
}

void Computador::setGrafica(){          //Funcion para leer los datos
    fflush(stdin);
    cout<<"\n\tIngrese la grafica: ";
    cin>>grafica;
}

string Computador::getGrafica()const {
    return grafica;
}
