// MASAPANTA ALEXANDER
#include <iostream>
using namespace std;

// Recargar saldo uso referencia porq debe cambiar la variable
void recargar(double &saldo, double monto){
    saldo += monto;
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl;
}

//  esta definido como boleano , por esa razon me regresa true o false
bool pagar(double &saldo, double tarifa){
    if (saldo >= tarifa){
        saldo -= tarifa;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
        return true;
    } 
    else {
        cout << "Saldo insuficiente. Recargue para continuar.\n";
        return false;
    }
}

// Mostrar estado final
void mostrarEstado(double saldo, int pasadas){
    cout << "\n--- ESTADO DE LA TARJETA ---\n";
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo actual: $" << saldo << endl;
}

int main(){
//uso una tarifa justa .
    double saldo = 0;
    double tarifa = 0.45;
    int pasadas = 0;
    int opcion;

    do {
        cout << "\n===== TARJETA METRO/BUS QUITO =====\n";
        cout << "1. Recargar saldo\n";
        cout << "2. Pagar pasaje\n";
        cout << "3. Mostrar estado\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
//lo hize tipo menu para que fuera mas ordenado
        if(opcion == 1){
            double monto;
            cout << "Ingrese monto a recargar: ";
            cin >> monto;
            recargar(saldo, monto);
        }
        else if(opcion == 2){
            cout << "Pagando pasaje de $0.45\n";
            if (pagar(saldo, tarifa)) pasadas++;
        }
        else if(opcion == 3){
            mostrarEstado(saldo, pasadas);
        }
        else if(opcion == 4){
            cout << "Saliendo\n";
        }
        else {
            cout << "Opcion no valida. Intente otra vez.\n";
        }

    } while(opcion != 4);

    return 0;
}
