#include "CuentaCorriente.h"
#include <iostream>
using namespace std;

CuentaCorriente::CuentaCorriente() : nombre(""), apellidos(""), direccion(""), telefono(""), saldo(0.0), numeroIdentificacion(0), clave(12345) {}

CuentaCorriente::CuentaCorriente(string nom, string ape, string dir, string tel, double sal, int numId, int pass)
    : nombre(nom), apellidos(ape), direccion(dir), telefono(tel), saldo(sal), numeroIdentificacion(numId), clave(pass) {}

string CuentaCorriente::getNombre() {
    return nombre;
}

string CuentaCorriente::getApellidos() {
    return apellidos;
}

string CuentaCorriente::getDireccion() {
    return direccion;
}

string CuentaCorriente::getTelefono() {
    return telefono;
}

double CuentaCorriente::getSaldo() {
    return saldo;
}

int CuentaCorriente::getNumeroIdentificacion() {
    return numeroIdentificacion;
}

int CuentaCorriente::getClave() {
    return clave;
}

void CuentaCorriente::setNombre(string nom) {
    nombre = nom;
}

void CuentaCorriente::setApellidos(string ape) {
    apellidos = ape;
}

void CuentaCorriente::setDireccion(string dir) {
    direccion = dir;
}

void CuentaCorriente::setTelefono(string tel) {
    telefono = tel;
}

void CuentaCorriente::setSaldo(double sal) {
    saldo = sal;
}

void CuentaCorriente::setNumeroIdentificacion(int numId) {
    numeroIdentificacion = numId;
}

void CuentaCorriente::setClave(int pass) {
    clave = pass;
}

void CuentaCorriente::cambiarClave(int numeroIdentificacion, int claveAnterior, int nuevaClave) {
    if (numeroIdentificacion == numeroIdentificacion && claveAnterior == clave) {
        clave = nuevaClave;
        cout << "Clave cambiada exitosamente." << endl;
    } else {
        cout << "Número de identificación o clave anterior incorrectos." << endl;
    }
}

void CuentaCorriente::ingresarDinero(int clave, double cantidad) {
    if (clave == this->clave) {
        if (cantidad > 0) {
            saldo += cantidad;
        } else {
            cout << "La cantidad debe ser positiva." << endl;
        }
    } else {
        cout << "Clave incorrecta." << endl;
    }
}

void CuentaCorriente::retirarDinero(int clave, double cantidad) {
    if (clave == this->clave) {
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "La cantidad debe ser positiva y no superar el saldo disponible." << endl;
        }
    } else {
        cout << "Clave incorrecta." << endl;
    }
}

bool CuentaCorriente::saldoNegativo() {
    if (saldo < 0) {
        return true;
    } else {
        return false;
    }
}


void CuentaCorriente::consultarCuenta() {
    cout << "Nombre: " << nombre << "\n";
    cout << "Apellidos: " << apellidos << "\n";
    cout << "Direccion: " << direccion << "\n";
    cout << "Telefono: " << telefono << "\n";
    cout << "Saldo: " << saldo << "\n";
    cout << "Numero Identificacion" << numeroIdentificacion<<"\n";
    cout << "clave: " << clave << "\n";

}


