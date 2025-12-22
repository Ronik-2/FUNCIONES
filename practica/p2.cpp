#include <iostream>
#include <string>
using namespace std;
//: EJERCICIO 2SISTEMA BANCARIO
struct Cliente {
    string nombre;
    string cedula;
};

struct Cuenta {
    string numeroCuenta;
    float saldoUSD;
    Cliente cliente;
};

void ingresarCuenta(Cuenta &c) {
    cout << "Nombre: ";
    getline(cin, c.cliente.nombre);
    cout << "Cedula: ";
    getline(cin, c.cliente.cedula);
    cout << "Numero de cuenta: ";
    getline(cin, c.numeroCuenta);
    cout << "Saldo USD: ";
    cin >> c.saldoUSD;
}

float convertirAEuros(float saldoUSD) {
    return saldoUSD * 0.93;
}

void mostrarCuenta(Cuenta c) {
    cout << "Cliente: " << c.cliente.nombre << endl;
    cout << "Cedula: " << c.cliente.cedula << endl;
    cout << "Cuenta: " << c.numeroCuenta << endl;
    cout << "Saldo USD: " << c.saldoUSD << endl;
    cout << "Saldo EUR: " << convertirAEuros(c.saldoUSD) << endl;
}

int main() {
    Cuenta cuentas[3];

    for (int i = 0; i < 3; i++) {
        cin.ignore();
        ingresarCuenta(cuentas[i]);
    }

    mostrarCuenta(cuentas[0]);
    return 0;
}
