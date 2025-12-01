#include <iostream>
using namespace std;

int main(){
    string productos[3] = {"Arroz", "Leche", "Huevos"};
    int stockInicial[3] = {50, 20, 100};
    int stockVendido[3]  = {10, 25, 30};

    cout << "Inventario final:\n";
    for(int i = 0; i < 3; i++){
        if(stockVendido[i] > stockInicial[i]){
            cout << "ERROR: Venta mayor al stock en " << productos[i] << endl;
        } else {
            int stockFinal = stockInicial[i] - stockVendido[i];
            cout << productos[i] << " -> Stock final: " << stockFinal << endl;
        }
    }

    return 0;
}
