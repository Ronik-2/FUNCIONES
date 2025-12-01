#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct YouTuber {
    string nombre;
    string categoria;
    int suscriptores;
    float ganancias;  
};

int main() {
    srand(time(NULL));

    const int FILAS = 2;
    const int COLS = 2;
    YouTuber yt[FILAS][COLS] = {
        {
            {"Auron", "Gaming", 48, 0},
            {"MariaDIY", "Manualidades", 10, 0}
        },
        {
            {"TechPro", "Tecnologia", 5, 0},
            {"CocinaFacil", "Cocina", 12, 0}
        }
    };

    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLS; j++){
            float pago = rand() % 5001 + 3000; 
            yt[i][j].ganancias = yt[i][j].suscriptores * pago;
        }
    }
    string buscar;
    cout << "Buscar categoria: ";
    cin >> buscar;

    int totalSubs = 0;
    float totalGanancias = 0;

    cout << "\nCoincidencias:\n";
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLS; j++){
            if(yt[i][j].categoria == buscar){
                cout << yt[i][j].nombre << " encontrado en [" << i << "][" << j << "]\n";
            }
            totalSubs += yt[i][j].suscriptores;
            totalGanancias += yt[i][j].ganancias;
        }
    }

    cout << "\nTotal de suscriptores: " << totalSubs << " millones\n";
    cout << "Total de ganancias: $" << totalGanancias << "\n";

    return 0;
}
