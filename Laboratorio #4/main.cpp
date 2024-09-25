/*
LABORATORIO #4
Proposito: La aplicación declara dos vectores para almacenar objetos de ambas entidades (clases)
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 07-11-2023
Version: 1.0
*/

#include <iostream>
#include <vector>
#include "Computador.h"
#include "Usuarios.h"

using namespace std;
//prototipo de funciones
void menu();
void info();

void adicionarComputador();
void adicionarUsuario();
void listarComputadores();
void listarUsuarios();

vector<Computador> vecComputador;
vector<Usuarios> vecUsuarios;

//implementacion de funciones
void info(){                    //Informacion de participantes
	cout<<"\n\n\t\t\t**********************************************\n";
    cout<<"\t\t\t**     Miguel Angel Loaiza - 2357855        **\n";
    cout<<"\t\t\t**     Alex Santiago Guerra - 2357739       **\n";
    cout<<"\t\t\t**********************************************\n";
    cout<<endl<<endl;
    system("pause");
}

void menu(){                    //Funcion menu
    cout<<"\n\n\t\t....Bienvenido al Sistema....\n\n";
    int opc = 0;
    do{
        system("cls");
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Adicionar computador\n";
        cout<<"\t2. Adicionar usuarios\n";
        cout<<"\t3. Listar computador\n";
        cout<<"\t4. Listar usuarios\n";
        cout<<"\t5. Datos de los programadores\n";
        cout<<"\t0. Salir\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;

        //system("pause");
        system("cls");
        switch(opc){
            case 1:
                adicionarComputador();
                break;
            case 2:
                adicionarUsuario();
                break;
            case 3:
                listarComputadores();
                break;
            case 4:
                listarUsuarios();
                break;
            case 5:
                info();
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

void adicionarComputador(){     //funcion para adicionar computadores
    Computador objaux;
    objaux.setProcesador();
    objaux.setRam();
    objaux.setGrafica();
    vecComputador.push_back(objaux);
}

void adicionarUsuario(){        //funcion para adicionar usuarios
    Usuarios objaux;
    objaux.setNombre();
    objaux.setApellido();
    objaux.setEdad();
    vecUsuarios.push_back(objaux);
}

void listarComputadores(){      //funcion para listar computadores
    Computador objAux;
    for(int i = 0; i < vecComputador.size(); i++){
        cout<<"\n\nDatos del Computador #"<<(i+1)<<endl;
        objAux = vecComputador.at(i);
        cout<<" Procesador: "<<objAux.getProcesador()<<endl<<
              " Ram: "<<objAux.getRam()<<endl<<
              " Grafica: "<<objAux.getGrafica();
    }
    cout<<endl<<endl;
    system("pause");
}

void listarUsuarios(){      //funcion para listar usuarios
    Usuarios objAux;
    for(int i = 0; i < vecUsuarios.size(); i++){
        cout<<"\n\nDatos del usuario #"<<(i+1)<<endl;
        cout<<"\n\nDueño del computador #"<<(i+1)<<endl;
        objAux = vecUsuarios.at(i);
        cout<<" Nombre: "<<objAux.getNombre()<<endl<<
              " Apellido: "<<objAux.getApellido()<<endl<<
              " Edad: "<<objAux.getEdad();
    }
    cout<<endl<<endl;
    system("pause");
}

int main(){
    menu();
    return 0;
}
