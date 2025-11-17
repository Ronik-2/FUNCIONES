#include<iostream>
#include<cstdio>
using namespace std;
//funcion para mostrar datos
void mostrar(int* lista,int valor){
    //especifico q estoy usando lista dinamica
    cout<<"NOTAS REFISTRADAS \n";
    for (int i=0;i<valor;i++){
        cout<<lista[i]<<endl;
    }}
int* list(int& valor){
    //hice una funcion para mejorar los tiempos de los siguientes ejericiso
    //uso listas dinamicas para permitir al usuario ingresar el valor.
    cout<<"cuantos numeros va a ingresar? = ";
    cin>>valor;
    int* lista=new int[valor];
    printf("ingrese las %d calificaciones \n",valor);
    for (int i=0;i<valor;i++){
        cin>>lista[i];
    }
    return lista;
}
int main(){
    //MASAPANTA ALEXANDER 
    int valor;
    int* lista=list(valor);
    mostrar(lista,valor);
    delete[] lista;
    return 0;
    }
