#include <iostream>
using namespace std;
void llenar(string lista[5]) {
    cout << "Ingrese 5 nombres de paises" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Pais " << i + 1 << ": ";
        cin >> lista[i];
    }
}
void precio(string lista[5]){
    int prize[5]={100,200,150,300,250};
    for (int i = 0; i < 5; i++) {
        cout << "El precio del pais " << lista[i] << " es: " << prize[i] << " USD" << endl;
    }
}
void name(){
    cout << "Alexander Masapanta" << endl;
}
int main() {
    string paises[5];
    llenar(paises);
    name();
    precio(paises);
    return 0;
}