/*
LABORATORIO #1 EJERCICIO #1
Proposito: 
Autores: 
	- Miguel Angel Loaiza : 2357855-2724
	- Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 26-09-2023
Version: 1.1 
*/
#include <iostream>

using namespace std;

// Definicion de prototipos de funciones
bool validarPar(int);
bool esPrimo(int);
void info();

// Implementacion de funciones
void info(){
	cout<<"***********************************\n";
    cout<<"*    Miguel Loaiza - 2357855     **\n";
    cout<<"*    Alex Santiago - 2357739     **\n";
    cout<<"*    Andres Acevedo - 2357707    **\n";    
    cout<<"***********************************\n";
}

bool validarPar(int numero) {
    int cont_val = 0;

    while (numero > 0) {
        int digito = numero % 10;
        if (digito % 2 == 0) {
            cont_val += 1;
        }
        numero /= 10;
    }

    return (cont_val == 2);
}

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

void leer_numeros() {
    int n;
    cout << "\nIngrese la cantidad de numeros a evaluar: ";
    cin >> n;
    cout << endl;

    int cont_par_1 = 0, cont_impar_1 = 0, cont_par_3 = 0, cont_impar_3 = 0;
    int cont_primos = 0;
    int sumatoria = 0;

    for (int i = 0; i < n; i++) {
        bool res = false;
        int numero;

        do {
            cout << "Ingrese un numero completo: ";
            cin >> numero;

            res = validarPar(numero);

            if (!res) {
                cout << "Numero incorrecto (debe tener exactamente 2 digitos pares).\n";
            }
        } while (!res);

        if (esPrimo(numero)) {
            cont_primos++;
        }

#endif

        sumatoria += numero;

        // Cálculo de números pares e impares en las posiciones inicial y final
        int n_1 = numero / 100;
        int n_3 = numero % 10;

        if (n_1 % 2 == 0) {
            cont_par_1 += 1;
        } else {
            cont_impar_1 += 1;
        }


        if (n_3 % 2 == 0) {
            cont_par_3 += 1;
        } else {
            cont_impar_3 += 1;
        }
    }

    double promedio =  sumatoria / (double)n;

    cout << "Cantidad de numeros primos: " << cont_primos << endl;
    cout << "Sumatoria de los numeros completos: " << sumatoria << endl;
    cout << "Promedio general: " << promedio << endl;
    cout << "Cantidad de números pares en el primer dígito: " << cont_par_1 << endl;
    cout << "Cantidad de números impares en el primer dígito: " << cont_impar_1 << endl;
    cout << "Cantidad de números pares en el tercer dígito: " << cont_par_3 << endl;
    cout << "Cantidad de números impares en el tercer dígito: " << cont_impar_3 << endl;
}

int main() {
	info();
    leer_numeros();
    return 0;
}


