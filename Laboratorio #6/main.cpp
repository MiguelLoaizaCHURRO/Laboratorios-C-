/**
 * @file
 * @brief LABORATORIO #6
 *
 * Proposito:
 * Este programa representa un sistema de gestion para un cine, permitiendo
 * iniciar sesion como administrador, taquillero o cliente, con funcionalidades
 * especificas para cada rol, como registro de usuarios, taquilleros, administradores,
 * reservas, y manejo de informacion de peliculas y salas de cine.
 *
 * Autores:
 * - Miguel Angel Loaiza : 2357855-2724
 * - Samuel Diaz Monedero - 2357726-2724
 * - Alejandro Manzano Rojas - 2357631-2724
 *
 * Fecha ult. modificacion: 05-12-2023
 * Version: 2.2
 */


#include <iostream>
#include <vector>
#include <cstdlib>

#include "Usuarios.h"       // Archivos de encabezado que contienen las clases necesarias
#include "UsuarioAdmin.h"
#include "UsuarioNormal.h"
#include "Taquillero.h"
#include "Pelicula.h"

using namespace std;

/**
 * @brief Muestra informacion sobre los autores del programa.
 */
void info()
{
    system("cls");
    cout<<"\n\n\t\t\t**********************************************\n";
    cout<<"\t\t\t**     Miguel Angel Loaiza - 2357855        **\n";
    cout<<"\t\t\t**     Samuel Diaz Monedero - 2357726       **\n";
    cout<<"\t\t\t**     Alejandro Manzano Rojas - 2357858    **\n";
    cout<<"\t\t\t**********************************************\n\n";
    system("pause");
    system("cls");
}

/**
 * @brief Inicializa usuarios base para pruebas.
 */
void UsuariosBase();

/**
 * @brief Muestra el menu principal y maneja la interaccion con el usuario.
 */
void menu();

/**
 * @brief Realiza el inicio de sesion para un administrador.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarAdmin();

/**
 * @brief Realiza el inicio de sesion para un taquillero.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarTaquillero();

/**
 * @brief Realiza el inicio de sesion para un usuario normal.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarUsuario();

/**
 * @brief Muestra el menu de administrador y maneja la interaccion con el usuario.
 */
void menuAdministrador();

/**
 * @brief Menu de administrador con funcionalidades adicionales.
 */
void menuAdminSobrecarga();

/**
 * @brief Realiza el registro de un nuevo administrador.
 */
void RegistroAdmin1();

/**
 * @brief Realiza el registro de un nuevo administrador con informacion adicional.
 */
void RegistroAdmin2();

/**
 * @brief Menu de taquillero con funcionalidades adicionales.
 */
void menuTaquilleroSobrecarga();

/**
 * @brief Realiza el registro de un nuevo taquillero.
 */
void RegistroTaquillero1();

/**
 * @brief Realiza el registro de un nuevo taquillero con informacion adicional.
 */
void RegistroTaquillero2();

/**
 * @brief Menu de usuarios con funcionalidades adicionales.
 */
void menuUsuariosSobrecarga();

/**
 * @brief Realiza el registro de un nuevo usuario normal.
 */
void RegistroUsuario1();

/**
 * @brief Realiza el registro de un nuevo usuario normal con informacion adicional.
 */
void RegistroUsuario2();

/**
 * @brief Muestra la informacion de los administradores registrados.
 */
void MostrarAdmins();

/**
 * @brief Muestra la informacion de los taquilleros registrados.
 */
void MostrarTaquilleros();

/**
 * @brief Muestra la informacion de los usuarios normales registrados.
 */
void MostrarUsuarios();

/**
 * @brief Menu especifico para un taquillero.
 */
void menuTaquillero();

/**
 * @brief Menu especifico para un cliente.
 */
void menuCliente();

/**
 * @brief Menu para gestionar la informacion de las peliculas.
 */
void menuPeliculas();

/**
 * @brief Funcionalidad para manejar la informacion de la primera pelicula.
 */
void pelicula1();

/**
 * @brief Funcionalidad para manejar la informacion de la segunda pelicula.
 */
void pelicula2();

/**
 * @brief Funcionalidad para manejar la informacion de la tercera pelicula.
 */
void pelicula3();

/**
 * @brief Vector que almacena instancias de administradores.
 */
vector<UsuarioAdmin> vecUsuarioAdmin;

/**
 * @brief Vector que almacena instancias de usuarios normales.
 */
vector<UsuarioNormal> vecUsuarioNormal;

/**
 * @brief Vector que almacena instancias de taquilleros.
 */
vector<Taquillero> vecTaquillero;

/**
 * @brief Funcion que inicializa usuarios base para pruebas.
 */
void UsuariosBase()
{
    string usuario, password;

    // Creacion de usuario administrador
    usuario = "miguel";
    password = "1420";
    UsuarioAdmin objPrincipal(usuario, password);
    vecUsuarioAdmin.push_back(objPrincipal);

    // Creacion de taquillero
    string usuario1, password1;
    usuario1 = "alex";
    password1 = "1234";
    Taquillero objPrincipal1(usuario1, password1);
    vecTaquillero.push_back(objPrincipal1);

    // Creacion de usuario normal
    string usuario2, password2;
    usuario2 = "luis";
    password2 = "5678";
    UsuarioNormal objPrincipal2(usuario2, password2);
    vecUsuarioNormal.push_back(objPrincipal2);
}

/**
 * @brief Funcion principal que maneja el menu principal.
 */
void menu()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Iniciar sesion de administracion\n";
        cout<<"\t2. Iniciar sesion de taquillero\n";
        cout<<"\t3. Iniciar sesion de usuario\n";
        cout<<"\t0. Salir\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            IniciarAdmin();
            break;
        case 2:
            IniciarTaquillero();
            break;
        case 3:
            IniciarUsuario();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    } while (opc != 0);
}

/**
 * @brief Funcion que realiza el inicio de sesion para un administrador.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarAdmin()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de administrador: ";
    cin>>username;
    cout<<"\tIngrese la contrasena de administrador: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algun administrador en el vector
    for (const UsuarioAdmin admin: vecUsuarioAdmin)
    {
        if (admin.getUsuario() == username && admin.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de administrador exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuAdministrador();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de administrador fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contrasena incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Funcion que realiza el inicio de sesion para un taquillero.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarTaquillero()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de taquillero: ";
    cin>>username;
    cout<<"\tIngrese la contrasena de taquillero: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algun taquillero en el vector
    for (const Taquillero taqui: vecTaquillero)
    {
        if (taqui.getUsuario() == username && taqui.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de taquillero exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuTaquillero();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de taquillero fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contrasena incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Funcion que realiza el inicio de sesion para un usuario normal.
 * @return true si el inicio de sesion es exitoso, false de lo contrario.
 */
bool IniciarUsuario()
{
    system("cls");
    cout<<endl<<endl;
    string username, password;
    cout<<"\tIngrese el nombre de usuario de cliente: ";
    cin>>username;
    cout<<"\tIngrese la contrasena de cliente: ";
    cin>>password;

    // Verifica si las credenciales coinciden con algun usuario normal en el vector
    for (const UsuarioNormal usuario: vecUsuarioNormal)
    {
        if (usuario.getUsuario() == username && usuario.getPassword() == password)
        {
            cout<<endl<<endl;
            cout<<"\t\t.:Inicio de sesion de cliente exitoso:." << endl;
            cout<<endl<<endl;
            system("pause");
            system("cls");
            menuCliente();
            return true;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t.:Inicio de sesion de cliente fallido. "<<endl;
    cout<<"\t\t.:Nombre de usuario o contrasena incorrectos:."<<endl<<endl;
    system("pause");
    system("cls");
    return false;
}

/**
 * @brief Maneja el menu principal para un administrador.
 * @details Permite realizar diversas operaciones como registro de usuarios, taquilleros,
 * administradores, peliculas, y mostrar informacion de usuarios. Ademas, proporciona la opcion
 * de cerrar sesion.
 */
void menuAdministrador()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de administrador....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de admin sobrecarga\n";
        cout<<"\t2. Registro de taquillero sobrecarga\n";
        cout<<"\t3. Registro de usuario sobrecarga\n";
        cout<<"\t4. Registro de peliculas (salas 1, 2 y 3)\n";
        cout<<"\t5. Mostrar administradores \n";
        cout<<"\t6. Mostrar taquilleros \n";
        cout<<"\t7. Mostrar usuarios\n";
        cout<<"\t8. Info programadores\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            menuAdminSobrecarga();
            break;
        case 2:
            menuTaquilleroSobrecarga();
            break;
        case 3:
            menuUsuariosSobrecarga();
            break;
        case 4:
            menuPeliculas();
            break;
        case 5:
            MostrarAdmins();
            break;
        case 6:
            MostrarTaquilleros();
            break;
        case 7:
            MostrarUsuarios();
            break;
        case 8:
            info();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menu();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Menu para el registro de administradores con diferentes opciones.
 */
void menuAdminSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro admin sobrecarga 1 y 2....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de admin sobrecarga 1 (registro basico)\n";
        cout<<"\t2. Registro de admin sobrecarga 2 (registro completo)\n";
        cout<<"\t0. VOlver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            RegistroAdmin1();
            break;
        case 2:
            RegistroAdmin2();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menuAdministrador();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un administrador con informacion basica.
 * @details Solicita y guarda informacion como usuario, contrasena, tarjeta profesional,
 * estado civil y tipo de contrato. Luego, crea un nuevo objeto UsuarioAdmin y lo agrega al vector.
 */
void RegistroAdmin1()
{
    string usu, pass, tarjeta, estado, cont;
    system("cls");

    cout<<"Informacion del admin basica:"<<endl<<endl;
    UsuarioAdmin objAdmin1;
    objAdmin1.setUsuario();
    objAdmin1.setPassword();
    objAdmin1.setTarjetaProfesional();
    objAdmin1.setEstadoCivil();
    objAdmin1.setContrato();
    usu = objAdmin1.getUsuario();
    pass = objAdmin1.getPassword();
    tarjeta = objAdmin1.getTarjetaProfesional();
    estado = objAdmin1.getEstadoCivil();
    cont = objAdmin1.getContrato();

    UsuarioAdmin usuario1(usu, pass, tarjeta, estado, cont);
    vecUsuarioAdmin.push_back(objAdmin1);
    system("cls");
}

/**
 * @brief Realiza el registro de un administrador con informacion completa.
 * @details Solicita y guarda informacion como usuario, contrasena, nivel de estudios,
 * direccion, tarjeta profesional, estado civil y tipo de contrato. Luego, crea un nuevo
 * objeto UsuarioAdmin y lo agrega al vector.
 */
/**
 * @brief Realiza el registro de un administrador con informacion completa.
 * @details Solicita y guarda informacion como usuario, contrasena, nivel de estudios,
 * direccion, tarjeta profesional, estado civil, y tipo de contrato. Luego, crea un nuevo
 * objeto UsuarioAdmin y lo agrega al vector.
 */
void RegistroAdmin2()
{
    string usu, pass, estudios, direc, tarjeta, estado, cont;
    system("cls");

    cout<<"Informacion del admin completa:"<<endl<<endl;
    UsuarioAdmin objAdmin2;
    objAdmin2.setUsuario();
    objAdmin2.setPassword();
    objAdmin2.getNivelEstudios();
    objAdmin2.setDireccion();
    objAdmin2.setTarjetaProfesional();
    objAdmin2.setEstadoCivil();
    objAdmin2.setContrato();
    usu = objAdmin2.getUsuario();
    pass = objAdmin2.getPassword();
    estudios = objAdmin2.getNivelEstudios();
    direc = objAdmin2.getDireccion();
    tarjeta = objAdmin2.getTarjetaProfesional();
    estado = objAdmin2.getEstadoCivil();
    cont = objAdmin2.getContrato();

    UsuarioAdmin usuario2(usu, pass, estudios, direc, tarjeta, estado, cont);
    vecUsuarioAdmin.push_back(objAdmin2);
    system("cls");
}

/**
 * @brief Menu para el registro de taquilleros con diferentes opciones.
 */
void menuTaquilleroSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro admin sobrecarga 1 y 2....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de taquillero sobrecarga 1 (registro basico)\n";
        cout<<"\t2. Registro de taquillero sobrecarga 2 (registro completo)\n";
        cout<<"\t0. VOlver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            RegistroTaquillero1();
            break;
        case 2:
            RegistroTaquillero2();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menuAdministrador();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un taquillero con informacion basica.
 * @details Solicita y guarda informacion como usuario, contrasena, tarjeta profesional,
 * estado civil y tipo de contrato. Luego, crea un nuevo objeto Taquillero y lo agrega al vector.
 */
void RegistroTaquillero1()
{
    string usu, pass, tarjeta, estado, cont;
    system("cls");

    cout<<"Informacion del taquillero basica:"<<endl<<endl;
    Taquillero objTaqui1;
    objTaqui1.setUsuario();
    objTaqui1.setPassword();
    objTaqui1.setTarjetaProfesional();
    objTaqui1.setEstadoCivil();
    objTaqui1.setContrato();
    usu = objTaqui1.getUsuario();
    pass = objTaqui1.getPassword();
    tarjeta = objTaqui1.getTarjetaProfesional();
    estado = objTaqui1.getEstadoCivil();
    cont = objTaqui1.getContrato();
    Taquillero usuario1(usu, pass, tarjeta, estado, cont);
    vecTaquillero.push_back(objTaqui1);
    system("cls");
}

/**
 * @brief Realiza el registro de un taquillero con informacion completa.
 * @details Solicita y guarda informacion como usuario, contrasena, nivel de estudios,
 * direccion, tarjeta profesional, estado civil, tipo de contrato y numero de identificacion.
 * Luego, crea un nuevo objeto Taquillero y lo agrega al vector.
 */
void RegistroTaquillero2()
{
    string usu, pass, estudios, direc, tarjeta, estado, cont, ID;
    system("cls");

    cout<<"Informacion del taquillero completa:"<<endl<<endl;
    Taquillero objTaqui2;
    objTaqui2.setUsuario();
    objTaqui2.setPassword();
    objTaqui2.getNivelEstudios();
    objTaqui2.setDireccion();
    objTaqui2.setTarjetaProfesional();
    objTaqui2.setEstadoCivil();
    objTaqui2.setContrato();
    objTaqui2.setNumID();
    usu = objTaqui2.getUsuario();
    pass = objTaqui2.getPassword();
    estudios = objTaqui2.getNivelEstudios();
    direc = objTaqui2.getDireccion();
    tarjeta = objTaqui2.getTarjetaProfesional();
    estado = objTaqui2.getEstadoCivil();
    cont = objTaqui2.getContrato();
    ID = objTaqui2.getNumID();

    Taquillero usuario2(usu, pass, estudios, direc, tarjeta, estado, cont, ID);
    vecTaquillero.push_back(objTaqui2);
    system("cls");
}

/**
 * @brief Menu para el registro de usuarios con diferentes opciones.
 */
void menuUsuariosSobrecarga()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro admin sobrecarga 1 y 2....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de usuarios sobrecarga 1 (registro basico)\n";
        cout<<"\t2. Registro de usuarios sobrecarga 2 (registro completo)\n";
        cout<<"\t0. VOlver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            RegistroUsuario1();
            break;
        case 2:
            RegistroUsuario2();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menuAdministrador();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Realiza el registro de un usuario con informacion basica.
 * @details Solicita y guarda informacion como usuario y contrasena. Luego,
 * crea un nuevo objeto UsuarioNormal y lo agrega al vector.
 */
void RegistroUsuario1()
{
    string usu, pass;
    system("cls");

    cout<<"Informacion del usuario basica:"<<endl<<endl;
    UsuarioNormal objUsuario;
    objUsuario.setUsuario();
    objUsuario.setPassword();
    usu = objUsuario.getUsuario();
    pass = objUsuario.getPassword();

    UsuarioNormal usuario1(usu, pass);
    vecUsuarioNormal.push_back(objUsuario);
    system("cls");
}

/**
 * @brief Realiza el registro de un usuario con informacion completa.
 * @details Solicita y guarda informacion como usuario, contrasena, nivel de estudios,
 * y direccion. Luego, crea un nuevo objeto UsuarioNormal y lo agrega al vector.
 */
void RegistroUsuario2()
{
    string usu, pass, estudios, direc;
    system("cls");

    cout<<"Informacion del usuario basica:"<<endl<<endl;
    UsuarioNormal objUsuario;
    objUsuario.setUsuario();
    objUsuario.setPassword();
    objUsuario.setNivelEstudios();
    objUsuario.setDireccion();
    usu = objUsuario.getUsuario();
    pass = objUsuario.getPassword();
    estudios = objUsuario.getNivelEstudios();
    direc = objUsuario.getDireccion();

    UsuarioNormal usuario2(usu, pass, estudios, direc);
    vecUsuarioNormal.push_back(objUsuario);
    system("cls");
}

/**
 * @brief Menu principal para el Taquillero con diferentes opciones.
 */
void menuTaquillero()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de Taquillero....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Reservar asiento\n";
        cout<<"\t2. Editar funciones\n";
        cout<<"\t3. Mostrar Sala 1\n";
        cout<<"\t4. Mostrar Sala 2\n";
        cout<<"\t5. Mostrar Sala 3\n";
        cout<<"\t6. Mostrar Sala 4\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 6:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menu();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Menu para el Cliente con opciones especificas.
 */
void menuCliente()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Bienvenido al Sistema de cliente....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Reservar asiento\n";
        cout<<"\t2. Mostrar reservas\n";
        cout<<"\t0. Cerrar sesion\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout<<"\n\t\tOpcion en desarrollo\n\n";
            system("pause");
            system("cls");
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menu();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Muestra la informacion de todos los administradores registrados.
 */
void MostrarAdmins()
{
    system("cls");
    cout<<endl<<endl;
    UsuarioAdmin objAux;
    for(int i = 0; i < vecUsuarioAdmin.size(); i++)
    {
        cout<<"Datos de admin #"<<(i+1)<<endl;
        objAux = vecUsuarioAdmin.at(i);
        cout<<"Nombre: "<<objAux.getUsuario()<<endl<<
            "Contrasena: "<<objAux.getPassword()<<endl<<
            "Nivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "Direccion: "<<objAux.getDireccion()<<endl<<
            "Tarjeta Profesional: "<<objAux.getTarjetaProfesional()<<endl<<
            "Estado civil: "<<objAux.getEstadoCivil()<<endl<<
            "Contrato: "<<objAux.getContrato()<<endl<<endl;
    }
    cout<<endl<<endl;
    system("pause");
    system("cls");
}

/**
 * @brief Muestra la informacion de todos los taquilleros registrados.
 */
void MostrarTaquilleros()
{
    system("cls");
    cout<<endl<<endl;
    Taquillero objAux;
    for(int i = 0; i < vecTaquillero.size(); i++)
    {
        cout<<"Datos del taquillero #"<<(i+1)<<endl;
        objAux = vecTaquillero.at(i);
        cout<<"Nombre: "<<objAux.getUsuario()<<endl<<
            "Contrasena: "<<objAux.getPassword()<<endl<<
            "Nivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "Direccion: "<<objAux.getDireccion()<<endl<<
            "Tarjeta Profesional: "<<objAux.getTarjetaProfesional()<<endl<<
            "Estado civil: "<<objAux.getEstadoCivil()<<endl<<
            "Contrato: "<<objAux.getContrato()<<endl<<
            "Numero ID: "<<objAux.getNumID()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

/**
 * @brief Muestra la informacion de todos los usuarios normales registrados.
 */
void MostrarUsuarios()
{
    system("cls");
    cout<<endl<<endl;
    UsuarioNormal objAux;
    for(int i = 0; i < vecUsuarioNormal.size(); i++)
    {
        cout<<"Datos del taquillero #"<<(i+1)<<endl;
        objAux = vecUsuarioNormal.at(i);
        cout<<"Nombre: "<<objAux.getUsuario()<<endl<<
            "Contrasena: "<<objAux.getPassword()<<endl<<
            "Nivel de estudios: "<<objAux.getNivelEstudios()<<endl<<
            "Direccion: "<<objAux.getDireccion()<<endl<<endl;
    }
    system("pause");
    system("cls");
}

/**
 * @brief Menu de registro de peliculas con opciones para cada sala.
 */
void menuPeliculas()
{
    int opc = 0;
    do
    {
        system("cls");
        cout<<"\n\n\t\t....Registro de peliculas....\n\n";
        cout<<"\n\t\t\t.:MENU:.\n\n\n";
        cout<<"\t1. Registro de pelicula de sala 1\n";
        cout<<"\t2. Registro de pelicula de sala 2\n";
        cout<<"\t3. Registro de pelicula de sala 3\n";
        cout<<"\t0. VOlver\n\n";

        cout<<"\tIngrese una opcion: ";
        cin>>opc;
        switch(opc)
        {
        case 1:
            pelicula1();
            break;
        case 2:
            pelicula2();
            break;
        case 3:
            pelicula3();
            break;
        case 0:
            cout<<"\n\t\tGracias por usar mi app!!!\n\n";
            menuAdministrador();
            break;
        default:
            cout<<"\n\t\t.:OPCION INCORRECTA:.\n\n";
            break;
            system("pause");
            system("cls");
        }

    }
    while (opc != 0);
}

/**
 * @brief Registra una pelicula para la Sala 1.
 */
void pelicula1()
{
    Pelicula pelicula1;

    system("cls");
    pelicula1.setTitulo();
    pelicula1.setDirector();
    pelicula1.setGenero();
    pelicula1.setDuracionMinutos();
    pelicula1.asignarSala(1);
    system("cls");
    pelicula1.mostrarInformacion();
    system("pause");
    system("cls");
}

/**
 * @brief Registra una pelicula para la Sala 2.
 */
void pelicula2()
{
    Pelicula pelicula2;

    system("cls");
    pelicula2.setTitulo();
    pelicula2.setDirector();
    pelicula2.setGenero();
    pelicula2.setDuracionMinutos();
    pelicula2.asignarSala(2);
    system("cls");
    pelicula2.mostrarInformacion();
    system("pause");
    system("cls");
}

/**
 * @brief Registra una pelicula para la Sala 3.
 */
void pelicula3()
{
    Pelicula pelicula3;

    system("cls");
    pelicula3.setTitulo();
    pelicula3.setDirector();
    pelicula3.setGenero();
    pelicula3.setDuracionMinutos();
    pelicula3.asignarSala(3);
    system("cls");
    pelicula3.mostrarInformacion();
    system("pause");
    system("cls");
}

/**
 * @brief Funcion principal que inicializa la aplicacion.
 * @return Valor de salida del programa.
 */
int main()
{
    system("Color f5");
    UsuariosBase();
    menu();
    return 0;
}
