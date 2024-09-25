/**
 * @file Pelicula.h
 * @brief Definicion de la clase Pelicula, que representa una pelicula en un cine.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date ultima modificacion: 05-12-2023
 * @version 2.0
 */

#ifndef PELICULA_H
#define PELICULA_H

#include<iostream>

using namespace std;

/**
 * @brief La clase Pelicula representa una pelicula en un cine.
 */
class Pelicula
{
public:
    /**
     * @brief Constructor de la clase Pelicula.
     * @param titulo El titulo de la pelicula.
     * @param director El director de la pelicula.
     * @param genero El genero de la pelicula.
     * @param duracionMinutos La duracion en minutos de la pelicula.
     */
    Pelicula(string titulo = "-", string director = "NN", string genero = "-", int duracionMinutos = 120);

    /**
     * @brief Destructor virtual de la clase Pelicula.
     */
    virtual ~Pelicula();

    /**
     * @brief Muestra la informacion de la pelicula y la sala asignada.
     */
    void mostrarInformacion() const;

    /**
     * @brief Establece el titulo de la pelicula.
     */
    void setTitulo();

    /**
     * @brief Obtiene el titulo de la pelicula.
     * @return El titulo de la pelicula.
     */
    string getTitulo() const;

    /**
     * @brief Establece el director de la pelicula.
     */
    void setDirector();

    /**
     * @brief Obtiene el director de la pelicula.
     * @return El director de la pelicula.
     */
    string getDirector() const;

    /**
     * @brief Establece el genero de la pelicula.
     */
    void setGenero();

    /**
     * @brief Obtiene el genero de la pelicula.
     * @return El genero de la pelicula.
     */
    string getGenero() const;

    /**
     * @brief Establece la duracion en minutos de la pelicula.
     */
    void setDuracionMinutos();

    /**
     * @brief Obtiene la duracion en minutos de la pelicula.
     * @return La duracion en minutos de la pelicula.
     */
    int getDuracionMinutos() const;

    /**
     * @brief Asigna una sala a la pelicula.
     * @param numeroSala El numero de la sala asignada.
     */
    void asignarSala(int numeroSala);

protected:
    /**
     * @brief Variables miembro que representan informacion de la pelicula.
     */
    string titulo, director, genero;

    /**
     * @brief Variable miembro que representa la duracion en minutos de la pelicula.
     */
    int duracionMinutos;

    /**
     * @brief Variable miembro que representa el numero de sala asignada.
     */
    int salaAsignada;

private:
};

#endif // PELICULA_H
