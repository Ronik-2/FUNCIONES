#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    string matriz[x][y];
    for (int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Ingrese el elemento de la fila %d y columna %d\n",i,j);
            cin>>matriz[i][j];
    }}
    for (int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if (i==0){
                cout<<matriz[i][j]<<",";
            }
    }}
    cout<<"\nelemtno de la posicion 1,1 "<<matriz[1][1];
    return 0;
}