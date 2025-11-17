#include<iostream>
using namespace std;
void mostrar(int lista[]){
//muestra los valores, en funcion de lista[]
    cout<<"numeros en lista \n";
    for (int i=0;i<20;i++){
        cout<<lista[i]<<endl;}}
void parin(int lista[],int& par,int& impar){
//declaro valores , uno q reciba lista , y los demas para guardar
//la cantidad, uso referencia para que modifiquen el valor 
//Alenxader Masapanta
    par=0;
    impar=0;
    for (int i=0;i<20;i++){
        if (lista[i]%2==0){
            par+=1;
        }
        else{
            impar+=1;
        } }}
int main(){
//las defino dentro de main para que guarden valores , una vez pasen por la
//funcion parin.
    int par,impar;
    int valor;
    int lista[20]={};
    //me ahorro escribir datos 
    for (int i=0;i<20;i++){
        lista[i]=i*(i-1);
    }
    mostrar(lista);
//aqui guardan los valores , y luego los muestro 
    parin(lista,par,impar);
    cout<<"los pares encontrados fueron="<<par<<endl;
    cout<<"los pares encontrados fueron="<<impar<<endl;
return 0;
}