/**
 * @file Usuarios.h
 * @brief Definicion de la clase Usuarios que representa a los usuarios del sistema.
 *
 * @authors
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357858-2724
 *
 * @date Ultima modificacion: 05-12-2023
 * @version 2.0
 */

#include "Usuarios.h"
#include <iostream>

using namespace std;

/**
 * @brief Constructor por defecto de la clase Usuarios.
 * Inicializa los atributos con valores predeterminados.
 */
Usuarios::Usuarios()
{
    nombreUsuario = "NN";
    password = "0000";
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Usuarios con nombre de usuario y contrasena.
 * @param usu El nombre de usuario.
 * @param pass La contrasena del usuario.
 * Inicializa los atributos con valores dados y establece valores predeterminados.
 */
Usuarios::Usuarios(string usu, string pass)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = "NO REGISTRA";
    direccion = "NO REGISTRA";
}

/**
 * @brief Constructor de la clase Usuarios con informacion completa.
 * @param usu El nombre de usuario.
 * @param pass La contrasena del usuario.
 * @param estudios El nivel de estudios del usuario.
 * @param direc La direccion del usuario.
 * Inicializa los atributos con valores dados.
 */
Usuarios::Usuarios(string usu, string pass, string estudios, string direc)
{
    nombreUsuario = usu;
    password = pass;
    nivelEstudios = estudios;
    direccion = direc;
}

/**
 * @brief Destructor virtual de la clase Usuarios.
 */
Usuarios::~Usuarios()
{
    //dtor
}

/**
 * @brief Establece el nombre de usuario mediante la entrada del usuario.
 */
void Usuarios::setUsuario()
{
    fflush(stdin);
    cout << "\tIngrese nombre de usuario: ";
    cin >> nombreUsuario;
}

/**
 * @brief Obtiene el nombre de usuario.
 * @return El nombre de usuario.
 */
string Usuarios::getUsuario() const
{
    return nombreUsuario;
}

/**
 * @brief Establece la contrasena del usuario mediante la entrada del usuario.
 */
void Usuarios::setPassword()
{
    fflush(stdin);
    cout << "\tIngrese su Contrasena: ";
    cin >> password;
}

/**
 * @brief Obtiene la contrasena del usuario.
 * @return La contrasena del usuario.
 */
string Usuarios::getPassword() const
{
    return password;
}

/**
 * @brief Establece el nivel de estudios del usuario mediante la seleccion del usuario.
 */
void Usuarios::setNivelEstudios()
{
    string tipos[] = {"Bachiller", "Tecnologo", "Profesional",
                      "Especialista", "Maestria", "Doctorado"
                     };
    int opc;

    do
    {
        cout << "Tipos de Nivel Estudios" << endl;
        for (int i = 0; i < 6; i++)
            cout << (i + 1) << ". " << tipos[i] << endl;

        cout << "\tSeleccione su nivel de estudios: ";
        cin >> opc;

        if (opc < 1 || opc > 6)
        {
            cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
        }

    }
    while (opc < 1 || opc > 6);

    nivelEstudios = tipos[opc - 1];
}

/**
 * @brief Obtiene el nivel de estudios del usuario.
 * @return El nivel de estudios del usuario.
 */
string Usuarios::getNivelEstudios() const
{
    return nivelEstudios;
}

/**
 * @brief Establece la direccion del usuario mediante la entrada del usuario.
 */
void Usuarios::setDireccion()
{
    fflush(stdin);
    cout << "\tIngrese su direccion: ";
    cin >> direccion;
}

/**
 * @brief Obtiene la direccion del usuario.
 * @return La direccion del usuario.
 */
string Usuarios::getDireccion() const
{
    return direccion;
}
