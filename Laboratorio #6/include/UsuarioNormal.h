/**
 * @file UsuarioNormal.h
 * @brief Archivo de encabezado que define la clase UsuarioNormal, una clase hija de Usuarios.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * @date Ultima modificacion: 05-12-2023
 * @version 2.0
 */

#ifndef USUARIONORMAL_H
#define USUARIONORMAL_H

#include <iostream>

#include "Usuarios.h"

using namespace std;

/**
 * @brief Clase que representa a un Usuario Normal, que es una clase hija de Usuarios.
 */
class UsuarioNormal: public Usuarios
{
public:

    /**
     * @brief Constructor por defecto de la clase UsuarioNormal.
     * Inicializa los atributos con valores predeterminados.
     */
    UsuarioNormal();

    /**
     * @brief Destructor virtual de la clase UsuarioNormal.
     */
    virtual ~UsuarioNormal();

    /**
     * @brief Constructor de la clase UsuarioNormal con nombre de usuario y contrasena.
     * @param usu El nombre de usuario.
     * @param pass La contrasena del usuario.
     * Inicializa los atributos con valores dados y establece valores predeterminados.
     */
    UsuarioNormal(string usu, string pass);

    /**
     * @brief Constructor de la clase UsuarioNormal con informacion completa.
     * @param usu El nombre de usuario.
     * @param pass La contrasena del usuario.
     * @param estudios El nivel de estudios del usuario.
     * @param direc La direccion del usuario.
     * Inicializa los atributos con valores dados.
     */
    UsuarioNormal(string usu, string pass, string estudios, string direc);

protected:

private:
};

#endif // USUARIONORMAL_H
