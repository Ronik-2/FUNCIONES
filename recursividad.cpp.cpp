#include <iostream>
using namespace std;

int lista[6] = {10, 20, 30, 40, 50, 60};

// Retorna la suma de los elementos desde 0 hasta idx, y además imprime en orden inverso
void abrir(int numero) {
    if (numero==1) {
        cout<<"ABRA LA MUÑECA";
        return;
    }
    cout<<"abriendo muñeca "<<numero<<endl;
    abrir(numero-1);
}
int main() {
    abrir(5);
    return 0;
}
