/*
LABORATORIO #3
Proposito: Aplicacion que permite  se centra en la
           gestión de datos de aspirantes que desean aplicar
           a una vacante, incluyendo la recopilación de información personal
           y la calificación de pruebas.
Autores:
	- Miguel Loaiza: 2357855-2724
	- Alex Santiago: 2357739-2724
	- Mauricio Cuartas: 2357858-2724

Fecha ultima modificacion: 26-10-2023
Version: 2.2
*/

#ifndef ASPIRANTE_H
#define ASPIRANTE_H
#include <iostream>

using namespace std;

class Aspirante
{
    public:
        //Creacion de las variables de los datos personales (apellido, nombre y número de ID)
        long numID;
        string apellido, nombre;
        double pruebaTotal;
        double calificaciones[5]; //Lista para almacenar las pruebas

        Aspirante() {    //Metodo constructor
            numID = 0;
            apellido = nombre = "";
        }
        virtual ~Aspirante() {}
            /*
                    DEFINICIONES PARA INGRESO DE DATOS PERSONALES
            */
        void setNumID(){            //definicion de ingreso de id
            cout<<" Ingrese el numero de identificacion: ";
            cin>>numID;
        }

        long getNumID(){            //definicion de guardado de id
            return numID;
        }

        void setApellido(){         //definicion de ingreso de apellido
            fflush(stdin);
            cout<<" Ingrese el apellido: ";
            getline(cin, apellido);
        }

        string getApellido(){       //definicion de guardado de apellido
            return apellido;
        }

        void setNombre(){           //definicion de ingreso de nombre
            fflush(stdin);
            cout<<" Ingrese el nombre: ";
            getline(cin, nombre);
        }

        string getNombre(){         //definicion de guardado de nombre
            return nombre;
        }
            /*
                    DEFINICIONES PARA INGRESO DE DATOS PERSONALES
            */
        void setPrueba1(){          //definicion de ingreso de prueba 1
            do{
                cout<<" Ingrese calificacion de prueba 1: ";
                cin>>calificaciones[0];
                if (calificaciones[0] < 0 || calificaciones[0] > 20) {
                    cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 20:.\n"<<endl;
                }else{
                    pruebaTotal += calificaciones[0];
                }
            }while(calificaciones[0] < 0 || calificaciones[0] > 20);

        }

        double getPrueba1(){        //definicion de guardado de prueba 1
            return calificaciones[0];
        }

        void setPrueba2(){          //definicion de ingreso de prueba 2
            do{
                cout<<" Ingrese calificacion de prueba 2: ";
                cin>>calificaciones[1];
                if (calificaciones[1] < 0 || calificaciones[1] > 20) {
                    cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 20:.\n"<<endl;
                }else{
                    pruebaTotal += calificaciones[1];
                }
            }while(calificaciones[1] < 0 || calificaciones[1] > 20);

        }

        double getPrueba2(){        //definicion de guardado de prueba 2
            return calificaciones[1];
        }

        void setPrueba3(){          //definicion de ingreso de prueba 3
            do{
                cout<<" Ingrese calificacion de prueba 3: ";
                cin>>calificaciones[2];
                if (calificaciones[2] < 0 || calificaciones[2] > 20) {
                    cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 20:.\n"<<endl;
                }else{
                    pruebaTotal += calificaciones[2];
                }
            }while(calificaciones[2] < 0 || calificaciones[2] > 20);

        }

        double getPrueba3(){        //definicion de guardado de prueba 3
            return calificaciones[2];
        }

        void setPrueba4(){          //definicion de ingreso de prueba 4
            do{
                cout<<" Ingrese calificacion de prueba 4: ";
                cin>>calificaciones[3];
                if (calificaciones[3] < 0 || calificaciones[3] > 20) {
                    cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 20:.\n"<<endl;
                }else{
                    pruebaTotal += calificaciones[3];
                }
            }while(calificaciones[3] < 0 || calificaciones[3] > 20);

        }

        double getPrueba4(){        //definicion de guardado de prueba 4
            return calificaciones[3];
        }

        void setPrueba5(){          //definicion de ingreso de prueba 5
            do{
                cout<<" Ingrese calificacion de prueba 5: ";
                cin>>calificaciones[4];
                if (calificaciones[4] < 0 || calificaciones[4] > 20) {
                    cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 20:.\n"<<endl;
                }else{
                    pruebaTotal += calificaciones[4];
                }
            }while(calificaciones[4] < 0 || calificaciones[4] > 20);

        }

        double getPrueba5(){        //definicion de guardado de prueba 5
            return calificaciones[4];
        }

        void setPruebaAdicional(){  //definicion de ingreso de prueba adicional
            if(pruebaTotal >=60 && pruebaTotal <=79){
            cout<<"\tClasificas a la siguiente ronda del proceso";
                do{
                    cout<<" Ingrese calificacion de prueba adicional: ";
                    cin>>calificaciones[5];
                    if (calificaciones[5] < 0 || calificaciones[5] > 50) {
                        cout<<"\n\t.:ERROR, EL RANGO ES ENTRE 1 Y 50:.\n"<<endl;
                    }else{
                        if(calificaciones[5] >= 45 && calificaciones[5] <= 50){
                            cout<<"  Clasifica a la siguiente ronda!!!\n";
                        }
                    }
                    }while(calificaciones[5] < 0 || calificaciones[5] > 50);
            }else{
                cout<<"  No clasificas para realizar la prueba adicional\n";
            }

        }

        double getPruebAdicional(){     //definicion de guardado de prueba adicional
            return calificaciones[5];
        }

        string getnivelPrueba(){        //definicion de guardado de nivel de prueba
            if(pruebaTotal <= 20) {
                return "  Nivel muy bajo";
            }else if(pruebaTotal > 20 && pruebaTotal < 41) {
                return "  Nivel bajo";
            }else if(pruebaTotal > 40 && pruebaTotal < 61) {
                return "  Nivel medio";
            } else if (pruebaTotal > 60 && pruebaTotal < 81) {
                if (pruebaTotal > 79) {
                    return " Clasifican a la siguiente ronda del proceso";
                } else {
                    return " Debe realizar una prueba adicional cuyo valor está entre 1 y 50";
                }
            } else if (pruebaTotal > 80) {
                return "  Nivel alto";
            }

        }

        bool getAutorizadoPruebaAdicional(){    //autoeizamos si presenta la prueba adicional
            return (pruebaTotal >= 60 && pruebaTotal <= 79);
        }

        void setlimpiarPruebaTotal(int valor){        //Limpiamos la lista, inicia en 0
            pruebaTotal = valor;
        }

    protected:

    private:
};

#endif // ASPIRANTE_H
