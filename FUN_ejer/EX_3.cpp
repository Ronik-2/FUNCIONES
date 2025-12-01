#include <iostream>
#include <vector>
#include <cmath>  
using namespace std;
const double IVA = 0.15;
vector<string> cedulas;
vector<string> nombres;
vector<string> tarifas;
vector<double> saldos;
double redondear2(double x) {
    return round(x * 100) / 100;
}
bool validarRequisitos(int edad, string tipo, bool carnet) {
    if (tipo == "ESTUDIANTE")
        return (edad >= 5 && edad <= 18 && carnet);

    if (tipo == "TERCERA EDAD")
        return (edad >= 65);

    if (tipo == "PREFERENCIAL")
        return carnet;
    return true;
}
double costoTarjeta() {
    double total = 2.00 + (2.00 * IVA);
    return redondear2(total);
}
// Tarifa por viaje según tipo
double obtenerTarifa(string tipo) {
    if (tipo == "ESTUDIANTE") return 0.22;
    if (tipo == "GENERAL") return 0.45;
    if (tipo == "TERCERA EDAD") return 0.22;
    if (tipo == "PREFERENCIAL") return 0.10;
    return 0.45;
}
void asignarTarifa(string &tipo) {
    int op;
    cout << "\nTipos de tarifa:\n";
    cout << "1. Estudiante\n2. General\n3. Tercera Edad\n4. Preferencial\n";
    cout << "Seleccione opción: ";
    cin >> op;

    switch (op) {
        case 1: tipo = "ESTUDIANTE"; break;
        case 2: tipo = "GENERAL"; break;
        case 3: tipo = "TERCERA EDAD"; break;
        case 4: tipo = "PREFERENCIAL"; break;
        default: tipo = "GENERAL"; break;
    }
}
void recargarSaldo(double &saldo) {
    double monto;
    cout << "Monto a recargar: ";
    cin >> monto;

    if (monto < 0.50 || monto > 100) {
        cout << "Monto inválido.\n";
        return;
    }

    saldo = redondear2(saldo + monto);
    cout << "Recarga exitosa. Nuevo saldo: " << saldo << "\n";
}
// Registrar usuario nuevo
void registrarUsuario() {
    string ced, nom, tarifa;
    int edad;
    bool carnet;
    cout << "\n--- REGISTRO DE USUARIO ---\n";
    cout << "Cédula: ";
    cin >> ced;
    cout << "Primer nombre: ";
    cin >> nom;
    cout << "Edad: ";
    cin >> edad;
    asignarTarifa(tarifa);
    cout << "¿Tiene carnet (1 = Sí, 0 = No)? ";
    cin >> carnet;
    if (!validarRequisitos(edad, tarifa, carnet)) {
        cout << "No cumple requisitos para esa tarifa.\n";
        return;
    }
    double costo = costoTarjeta();
    cout << "Costo tarjeta con IVA: $" << costo << "\n";
    cout << "Recarga inicial obligatoria: $3.00\n";
    // Guardar datos en los vectors
    cedulas.push_back(ced);
    nombres.push_back(nom);
    tarifas.push_back(tarifa);
    saldos.push_back(3.00);
    cout << "Usuario registrado con éxito.\n";
}

void pagarPasaje() {
    string ced;
    cout << "\nCédula del usuario: ";
    cin >> ced;

    for (int i = 0; i < cedulas.size(); i++) {
        if (cedulas[i] == ced) {
            double t = obtenerTarifa(tarifas[i]);

            if (saldos[i] >= t) {
                saldos[i] = redondear2(saldos[i] - t);
                cout << "Pasaje pagado. Nuevo saldo: " << saldos[i] << "\n";
            } else {
                cout << "Saldo insuficiente.\n";
            }
            return;     } }
    cout << "Usuario no encontrado.\n";
}
void mostrarUsuarios() {
    cout << "\n--- LISTA DE USUARIOS ---\n";

    for (int i = 0; i < cedulas.size(); i++) {
        cout << cedulas[i] << " | "
             << nombres[i] << " | "
             << tarifas[i] << " | "
             << saldos[i] << "\n";
    }
}
int main() {
    int opcion;

    do {
        cout << "\n==== METRO DE QUITO ====\n";
        cout << "1. Registrar usuario\n";
        cout << "2. Recargar tarjeta\n";
        cout << "3. Pagar pasaje\n";
        cout << "4. Mostrar usuarios\n";
        cout << "5. Salir\n";
        cout << "Seleccione: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarUsuario();
                break;
            case 2: {
                string ced;
                cout << "Cédula: ";
                cin >> ced;
                bool encontrado = false;
                for (int i = 0; i < cedulas.size(); i++) {
                    if (cedulas[i] == ced) {
                        recargarSaldo(saldos[i]);
                        encontrado = true;
                    }
                }
                if (!encontrado) cout << "Usuario no existe.\n";
                break;
            }
            case 3:
                pagarPasaje();
                break;
            case 4:
                mostrarUsuarios();
                break;
            case 5:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida.\n";
        }
    } while (opcion != 5);
    return 0;
}
