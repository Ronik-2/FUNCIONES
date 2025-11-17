#include<iostream>
using namespace std;
//declaro un limite global
int limite=10;
void mostrar(int lista[]){
//muestra los valores, en funcion de lista[]
    cout<<"numeros en lista \n";
    for (int i=0;i<limite;i++){
        cout<<lista[i]<<endl;}}
void mult(int valor,int lista[]){
//creo una copia para no afectar la lista original 
    int copia[limite];
    for (int i=0;i<limite;i++){
        copia[i]=lista[i]*valor;
    }
//uso la funcion ante declarada para mostrar la copia 
    mostrar(copia);
}
int main(){
    int valor;
    int lista[10]={};
    for (int i=0;i<20;i++){
        lista[i]=i+2;
    }
    mostrar(lista);
    cout<<"Ingrese valor para multiplicar = ";
    cin>>valor;
    cout<<"RESULTADO DE ";
//aqui ya se realiza el proceso y se muestra
    mult(valor,lista);
//imprimo la lista orignal para mostrar que no cambia
    mostrar(lista);
}