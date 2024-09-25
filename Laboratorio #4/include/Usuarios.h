/*
LABORATORIO #4
Proposito: La aplicación declara dos vectores para almacenar objetos de ambas entidades (clases)
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 07-11-2023
Version: 1.0
*/

#ifndef USUARIOS_H
#define USUARIOS_H
#include <iostream>

using namespace std;

class Usuarios
{
    public:
        string nombre, apellido, edad;      //variables para leer datos

        Usuarios();
        virtual ~Usuarios();

        void setNombre();               //Funciones para leer los datos
        string getNombre() const;

        void setApellido();
        string getApellido() const;

        void setEdad();
        string getEdad() const;

    protected:

    private:
};

#endif // USUARIOS_H
