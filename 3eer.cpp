#include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Ingrese la cantidad de datos a registrar: ";
    cin>>a;
    string ciudad[a];
    for (int i=0; i<a; i++){
        cout<<"Ingrese las materias de 3er semestre "<<i+1<<": ";
        cin>>ciudad[i];
    }
    cout<<"\nLas materias de 3er semestre registradas son: \n";
    for (int i=0; i<a; i++){
        cout<<ciudad[i]<<"\n";

}
    return 0;
}