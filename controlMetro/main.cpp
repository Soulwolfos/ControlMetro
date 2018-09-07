
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
    string linea1[40],linea2[40],linea4[40],linea4a[40],linea5[40],linea6[40];
    set_l1(linea1);
    set_l2(linea2);
    set_l4(linea4);
    set_l4a(linea4a);
    set_l5(linea5);
    set_l6(linea6);
    
    int matriz[118][118];
    llenarLinea1(matriz);
    llenarLinea2(matriz);
    llenarLinea4(matriz);
    llenarLinea4a(matriz);
    llenarLinea5(matriz);
    llenarLinea6(matriz);
    llenarCombinaciones(matriz);
    
  
    
    cout<<"Estacion de metro L1: "<<linea1[2]<<endl<<endl;
    cout<<"Estacion de metro L2: "<<linea2[2]<<endl<<endl;
    cout<<"Estacion de metro L4: "<<linea4[2]<<endl<<endl;
    cout<<"Estacion de metro L4a: "<<linea4a[2]<<endl<<endl;
    cout<<"Estacion de metro L5: "<<linea5[2]<<endl<<endl;
    cout<<"Estacion de metro L6: "<<linea6[2]<<endl<<endl;
    
    cout<<"\n"<<BuscaCodigoEstacion(linea4,"RGR")<<endl;
    return 0;
}

