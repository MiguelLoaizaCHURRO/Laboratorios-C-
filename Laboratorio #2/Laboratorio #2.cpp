/*
LABORATORIO #2 
Proposito: 
Autores: 
	- Miguel Angel Loaiza : 2357855-2724
	- Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 18-10-2023
Version: 1.0 
*/

#include <iostream>
#include <vector>
using namespace std;

long identificacion; // L�mite de 100 vendedores
char nombre;
char apellido;
double salario_basico;
double porcentaje_ganancia;
double ventas[100][3][3];
double salario_a_pagar;

int vendedores[100]; // Lista general de vendedores
int nuevoVendedor[100];
int numeroVendedores = 0;

void crearVendedor() {
    if (numeroVendedores < 100) {
        cout<<"Ingrese la identificaci�n del vendedor: ";
        cin>>identificacion;
        
        cout<<"Ingrese el nombre del vendedor: ";
        cin>>nombre;
        
        cout<<"Ingrese el apellido del vendedor: ";
        cin>>apellido;
        
        cout<<"Ingrese el salario b�sico del vendedor: ";
        cin>>salario_basico;
        
        cout<<"Ingrese el porcentaje de ganancia del vendedor: ";
        cin>>porcentaje_ganancia;
       
       	nuevoVendedor.push_back = {identificacion};
       	nuevoVendedor[numeroVendedores].push_back = (nombre);
       	nuevoVendedor[numeroVendedores].push_back = (apellido);
       	nuevoVendedor[numeroVendedores].push_back = (salario_basico);
       	
        vendedores[numeroVendedores] = nuevoVendedor;
        numeroVendedores++;
        
        cout << "Vendedor creado con �xito." << endl;
        cout<<vendedores;
    } else {
        cout << "No se pueden agregar m�s vendedores. La lista est� llena." << endl;
    }
}

// Funci�n para ingresar ventas
// Funci�n para listar ventas
// Funci�n para calcular estad�sticas
// Otras funciones necesarias

int main() {
    int opcion;
    do {
        cout << "Men� Principal:" << endl;
        cout << "1. Crear vendedor" << endl;
        cout << "2. Ingresar ventas" << endl;
        cout << "3. Listar ventas" << endl;
        cout << "4. Estad�sticas" << endl;
        cout << "5. Acerca de..." << endl;
        cout << "6. Salir" << endl;
        cout << "Elija una opci�n: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearVendedor();
                break;
            // Implementa las dem�s opciones del men�
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opci�n no v�lida. Intente de nuevo." << endl;
                break;
        }
    } while (opcion != 6);

    return 0;
}

