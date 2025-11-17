#include<iostream>
using namespace std;
//la denomino global para poder experimentar con la canitdad de datos 
int n=10;
void mostrar(int lista[]){
//muestra los valores, en funcion de lista[]
    cout<<"Numeros en lista \n";
    for (int i=0;i<n;i++){
        cout<<lista[i]<<endl;}}
void burbuja(int lista[]){
    for (int i=0;i<n;i++){
//le resto uno , ademas de i a n , para que no busque una posicion inexistente
//q seria la 11 , dado que vota error
//esa es la razon por la q ademas ocupo dos for
        for (int j=0;j<n-i-1;j++){
            if (lista[j]>lista[j+1]){
                int after=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=after;
            }
        }
    }
    cout<<"LISTA DE MENOR A MAYOR\n";
    mostrar(lista);
}
int main(){
    int lista[10]={6,4,7,8,9,4,0,3,1,2};
    mostrar(lista);
    burbuja(lista);
    //Alexander Masapanta
    return 0;
}