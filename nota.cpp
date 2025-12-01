#include <iostream>
using namespace std;

int main(){
    string estudiantes[2] = {"Ana", "Juan"};
    int notas[2][4] = {
        {3, 4, 5, 10},
        {10, 9, 6, 10}
    };

    cout << "Promedios:\n";
    for(int i = 0; i < 2; i++){
        float suma = 0;
        for(int j = 0; j < 4; j++){
            suma += notas[i][j];
        }
        float promedio = suma / 4;

        cout << estudiantes[i] << " -> " << promedio << endl;
    }

    return 0;
}
