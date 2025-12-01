#include <iostream>
#include <string>
using namespace std;
int n=4;
void recorrer(string nombres[4],string cargos[4],int ids[4],double sueldosBase[4]){
	cout<<"Elementos en lista \n";
    for (int i=0;i<n-1;i++){
    	cout<<i+1<<".- "<<nombres[i]<<"| Cargo= "<<cargos[i]<<"| ID= "<<ids[i]<<"|Sueldo = "<<sueldosBase[i]<<endl;
		}
		}
double salario(double sueldosBase[4],double& total){
	for (int i=0;i<3;i++){
		total+=sueldosBase[i];
	}
	double promedio=total/4;
	cout<<"El salario promedio es = "<<promedio<<endl;
	return promedio;
}
void mayor(double sueldosBase[4],int& alto){
	for (int i=0;i<3;i++){
		for(int j=0;j<3-i;j++){
			if (sueldosBase[j]>sueldosBase[j+1]){
				if (sueldosBase[j]>alto){
					alto=sueldosBase[j];	}}
			else {
				if (sueldosBase[j+1]>alto){
					alto=sueldosBase[j+1];	}		}	}	}	
				cout<<"El salario mayor es = "<<alto<<endl;}
//i.	Seguridad social: 9.45%  
//ii.	Impuestos: 7.65%  
double salario_neto(double sueldosBase[4],double neto[4]){
	for (int i=0;i<3;i++){
		double desc=sueldosBase[i]*(100-9.45-7.65)/100;
		neto[i]=desc;
	}return 0;
}
int main(){
	int grande=0;
	string nombres[4]={"Juan Perez","Luis Coba","Ana Solis","Andy Salas"};
	string cargos[4]={"director","subdirector","analista","analista"};
	int ids[4]={104,103,102,101};
	double sueldosBase[4]={2400,1560,1250,1250};
	double Salaneto[4]={};
	double total=0;
	recorrer(nombres,cargos,ids,sueldosBase);
	double promedio=salario(sueldosBase,total);
	mayor(sueldosBase,grande);
	salario_neto(sueldosBase,Salaneto);
	recorrer(nombres,cargos,ids,Salaneto);
	

	 	
}
		
