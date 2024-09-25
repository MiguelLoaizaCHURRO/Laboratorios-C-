/*
LABORATORIO #4
Proposito: La aplicación declara dos vectores para almacenar objetos de ambas entidades (clases)
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 07-11-2023
Version: 1.0
*/

#ifndef COMPUTADOR_H
#define COMPUTADOR_H
#include <iostream>

using namespace std;

class Computador
{
    public:
        string procesador, ram, grafica;        //variables para leer datos
        Computador();
        virtual ~Computador();

        void setProcesador();                   //Funciones para leer los datos
        string getProcesador() const;

        void setRam();
        string getRam() const;

        void setGrafica();
        string getGrafica() const;

    protected:

    private:
};

#endif // COMPUTADOR_H
