/**
 * @file Pelicula.h
 * @brief Definicion de la clase Pelicula, que representa una pelicula en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357858-2724
 *
 * @date ultima modificacion: 05-12-2023
 * @version 2.0
 */

#include "Pelicula.h"

#include <iostream>

using namespace std;

/**
 * @brief Constructor de la clase Pelicula.
 * @param T El titulo de la pelicula.
 * @param D El director de la pelicula.
 * @param g El ggnero de la pelicula.
 * @param DM La duracion en minutos de la pelicula.
 */
Pelicula::Pelicula(string T, string D, string g, int DM)
{
    titulo = T;
    director = D;
    genero = g;
    duracionMinutos = DM;
}

/**
 * @brief Destructor virtual de la clase Pelicula.
 */
Pelicula::~Pelicula()
{
    //dtor
}

/**
 * @brief Establece el titulo de la pelicula.
 */
void Pelicula::setTitulo()
{
    fflush(stdin);
    cout << "Ingrese el titulo de la pelicula: ";
    getline(cin, titulo);
}

/**
 * @brief Establece el director de la pelicula.
 */
void Pelicula::setDirector()
{
    fflush(stdin);
    cout << "Ingrese el director de la pelicula: ";
    getline(cin, director);
}

/**
 * @brief Establece el genero de la pelicula.
 */
void Pelicula::setGenero()
{
    fflush(stdin);
    cout << "Ingrese el genero de la pelicula: ";
    getline(cin, genero);
}

/**
 * @brief Establece la duracion en minutos de la pelicula.
 */
void Pelicula::setDuracionMinutos()
{
    cout << "Ingrese la duracion en minutos de la pelicula: ";
    cin >> duracionMinutos;
}

/**
 * @brief Obtiene el titulo de la pelicula.
 * @return El titulo de la pelicula.
 */
string Pelicula::getTitulo() const
{
    return titulo;
}

/**
 * @brief Obtiene el director de la pelicula.
 * @return El director de la pelicula.
 */
string Pelicula::getDirector() const
{
    return director;
}

/**
 * @brief Obtiene el genero de la pelicula.
 * @return El genero de la pelicula.
 */
string Pelicula::getGenero() const
{
    return genero;
}

/**
 * @brief Obtiene la duracion en minutos de la pelicula.
 * @return La duracion en minutos de la pelicula.
 */
int Pelicula::getDuracionMinutos() const
{
    return duracionMinutos;
}

/**
 * @brief Asigna la pelicula a una sala de cine.
 * @param numeroSala El numero de la sala asignada.
 */
void Pelicula::asignarSala(int numeroSala)
{
    salaAsignada = numeroSala;
}

/**
 * @brief Muestra la informacion de la pelicula y su sala asignada.
 */
void Pelicula::mostrarInformacion() const
{
    int horas = duracionMinutos / 60;
    int minutos = duracionMinutos % 60;

    cout << "\n\n\t\tTítulo: " << titulo << endl;
    cout << "\t\tDirector: " << director << endl;
    cout << "\t\tGénero: " << genero << endl;
    cout << "\t\tDuración: " << horas << " horas y " << minutos << " minutos" << endl;
    cout << "\t\tSala Asignada: Sala " << salaAsignada << endl;
}
