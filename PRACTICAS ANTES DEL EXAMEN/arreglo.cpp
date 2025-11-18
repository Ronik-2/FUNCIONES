#include<iostream>
using namespace std;
int n=5;
int menu(){
    int opcion;
    cout<<"Menu de opciones:\n";
    cout<<"1. Ingresar elementos al arreglo\n";
    cout<<"2. Sumar elementos del arreglo\n";
    cout<<"3. Cambiar un elemento \n";
    cout<<"4. Salir\n";
    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    return opcion;
}
bool lleno=false;
void ingresar(int lista[5]){
    cout<<"Ingrese 5 elementos:"<<endl;
    for (int i=0;i<n;i++){
        cin>>lista[i];
    }
    cout<<"Elementos ingresados correctamente."<<endl;
    lleno=true;
}
void sumar(int lista[5]){
    int suma=0;
    for (int i=0;i<n;i++){
        suma+=lista[i];}
    cout<<"La suma de los elementos es: "<<suma<<endl;}
 void change(int lista[5]){
    int pos;
    cout<<"Ingrese un valor entre 0 y 4 para cambiar el elemento en esa posicion: ";
    while (true){
        cin>>pos;
        if (pos>=0 && pos<5){
            break;  }
        cout<<"Valor invalido. Ingrese un valor entre 0 y 4: ";
    }
    cout<<"Ingrese el nuevo valor: ";
    cin>>lista[pos];
 }
 void mostrar(int lista[5]){
    cout<<"Elementos del arreglo:"<<endl;
    for (int i=0;i<n;i++){
        cout<<lista[i]<<endl;
    }}
int main(){
    int lista[5]={};
    while (true){
        int opcion=menu();
        switch (opcion){
            case 1:{
                ingresar(lista);
                break;
            }
            case 2:{
                if (!lleno){
                    cout<<"El arreglo aun no ha sido inicializado"<<endl;
                    break;
                }
                sumar(lista);
                break;
            }
            case 3:{
                if (!lleno){
                    cout<<"El arreglo aun no ha sido inicializado"<<endl;
                    break;
                }
                change(lista);
                break;      
            }
            case 4:{
                cout<<"Saliendo del programa."<<endl;
                return 0;
            }
            default:{
                cout<<"Opcion invalida. Intente de nuevo."<<endl;
                break;
        }
    }}}