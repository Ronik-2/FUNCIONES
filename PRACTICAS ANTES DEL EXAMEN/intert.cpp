//MASAPANTA ALEXANDER
#include<iostream>
using namespace std;

double desc(double base,double porc){
    //calcula un descuento
    return base*(porc/100);
}

double calctotal(double base,double d1,double d2){
    //calcula total aplicando los dos descuentos
//llamo a la funcion desc para calcular cada descuento , y que el ejercicio indica que son dos 
    double x=desc(base,d1);
    double y=desc(base,d2);
    return base-(x+y);
}

int main(){
    double base,d1,d2;

    cout<<"Plan mensual: ";
    cin>>base;
    cout<<"Porcentaje desc 1: ";
    cin>>d1;
    cout<<"Porcentaje desc 2: ";
    cin>>d2;
//calculo el total en funcion de los dos descuentos
    double total=calctotal(base,d1,d2);
    cout<<"\nTotal a pagar: "<<total<<"\n";

    return 0;
}
