#include<iostream>
using namespace std;
#include <random>
#include <chrono>

unsigned seed = chrono::system_clock::now().time_since_epoch().count();
default_random_engine gen(seed);

bool validarPar(int);
void leerNumeros();
long random(long, long);
void generar10();

void generar10(){
    for (int i = 0; i < 1000; i++) {
        cout<<random(10000, 99999) <<endl;
    }
}

long random(long low, long high){
    std::uniform_int_distribution<> dist(low, high);
    return dist(gen);
}

bool validarPar(int numero){
    bool r = false;
    if(numero % 2 == 0) r = true;
    //else r = false;
    return r;
}

void leerNumeros(){
    int n;
    bool res = false;
    for(int i = 0; i < 5; i++){
        do{
            cout<<"Ingrese un numero par: ";
            cin>>n;
            res = validarPar(n);
            if(res == false){
                cout<<"Numero incorrecto\n";
            }
        }while(res == false);
    }
}

int main(){
    //leerNumeros();
    generar10();
    return 0;
}

