
#include<iostream>
using namespace std;
//Masapanta Alexander
//la declaro globales para usarlas en varias funciones
double iva=0.15;
double ice=0.15;
void menu(){
    cout<<"\n1. Telefonia Fija ($7.99)";
    cout<<"\n2. TV Satelital ($28.50)";
    cout<<"\n3. Internet Hogar ($18.00)";
    cout<<"\n4. Salir\n";
}
double base(int op){
    if(op==1)return 7.99;
    if(op==2)return 28.50;
    if(op==3)return 18.00;
    return 0;
}
double install(string m){
    double c=120;
    if(m=="tarjeta"){
        c=c-(c*0.50);}
    else if(m=="efectivo"){
        c=c-(c*0.10);}
    return c;
}
int main(){
    int op;
    while(true){
        menu();
        cout<<"Opcion: ";
        cin>>op;
        if(op==4){
            cout<<"Saliendo...\n";
            return 0;
        }
        if(op<1||op>4){
            cout<<"Opcion invalida.\n";
        }
        double b=base(op);
        double iva_m=b*iva;
        double ice_m=(op==2)?b*ice:0;
        double total=b+iva_m+ice_m;
        cout<<"\nEdad del cliente: ";
        int edad;
        cin>>edad;
        double desc3=0;
        if(edad>65){
            desc3=b*0.50;
            b=b-desc3;
            total=b+(b*iva)+( (op==2)?b*ice:0 );
        }
        string mp;
        cout<<"Metodo de pago instalacion (tarjeta/efectivo/otro): ";
        cin>>mp;
        double tin=install(mp);
        cout<<"\n==== RESUMEN ====\n";
        cout<<"Servicio: ";
        if(op==1)cout<<"Telefonia Fija\n";
        if(op==2)cout<<"TV Satelital\n";
        if(op==3)cout<<"Internet Hogar\n";
        cout<<"Base: "<<b<<"\n";
        cout<<"IVA: "<<(b*iva)<<"\n";
        cout<<"ICE: "<<(op==2?b*ice:0)<<"\n";
        cout<<"Desc 3ra edad: "<<desc3<<"\n";
        cout<<"Total mensual: "<<total<<"\n";
        cout<<"Instalacion final: "<<tin<<"\n\n";
    }
}
