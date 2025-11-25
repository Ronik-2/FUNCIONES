#include <iostream>
using namespace std;

int figo(int numero) {
    if (numero==0){
        return 0;
    }
    int suma=numero;
    cout<<numero<<" ";
    return numero+figo(numero-1);
}
int main() {
    int num;
    cin>>num;
    int total=figo(num);
    cout<<endl<<"total = "<<total;
}
