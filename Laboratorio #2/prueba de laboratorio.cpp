/*
LABORATORIO #2
Proposito:
Autores:
 - Miguel Angel Loaiza : 2357855-2724
 - Alex Santiago Guerra: 2357739-2724
 - Andres Acevedo Ortiz: 2357707-2724
Fecha ult. modificacion: 18-10-2023
Version: 1.2
*/

#include <iostream>
#include <array>
using namespace std;

long identificacion; // Limite de 100 vendedores
string nombre;
string apellido;
double salario_basico;
double porcentaje_ganancia;
double salario_a_pagar;

array<array<string, 5>, 100> vendedores;
array <string, 5> nuevoVendedor;
int numeroVendedores = 0;

void crearVendedor() {
    if (numeroVendedores < 100) {

        cout<<" Ingrese la identificacion del vendedor: ";
        cin>>identificacion; cout<<"\n\n";

        cout<<" Ingrese el nombre del vendedor: ";
        cin>>nombre; cout<<"\n\n";

        cout<<" Ingrese el apellido del vendedor: ";
        cin>>apellido; cout<<"\n\n";

        cout<<" Ingrese el salario b sico del vendedor: ";
        cin>>salario_basico; cout<<"\n\n";

        cout<<" Ingrese el porcentaje de ganancia del vendedor: ";
        cin>>porcentaje_ganancia; cout<<"\n\n";

        nuevoVendedor[0] = to_string(identificacion);
        nuevoVendedor[1] = (nombre);
        nuevoVendedor[2] = (apellido);
        nuevoVendedor[3] = to_string(salario_basico);
        nuevoVendedor[4] = to_string(porcentaje_ganancia);

        vendedores[numeroVendedores] = nuevoVendedor;
        numeroVendedores++;

        cout<<"Vendedor creado con exito.\n\n";
        for (int i = 0; i < numeroVendedores; i++) {  //Ciclo para mostrar los vendedores
            for (int j = 0; j < 5; j++) {
                cout << vendedores[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout<<"\t.:NO SE PUEDE INGRESAR MAS VENDEDORES:." << endl;
        cout<<"\t.:LISTA LLENA:.\n\n";
    }
}

// Funcion para ingresar ventas

double ventas[3][3];
void ingresarVentas(){
    cout<<" Ingrese las ventas de zapatos del mes 1: ";cin>>ventas[0][0];cout<<endl;
    cout<<" Ingrese las ventas de zapatos del mes 2: ";cin>>ventas[0][1];cout<<endl;
    cout<<" Ingrese las ventas de zapatos del mes 3: ";cin>>ventas[0][2];cout<<endl;

    cout<<" Ingrese las ventas de medias del mes 1: ";cin>>ventas[1][0];cout<<endl;
    cout<<" Ingrese las ventas de medias del mes 2: ";cin>>ventas[1][1];cout<<endl;
    cout<<" Ingrese las ventas de medias del mes 3: ";cin>>ventas[1][2];cout<<endl;

    cout<<" Ingrese las ventas de pantaloneta del mes 1: ";cin>>ventas[2][0];cout<<endl;
    cout<<" Ingrese las ventas de pantaloneta del mes 2: ";cin>>ventas[2][1];cout<<endl;
    cout<<" Ingrese las ventas de pantaloneta del mes 3: ";cin>>ventas[2][2];cout<<endl;
}

// Funcion para listar ventas

double listar[3];
void listarVentas(){

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"\t";cout<<ventas[i][j];cout<<" ";
        }
        cout<<endl;
    }

    listar[0] = ventas[0][0] + ventas[1][0] + ventas[2][0]; //total mes 1
    listar[1] = ventas[0][1] + ventas[1][1] + ventas[2][1]; //total mes 2
    listar[2] = ventas[0][2] + ventas[1][2] + ventas[2][2]; //total mes 3



}
// Funcion para calcular estad sticas
// Otras funciones necesarias

void menu(){
    int opcion;
    do {
        cout<<"\t\tMenu Principal\n" << endl;
        cout<<"\t1. Crear vendedor" << endl;
        cout<<"\t2. Ingresar ventas" << endl;
        cout<<"\t3. Listar ventas" << endl;
        cout<<"\t4. Estadasticas" << endl;
        cout<<"\t5. Acerca de..." << endl;
        cout<<"\t6. Salir" << endl;
        cout<<"  Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearVendedor(); break;
            case 2:
                ingresarVentas(); break;
            case 3:
                listarVentas(); break;
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 6);

}



int main() {
    menu();
    return 0;
}

