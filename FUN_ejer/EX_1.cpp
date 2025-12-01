#include <iostream>
#include <string>
using namespace std;
void recorrer(string lista[5]){
	cout<<"Elementos en lista \n";
    for (int i=0;i<4;i++){
        if (lista[i]==""){
            cout<<"La posicion "<<i<<" esta vacia\n"; }
        else{
            cout<<lista[i]<<endl;  } }}
void agregar(string lista[5]){
    int contador=0;
    for (int i=0;i<4;i++){
        if (lista[i]==""){
    		cout<<"Ingrese la provincia \n";
    		cout<<"(se le asignaria la posicion "<<i<<")"<<endl;
            cin>>lista[i];  }
        contador++;}
    if (contador==5){
        cout<<"Lista llena";}}
void cambiar(string lista[5]){
    cout<<"Indique una posicion entre(0-4) = ";
    string nuevo;
    int pos;
    cin>>pos;
    cout<<"Nuevo nombre =";
    cin>>nuevo;
    lista[pos]=nuevo;   }
int main(){
    string lista[5]={"Pichincha"};
    string delet;
    recorrer(lista);
    agregar(lista);
    cambiar(lista);
    int contador=0;
    cout<<"Eliminar provincia = ";
    cin>>delet;
    for (int i=0;i<4;i++){
        if (lista[i]==delet){
            lista[i]="";
        	cout<<"eliminacion exitosa \n";
            break;
        }
        else{
        	contador++;
        	if (contador==4 and lista[i]!=delet){
				cout<<"Provincia no encontrada\n";
			} } }
	recorrer(lista);
    return 0;
}
