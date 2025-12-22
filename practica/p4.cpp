#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
//ejericico 4 . SISTEMA DE PAGO DEL METRO
struct pago {
    string name;
    string tipo;
    float price;
};
float tipoTarjeta(pago &p) {
    cout << "_______TIPO DE TARJETA_______\n";
    cout << "A. Normal\nB. Tercera Edad\nC. Discapacitado\n";
    char r;
    cin >> r;
    r = tolower(r);

    if (r == 'a') {
        p.tipo = "NORMAL";
        return 1.0;
    } 
    else if (r == 'b') {
        p.tipo = "TERCERA EDAD";
        return 0.5;
    } 
    else if (r == 'c') {
        p.tipo = "DISCAPACITADO";
        return 0.5;
    } 
    else {
        cout << "Opcion invalida, se asigna NORMAL\n";
        p.tipo = "NORMAL";
        return 1.0;
    }
}
void registrar(vector<pago> &crede) {
    pago p;
    cout << "Ingrese nombre del usuario: ";
    cin >> p.name;

    cout << "Ingrese monto en USD: ";
    cin >> p.price;

    float descuento = tipoTarjeta(p);
    p.price = p.price * descuento;

    crede.push_back(p);
}
float EUSD(float montoUSD) {
    return montoUSD * 0.93;
}
void mostrar(vector<pago> crede) {
    for (int i = 0; i < crede.size(); i++) {
        cout << "\nUsuario: " << crede[i].name << endl;
        cout << "Tipo tarjeta: " << crede[i].tipo << endl;
        cout << "Monto USD (con descuento): " << crede[i].price << endl;
        cout << "Monto EUR: " << EUSD(crede[i].price) << endl;
    }
}
int main() {
    vector<pago> crede;
    int op;
    do {
        cout << "\nMENU METRO\n";
        cout << "1. Registrar pago\n";
        cout << "2. Mostrar pagos\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> op;

        switch (op) {
            case 1: registrar(crede); break;
            case 2: mostrar(crede); break;
        }
    } while (op != 3);
    return 0;
}
