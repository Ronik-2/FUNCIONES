#include<iostream>
using namespace std;
//creo un puntero,para pedir memoria en donde se guarden valores,
// este puntero es global
//no uso biblioteca vector para ver otros metodos 
int* lista= nullptr;
//limite inicial 0 , va a crecer conforme el usuario ingrese datos
int limite=0;
//funcion para mostrar datos(misma del anterior ejericio)
void mostrar(){
    cout<<"numeros en lista \n";
    for (int i=0;i<limite;i++){
        cout<<lista[i]<<endl;}}
string minuscula(string texto){
    //funcion q retorna letras en minisculas,c con referencia
    //cambia cada letra del texto por minusculas ,y retorna la nueva palabra
    for (char &c:texto){
        c=tolower(c);  }return texto;}
void list(string& entrada){
    try{//intenta convertir la entrada a entero
//si falla sale entrada invalida 
        int valor=stoi(entrada);
//creo un punturo que pueda crecer , incialmente es 1,
        int* nuevo= new int[limite+1];
        for (int i=0;i<limite;i++){
//hago que todo lo nuevo se copie en lista, de esta manera aumento el limite de lista
            nuevo[i]=lista[i];}
//en lista nueva(NUEVO),de indicie inicial 0 , se guardara el valor ingresado
        nuevo[limite]=valor;
//borro los elementos de la lista,(ahorro de memoria)
        delete[]lista;
//ahora vuelvo a copiar los elementos en una lista con mas espacio.
        lista=nuevo;
//aumento el limite tanto de valor como de lista
        limite++;} catch(...){
        cout<<"Entrada no valida\n";}}
int main(){
    //MASAPANTA ALEXANDER 
    int valor,total;
    string entrada;
    int lista;
    while (true){
        cout<<"Ingresar valores (escriba salir para terminar)\n";
        cin>>entrada;
        if (minuscula(entrada)=="salir"){
            break;}
        else{
        list(entrada);}}
    mostrar();
    return 0;}