#include <iostream>
#include <vector>
#include <string>
using namespace std;
//EJERCICIO 1 ENUNCIADO DEL EJERCICIO
struct Equipo {
    string nombre;
    float edadPromedio;
    int numJugadores;

    void mostrar() {
        cout << "Equipo: " << nombre << endl;
        cout << "Edad promedio: " << edadPromedio << endl;
        cout << "Numero de jugadores: " << numJugadores << endl;
        cout << "--------------------------\n";
    }
};

void agregarEquipo(vector<Equipo> &equipos) {
    Equipo e;
    cout << "Nombre del equipo: ";
    cin.ignore();
    getline(cin, e.nombre);
    cout << "Edad promedio: ";
    cin >> e.edadPromedio;
    cout << "Numero de jugadores: ";
    cin >> e.numJugadores;
    equipos.push_back(e);
}

void mostrarEquipos(vector<Equipo> equipos) {
    for (auto e : equipos)
        e.mostrar();
}

int buscarEquipo(vector<Equipo> equipos, string nombre) {
    for (int i = 0; i < equipos.size(); i++)
        if (equipos[i].nombre == nombre)
            return i;
    return -1;
}

void actualizarEquipo(vector<Equipo> &equipos) {
    string nombre;
    cout << "Nombre del equipo a actualizar: ";
    cin.ignore();
    getline(cin, nombre);

    int pos = buscarEquipo(equipos, nombre);
    if (pos != -1) {
        cout << "Nueva edad promedio: ";
        cin >> equipos[pos].edadPromedio;
        cout << "Nuevo numero de jugadores: ";
        cin >> equipos[pos].numJugadores;
    } else
        cout << "Equipo no encontrado\n";
}

void eliminarEquipo(vector<Equipo> &equipos) {
    string nombre;
    cout << "Nombre del equipo a eliminar: ";
    cin.ignore();
    getline(cin, nombre);

    int pos = buscarEquipo(equipos, nombre);
    if (pos != -1)
        equipos.erase(equipos.begin() + pos);
    else
        cout << "Equipo no encontrado\n";
}

void menorEdad(vector<Equipo> equipos) {
    if (equipos.empty()) return;

    Equipo menor = equipos[0];
    for (auto e : equipos)
        if (e.edadPromedio < menor.edadPromedio)
            menor = e;

    cout << "Equipo con menor edad promedio:\n";
    menor.mostrar();
}

int main() {
    vector<Equipo> equipos;
    int opcion;

    do {
        cout << "\nMENU\n";
        cout << "1. Agregar equipo\n2. Mostrar equipos\n3. Actualizar equipo\n";
        cout << "4. Buscar equipo\n5. Eliminar equipo\n6. Menor edad promedio\n7. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarEquipo(equipos); break;
            case 2: mostrarEquipos(equipos); break;
            case 3: actualizarEquipo(equipos); break;
            case 4: {
                string nombre;
                cout << "Nombre del equipo: ";
                cin.ignore();
                getline(cin, nombre);
                int pos = buscarEquipo(equipos, nombre);
                if (pos != -1) equipos[pos].mostrar();
                else cout << "Equipo no encontrado\n";
                break;
            }
            case 5: eliminarEquipo(equipos); break;
            case 6: menorEdad(equipos); break;
        }
    } while (opcion != 7);

    return 0;
}
