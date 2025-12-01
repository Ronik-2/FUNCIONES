#include<iostream>
//voy a practicar el uso de la biblioteca vector y tambien de los punteros para guardar datos
#include <vector>
using namespace std;
//limite global para todo el codigo
int limite=0;
void agregar(double*& precio,string*& order,int*& cantidad,string entrada,double price,int cant){
//las paso por referencia para que puedan modificar los valores de los punteros
//creo nuevos punteros que creceran conforme se repita el codigo dentro de un bucle
    string* new_order=new string[limite+1];
    double* new_price=new double[limite+1];
    int* new_quant=new int[limite+1];
    for (int i=0;i<limite;i++){
        new_price[i]=precio[i];
        new_order[i]=order[i];
        new_quant[i]=cantidad[i];
    //copio el espacio junto con los datos antiguos en cada variable
    }
    new_order[limite]=entrada;
    new_price[limite]=price;
    new_quant[limite]=cant;
    //copio los nuevos datoos en los punteros
    delete[] order;
    delete[] precio;
    delete[] cantidad;
    //liberacion de memoria para borrar la lista antigua 
    //copio las nuevas listas
    order=new_order;
    precio=new_price;
    cantidad=new_quant;
    //aumento el limite
    limite++;
}
//uso biblioteca, inica como vector , porq debe devolverme un vector .
//guardo cada subtotal para  luego poder moestrarlo
vector <double> calculo(double precio[],int cant[],double& pago){
    vector<double> subtotal;
    for (int i=0;i<limite;i++){
        subtotal.push_back(precio[i]*cant[i]);
    }
    for (int i=0;i<limite;i++){
        pago+=subtotal[i];
        }
    return subtotal;
}
//guardo el descuento y que hacer en cada caso
double descuento (double precio[],int cantidad[],string& mensaje,double& total,double& pago){
    if (limite>=3 and pago>200 ){
//guardo un mensaje personalizado , de acuerdo a cada caso .
        mensaje="Lleva mas de 2 objetos distintos\nEl subtotal es mayor a 200 \ndescuento total de 20%";
        total+=pago*(0.80);}
    else if(limite>=3){
        mensaje="Lleva mas de 2 objetos distintos\nAplicada a un descuento del 15%";
        total+=pago*(0.85);
        }
    else{
        if (pago>200){
            mensaje="El subtotal es mayor a 200 \ndescuento total de 5%";
            total+=pago*(0.95);}
        else{
            total=pago;
        }
    }return total;}
void mostrar(vector<double> subtotal,string mensaje,string order [],double total){
    for (int i=0;i<limite;i++){
        cout<<i+1<<"."<<order[i]<<" = $"<<subtotal[i]<<endl;
        }
    cout<<mensaje<<"\nTotal a pagar="<<total;}
string minuscula(string texto){
//codigo para transformar cualquier texto a minuscula
    for (char &c:texto){
        c=tolower(c);}
        return texto;
}
int main(){
//indico punteros que no apunten a nada , todavia .
    double* precio=nullptr;
    string* order=nullptr;
    int* cantidad=nullptr;
    //aqui defino cada variable para poder guardarles valores , al pasarlos por referencia
    string entrada,mensaje;
    double price;
    int cant;
    double total=0;
    double pago=0;
    //uso while para que pida datos hasta que esciba salir
    while (true){
        cout<<"EL TUTI\n";
        cout<<"Ingrese el nombre del producto\n(Escriba SALIR par terminar)\n";
        cin>>entrada;
        if (minuscula(entrada)=="salir"){
            break;
        }
        cout<<"Precio=\n";
        cin>>price;
        cout<<"Cantidad=\n";
        cin>>cant;
        agregar(precio,order,cantidad,entrada,price,cant);}
    //luego ya solo calcula , y guarda cada subtotal en un vector.
    vector <double>subtotal=calculo(precio,cantidad,pago);
    //guardo el total.
    total=descuento(precio,cantidad,mensaje,total,pago);
    //ya solo muestro
    //alexander Masapanta
    mostrar(subtotal,mensaje,order,total);
}
