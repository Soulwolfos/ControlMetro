
#include <cstdlib>
#include <iostream>
#include <string.h>

#include "Funciones.h"

using namespace std;

int main(int argc, char** argv) {
   
    /* PARA SEPARA EL CODIGO DEL NOMBRE  
    string sub1 = linea4a[3];
    
    int pos = sub1.find(" ");
    string codigo = sub1.substr(0,pos);
    string nombre = sub1.substr((pos+1)); 
    
    cout<<"Codigo de estacion: "<<codigo<<endl;
    cout<<"NOmbre estacion: "<<nombre<<endl;
    
    */
   
    //SETEAR LAS LINEAS 
    string metro[118];
    set_metro(metro);
    int matriz[118][118];
    llenarLinea1(matriz);
    llenarLinea2(matriz);
    llenarLinea4(matriz);
    llenarLinea4a(matriz);
    llenarLinea5(matriz);
    llenarLinea6(matriz);
    llenarCombinaciones(matriz);
    
    string estacionI = "";
    int posI = 0;
    for(int i=0; i<118; i++){
        estacionI = metro[i];
        int pos = estacionI.find(" ");
        string codigo = estacionI.substr(0, pos);
        string nombre = estacionI.substr((pos+1));
        if(codigo == argv[1]){
            posI = i;
            cout<<"Estacion de origen: "<<nombre<<", "<<codigo<<", "<<i<<endl;
        }
    }
    
    string estacionF = "";
    int posF = 0;
    for(int i=0; i<118; i++){
        estacionF = metro[i];
        int pos = estacionF.find(" ");
        string codigo = estacionF.substr(0, pos);
        string nombre = estacionF.substr((pos+1));
        if(codigo == argv[2]){
            posF = i;
            cout<<"Estacion final: "<<nombre<<", "<<codigo<<", "<<i<<endl;
        }
    }
    
    dij(matriz, posI, posF);
    

    return 0;
}

