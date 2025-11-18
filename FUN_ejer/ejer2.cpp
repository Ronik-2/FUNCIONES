#include<iostream>
using namespace std;
void mostrar(int* lista,int valor){
    //especifico q estoy usando lista dinamica
    cout<<"NUMEROS ORDENADOS \n";
    for (int i=0;i<valor;i++){
        cout<<lista[i]<<endl;
    }}
int main(){
    //MASAPANTA ALEXANDER 
    int valor;
    cout<<"¿cuantos valores va a ingresar= ";
    cin>>valor;
    int lista[valor];
    for (int i=0;i<valor;i++){
        cout<<": ";
        cin>>lista[i];
    }
    //se usa dos for , porq neceisto q se reste primero 0 y luego 1 , 
    //de lo contrario la lista busca un valor inexsistente , lo q causa error
    for (int j=0;j<valor;j++){
        for (int i=0;i<valor-j-1;i++){
            if (lista[i]>lista[i+1]){
                int temp=lista[i];
                lista[i]=lista[i+1];
                lista[i+1]=temp;
            }
    }}
    mostrar(lista,valor);
    return 0;
    }
