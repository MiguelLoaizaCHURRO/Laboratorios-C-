/*
LABORATORIO #1 EJERCICIO #1
Proposito: 
Autores: 
	- Miguel Angel Loaiza : 2357855-2724
	- Alex Santiago Guerra: 2357739-2724
Fecha ult. modificacion: 26-09-2023
Version: 1.0 
*/

#include <iostream>

using namespace std;

//Definicion de prototipos de funciones
void leer_numeros();

bool validarPar(int);



//Implementacion de funciones


bool validarPar(int numero){
    bool r = false;
    int n_1, n_2, n_3, aux1;
    int cont_val = 0;
    //if (numero >= 100 && numero <= 999){
    
        if (n_1 % 2 == 0){
        	cont_val += 1;
        }
        if (n_2 % 2 == 0){
        	cont_val += 1;
        }
        if (n_3 % 2 == 0){
        	cont_val += 1;	
        }
	//}else{
	//	cout<<"\n\t.:EL NUMERO NO ESTA EN EL RANGO:.";
	//}
    if(cont_val == 2) r = true;
    //else r = false;
    return r;
}

void leer_numeros(){
	int n;
	bool res = false;
	cout<<"\n\tIngrese la cantidad de numeros a evaluar: "; cin>>n; cout<<endl;
		int cont_par_1, cont_impar_1, cont_par_3, cont_impar_3;
			int n_1, n_2, n_3, aux1;
	for(int i = 0; i < n; i++){
		do{
		int numero;
        cout<<"Ingrese un numero de tres digitos: "; cin>>numero; 
        	n_1 = numero / 100;         // Obtiene el primer dígito
        	n_2 = (numero / 10) % 10;   // Obtiene el segundo dígito
        	n_3 = numero % 10;	        // Obtiene el tercer digito

				if(n_1 % 2 == 0){			//puto a
        			cont_par_1 += 1;
        		}
    
        		if(n_1 % 2 != 0){
        			cont_impar_1 += 1;
        		}
        		
        		if(n_3 % 2 == 0){
        			cont_par_3 += 1;
        		}
        		if(n_3 %2 != 0){
        			cont_impar_3 += 1;
        		}
		res = validarPar(numero);
            if(res == false){
                cout<<"Numero incorrecto\n";
            }	
		}while(res == false);

	
        
        //cout<<"\n";cout<<num;cout<<"\n\n";
    }
	//cout<<cont_par;cout<<endl;
	//cout<<cont_impar;cout<<endl;
}

int main(){
	leer_numeros();
	return 0;
}
