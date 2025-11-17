#include <iostream>
#include <iomanip>
using namespace std;
double prom(int lista[],int size){
    int total=0;
    for (int i=0;i<size;i++){
        total+=lista[i];
    }
    double promedio=total/size;
    return promedio;
}
int main(){
 int lista[10]={2,5,4,3,6,8,5,4,3};
 double promedio=prom(lista,10);
 cout<<"el promedio es = "<<fixed<<setprecision(2)<<promedio;
 return 0;
}