#include<iostream>
using namespace std;
//funcion para mostrar datos(misma del anterior ejericio)
void mostrar(int lista[],int valor){
    //especifico la lista
    cout<<"numeros en lista \n";
    for (int i=0;i<valor;i++){
        cout<<lista[i]<<endl;
    }}
//funcion para mostrar datos
void suma(int valor,int lista[],int& total){
    total=0;
    cout<<"el total es = ";
    for (int i=0;i<valor;i++){
        total+=lista[i];
    }
}
int main(){
    //MASAPANTA ALEXANDER 
    int valor,total;
    valor=5;
    int lista[5]={1,2,3,4,5};
    mostrar(lista,valor);
    suma(valor,lista,total);
    cout<<total;
    return 0;
    }
