#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

struct motos{
	string placa;
	string propietario;
	int puntos;
};
int validar(int c){
	int a;
	while(true){
		cin>>a;
		if (a>0 and a<c){return a;}
	}
	
}

int main(){
	vector <motos> lista;
	int n=3;
	string placa;
	for (int i=0;i<n;i++){
		motos nuevo;
		string op;
		cout<<"Ingresar la placa = ";
		cin>>nuevo.placa;
		cout<<"Propietario = ";
		cin>>nuevo.propietario;
		cout<<"Ingresar puntos = ";
		cin>>nuevo.placa;
		lista.push_back(nuevo);
		}
		
	cout<<"Actualizar mnoto \n";
	cout<<"INGRESE PLACA = ";
	cin>>placa;
	for (int i=0;i<n;i++){
		int op;
		if (placa==lista[i].placa){
			cout<<"QUE DESEA ACTUALIZAR ?\n1.PROPIETARIO\n2.PUNTOS";
			op=validar(2);
			if (op==1){
				cout<<"Nuevo nombre=";
				cin>>lista[i].propietario;
			}
			else if (op==2){
				cout<<"Puntos=";
				cin>>lista[i].puntos;				
			}
			else {cout<<"ACCION INVALIDA";}
		}
	}
	cout<<"ELIMINAR UNA MOTO";
	cout<<"INGRESE PLACA = ";
	cin>>placa;
	for (int i=0;i<n;i++){
		if (placa==lista[i].placa){
			lista[i].propietario="";
			lista[i].placa="";
			lista[i].puntos=0;
		}}
	for (int i=0;i<n;i++){
		if (lista[i].placa==""){
			lista[i].propietario=lista[i+1].propietario;
			lista[i].placa=lista[i+1].placa;
			lista[i].puntos=lista[i+1].puntos;
		}
		}
	n--;
	lista.pop_back();
	int cont=0;
	int mayor=lista[0].puntos;
	int menor=lista[0].puntos;
	int pos,pos2;
	cout<<"MOSTRAR LISTA";
	for (int i=0;i<n;i++){
		cout<<"MOTO #"<<i+1;
		cout<<"PLACA = "<<lista[i].placa;
		cout<<"PROPIETARIO = "<<lista[i].propietario;
		cout<<"PUUNTOS = "<<lista[i].puntos;
		cont+=lista[i].puntos;
		if (lista[i].puntos>mayor){
			mayor=lista[i].puntos;
			pos=i;
		}
		if (lista[i].puntos<menor){
			menor=lista[i].puntos;
			pos2=i;
		}
			}
	cout<<"TOTAL DE PUNTOS = "<<cont;
	cout<<"LA MOTO COM MAS PUNTOS ES  = "<<lista[pos].placa<<endl;
	cout<<"SU DUEÑO ES  = "<<lista[pos].propietario<<endl<<endl;
	cout<<"con un total de  = "<<lista[pos].puntos<<endl;
	cout<<"LA MOTO COM MENOS PUNTOS ES  = "<<lista[pos2].placa<<endl;
	cout<<"SU DUEÑO ES  = "<<lista[pos2].propietario<<endl<<endl;
	cout<<"con un total de  = "<<lista[pos2].puntos<<endl;
	
	return 0;
}
