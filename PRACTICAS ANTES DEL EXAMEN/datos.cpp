//MASAPANTA ALEXANDER
#include<iostream>
using namespace std;

void ingresardatos(double v[],int n){
    //ingresa los precios
    for(int i=0;i<n;i++){
        cout<<"Precio "<<i+1<<": ";
        cin>>v[i];
    }
}

void mayormenor(double v[],int n,double& mayor,double& menor){
    //encuentra mayor y menor
    mayor=v[0];
    menor=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>mayor){
            mayor=v[i];}
        if(v[i]<menor){
            menor=v[i];}
    }
}

void mostrarprog(){
    //muestra datos del programador
    cout<<"\nPROGRAMADOR: MASAPANTA ALEXANDER\n";
    cout<<"Carrera: Desarrollo de Software\n";
    cout<<"Curso: Segundo Semestre\n\n";
}

void descuento(){
    string nom;
    double p,final;
    cout<<"\nIngrese nombre del producto: ";
    cin>>nom;
    cout<<"Precio: ";
    cin>>p;

    if(p>1000){
        final=p-(p*0.10);
        cout<<"Descuento aplicado del 10%\nPrecio final: "<<final<<"\n";
    }else{
        cout<<"No aplica descuento.\nPrecio final: "<<p<<"\n";
    }
}

int main(){
    double v[8];
    double mayor,menor;

    ingresardatos(v,8);
    mayormenor(v,8,mayor,menor);

    cout<<"\nMayor precio: "<<mayor;
    cout<<"\nMenor precio: "<<menor<<"\n";

    mostrarprog();
    descuento();

    return 0;
}
