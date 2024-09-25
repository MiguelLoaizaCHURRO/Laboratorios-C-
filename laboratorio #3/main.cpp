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

Fecha ultima modificacion: 26-10-2023 / 11:28 am
Version: 2.2
*/

#include <iostream>
#include "Aspirante.h"          //Llamado de la clase aspirante

using namespace std;

Aspirante aspirante1;           //Creacion de un aspirante

void info(){                    //Informacion de participantes
	cout<<"\n\t\t***************************************\n";
    cout<<"\t\t**     Miguel Loaiza - 2357855       **\n";
    cout<<"\t\t**     Alex Santiago - 2357739       **\n";
    cout<<"\t\t**     Mauricio Cuartas - 2357858    **\n";
    cout<<"\t\t***************************************\n";
}

void opcion1(){                 //En esta funcion se piden los datos personales
    aspirante1.setNumID();
    aspirante1.setApellido();
    aspirante1.setNombre();
}

void opcion2(){                 //En esta funcion se piden los datos de las pruebas
    aspirante1.setlimpiarPruebaTotal(0);//Aqui con este metodo limpiamos la lista
    aspirante1.setPrueba1();
    aspirante1.setPrueba2();
    aspirante1.setPrueba3();
    aspirante1.setPrueba4();
    aspirante1.setPrueba5();
}

void opcion3(){
                                /*
                    En esta funcion validamos que la persona alla presentado
                    las pruebas y dependiendo a eso presente o no la
                    prueba adicional con una autorizacion
                                */
    if (aspirante1.getAutorizadoPruebaAdicional()) {
        aspirante1.setPruebaAdicional();
    } else {
        cout<<"\n\t.:NO PUEDES ENTRAR AUN:."<<endl;
    }
}

void opcion4(){
                                /*
                    En esta funcion mostramos los datos generales
                    incluyendo su nivel y si presenta o no una prueba adicional
                                */
    cout<<"  Numero de identificacion: "<<aspirante1.getNumID()<<endl;
    cout<<"  Nombre: "<<aspirante1.getNombre()<<endl;
    cout<<"  Apellido: "<<aspirante1.getApellido()<<endl;
    cout<<"  Calificacion prueba 1: "<<aspirante1.getPrueba1()<<endl;
    cout<<"  Calificacion prueba 2: "<<aspirante1.getPrueba2()<<endl;
    cout<<"  Calificacion prueba 3: "<<aspirante1.getPrueba3()<<endl;
    cout<<"  Calificacion prueba 4: "<<aspirante1.getPrueba4()<<endl;
    cout<<"  Calificacion prueba 5: "<<aspirante1.getPrueba5()<<endl;
    cout<<"  Calificacion prueba adicional: "<<aspirante1.getPruebAdicional()<<endl;
    cout<<aspirante1.getnivelPrueba();
}

void menu(){                    //Funcion menu
    int opc = 0;
    do{
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Ingreso de datos personales\n";
        cout<<"\t2. Ingreso de puntaje de las cinco pruebas iniciales\n";
        cout<<"\t3. Ingreso de puntaje de la prueba adicional (solo si se le ordena)\n";
        cout<<"\t4. Visualización de los datos del aspirante (personales y de puntajes)\n";
        cout<<"\t5. Informacion de los programadores\n";
        cout<<"\t0. Salir\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc){
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            case 4:
                opcion4();
                break;
            case 5: info();
                break;
            case 0:
                cout<<"\n\t\tGracias por usar mi app!!!\n\n";
                break;
            default:
                cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
        }

    }while (opc != 0);

}

int main(){
    menu();
    return 0;
}
