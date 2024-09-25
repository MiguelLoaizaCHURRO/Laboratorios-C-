#include <iostream>
#include <array>
#include <string>

using namespace std;

// Definición de las constantes para los tamaños de las matrices y arreglos
const int MAX_VENDEDORES = 100;
const int NUM_MESES = 3;
const int NUM_ARTICULOS = 3;

// Declaración de arreglos y variables globales
long identificacion[MAX_VENDEDORES];
string nombre[MAX_VENDEDORES];
string apellido[MAX_VENDEDORES];
double salario_basico[MAX_VENDEDORES];
double porcentaje_ganancia[MAX_VENDEDORES];
double ventas[MAX_VENDEDORES][NUM_ARTICULOS][NUM_MESES];
double salario_a_pagar[MAX_VENDEDORES][NUM_MESES];
int numeroVendedores = 0;

// Función para crear un nuevo vendedor
void crearVendedor() {
    if (numeroVendedores < MAX_VENDEDORES) {
        cout << "Ingrese la identificación del vendedor: ";
        cin >> identificacion[numeroVendedores];
        cout << "Ingrese el nombre del vendedor: ";
        cin >> nombre[numeroVendedores];
        cout << "Ingrese el apellido del vendedor: ";
        cin >> apellido[numeroVendedores];
        cout << "Ingrese el salario básico del vendedor: ";
        cin >> salario_basico[numeroVendedores];
        cout << "Ingrese el porcentaje de ganancia del vendedor: ";
        cin >> porcentaje_ganancia[numeroVendedores];

        for (int i = 0; i < NUM_ARTICULOS; i++) {
            for (int j = 0; j < NUM_MESES; j++) {
                cout << "Ingrese las ventas de artículo " << i + 1 << " para el mes " << j + 1 << ": ";
                cin >> ventas[numeroVendedores][i][j];
            }
        }

        // Calcular el salario a pagar para cada mes
        for (int i = 0; i < NUM_MESES; i++) {
            double totalVentas = 0;
            for (int j = 0; j < NUM_ARTICULOS; j++) {
                totalVentas += ventas[numeroVendedores][j][i];
            }
            salario_a_pagar[numeroVendedores][i] = salario_basico[numeroVendedores] + (totalVentas * porcentaje_ganancia[numeroVendedores]);
        }

        cout << "Vendedor creado con éxito." << endl;
        numeroVendedores++;
    } else {
        cout << "No se puede ingresar más vendedores. La lista está llena." << endl;
    }
}

// Función para ingresar ventas para un vendedor
void ingresarVentas(int vendedorIndex) {
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        for (int j = 0; j < NUM_MESES; j++) {
            cout << "Ingrese las ventas de artículo " << i + 1 << " para el mes " << j + 1 << ": ";
            cin >> ventas[vendedorIndex][i][j];
        }
    }

    // Calcular el salario a pagar para cada mes
    for (int i = 0; i < NUM_MESES; i++) {
        double totalVentas = 0;
        for (int j = 0; j < NUM_ARTICULOS; j++) {
            totalVentas += ventas[vendedorIndex][j][i];
        }
        salario_a_pagar[vendedorIndex][i] = salario_basico[vendedorIndex] + (totalVentas * porcentaje_ganancia[vendedorIndex]);
    }
}

// Función para listar las ventas de un vendedor
void listarVentas(int vendedorIndex) {
    cout << "Ventas del vendedor: " << nombre[vendedorIndex] << " " << apellido[vendedorIndex] << endl;
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        for (int j = 0; j < NUM_MESES; j++) {
            cout << "Artículo " << i + 1 << " - Mes " << j + 1 << ": " << ventas[vendedorIndex][i][j] << endl;
        }
    }
    cout << "Salario a pagar en cada mes:" << endl;
    for (int i = 0; i < NUM_MESES; i++) {
        cout << "Mes " << i + 1 << ": " << salario_a_pagar[vendedorIndex][i] << endl;
    }
}

// Función principal del programa
int main() {
    int opcion;
    do {
        cout << "\t\tMenu Principal" << endl;
        cout << "\t1. Crear vendedor" << endl;
        cout << "\t2. Ingresar ventas" << endl;
        cout << "\t3. Listar ventas" << endl;
        cout << "\t4. Estadísticas" << endl;
        cout << "\t5. Acerca de..." << endl;
        cout << "\t6. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearVendedor();
                break;
            case 2:
                if (numeroVendedores > 0) {
                    int vendedorSeleccionado;
                    cout << "Ingrese el número de vendedor (1-" << numeroVendedores << "): ";
                    cin >> vendedorSeleccionado;
                    if (vendedorSeleccionado >= 1 && vendedorSeleccionado <= numeroVendedores) {
                        ingresarVentas(vendedorSeleccionado - 1);
                    } else {
                        cout << "Número de vendedor no válido." << endl;
                    }
                } else {
                    cout << "No hay vendedores creados. Por favor, primero cree un vendedor." << endl;
                }
                break;
            case 3:
                if (numeroVendedores > 0) {
                    int vendedorSeleccionado;
                    cout << "Ingrese el número de vendedor (1-" << numeroVendedores << "): ";
                    cin >> vendedorSeleccionado;
                    if (vendedorSeleccionado >= 1 && vendedorSeleccionado <= numeroVendedores) {
                        listarVentas(vendedorSeleccionado - 1);
                    } else {
                        cout << "Número de vendedor no válido." << endl;
                    }
                } else {
                    cout << "No hay vendedores creados. Por favor, primero cree un vendedor." << endl;
                }
                break;
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;

