#include <iostream>
using namespace std;

void pedirDimensiones(int &filas, int &columnas) {
    cout << "Ingrese filas: ";
    cin >> filas;
    cout << "Ingrese columnas: ";
    cin >> columnas;
}

void llenarMatriz(int matriz[][50], int filas, int columnas) {
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << "Valor [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][50], int filas, int columnas) {
    cout << "\nMatriz:\n";
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    int matriz[50][50];

    pedirDimensiones(filas, columnas);
    llenarMatriz(matriz, filas, columnas);
    mostrarMatriz(matriz, filas, columnas);

    return 0;
}
