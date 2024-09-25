/**
 * @file UsuarioNormal.cpp
 * @brief Implementacion de la clase UsuarioNormal, que representa a un usuario normal y es una clase hija de Usuarios.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357858-2724
 *
 * @date Ultima modificacion: 05-12-2023
 * @version 2.0
 */

#include "UsuarioNormal.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor por defecto de la clase UsuarioNormal.
 * Inicializa los atributos con valores predeterminados.
 */
UsuarioNormal::UsuarioNormal()
{
    nombreUsuario = "NN";
    password = "0000";
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Destructor virtual de la clase UsuarioNormal.
 */
UsuarioNormal::~UsuarioNormal()
{
    //dtor
}

/**
 * @brief Constructor de la clase UsuarioNormal con nombre de usuario y contrasena.
 * @param usu El nombre de usuario.
 * @param pass La contrasena del usuario.
 * Inicializa los atributos con valores dados y establece valores predeterminados.
 */
UsuarioNormal::UsuarioNormal(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase UsuarioNormal con informacion completa.
 * @param usu El nombre de usuario.
 * @param pass La contrasena del usuario.
 * @param estudios El nivel de estudios del usuario.
 * @param direc La direccion del usuario.
 * Inicializa los atributos con valores dados.
 */
UsuarioNormal::UsuarioNormal(string usu, string pass, string estudios, string direc)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = estudios;
    direccion = direc;
}
