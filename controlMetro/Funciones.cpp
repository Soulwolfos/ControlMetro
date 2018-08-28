//aqui van las funciones ... 
#include <cstdlib>
#include <iostream>
#include <string.h>

#include "Funciones.h"

using namespace std;

void set_l1(string linea[]){
    string a[40]={"SP San Pablo", "NP Neptuno", "PJ Pajaritos", "LR Las Rejas"
            ,"EC Ecuador", "AH San Alberto Hurtado", "US Universidad de Santiago"
            ,"EL Estación Central", "LA ULA", "RP República", "LH Los Héroes"
            ,"LM La Moneda", "CH Universidad de Chile", "SL Santa Lucía"
            ,"UC Universidad Católica", "BA Baquedano", "SA Salvador"
            ,"MM Manuel Montt", "PV Pedro de Valdivia", "LE Los Leones"
            ,"TB Tobalaba", "GO El Golf", "AL Alcántara", "EM Escuela Militar"
            ,"MQ Manquehue", "HM Hernando de Magallanes", "LD Los Dominicos"};
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void set_l2(string linea[]){
    string a[40]= {"LC La Cisterna", "EP El Parrón", "LO Lo Ovalle", "CN Ciudad del Niño"
            ,"DE Departamental", "LV Lo Vial", "SM San Miguel", "LL El Llano"
            , "FR Franklin", "RO Rondizzoni", "PQ Parque OHiggins", "TO Toesca"
            , "HE Los Héroes", "AN Santa Ana", "CA Puente Cal y Canto"
            , "PT Patronato", "CB Cerro Blanco", "CE Cementerios", "EI Einstein"
            , "DO Dorsal", "ZA Zapadores", "AV Vespucio Norte"};   
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void set_l4(string linea[]){
    string a[40]= {"TOB Tobalaba", "COL Cristóbal Colón", "BIL Francisco Bilbao"
            , "PDG Principe de Gales", "SBO Simón Bolivar", "PEG Plaza Egaña"
            , "LOR Los Orientales", "RGR Grecia", "LPR Los Presidentes"
            , "RQU Quilín", "LTO Las Torres", "MAC Macul", "VMA Vicuña Mackenna"
            , "VVA Vicente Valdés", "RMA Rojas Magallanes", "TRI Trinidad"
            , "SJE San José de la Estrella", "LQU Los Quillayes", "ECO Elisa Correa"
            , "HSR Hospital Sótero del Rio", "LME Las Mercedes"
            , "PIN Protectora de la Infancia", "PPA Plaza de Puente Alto"};            
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void set_l4a(string linea[]){
    string a[40]= {"VIM Vicuña Mackenna", "SJU Santa Julia", "LGR La Granja"
            , "SRO Santa Rosa", "SRA San Ramón", "LCI La Cisterna"};
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void set_l5(string linea[]){
    string a[40]= {"PM Plaza de Maipú", "SB Santiago Bueras", "DS Del Sol"
            , "MT Monte Tabor", "LP Las Parcelas", "LS Laguna Sur"
            , "BR Barrancas", "PU Pudahuel", "SO San Pablo", "PR Lo Prado"
            , "BL Blanqueado", "GL Gruta de Lourdes", "QN Quinta Normal"
            , "RC Cumming", "NA Santa Ana", "PZ Plaza de Armas", "BE Bellas Artes"
            , "BQ Baquedano", "PB Parque Bustamante", "SI Santa Isabel"
            , "IR Irarrázaval", "NU Ñuble", "RA Rodrigo de Araya", "CV Carlos Valdovinos"
            , "AG Camino Agrícola", "SJ San Joaquín", "PE Pedrero", "MA Mirador"
            , "LF Bellavista de La Florida", "VV Vicente Valdés"};
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void set_l6(string linea[]){
    string a[40]= {"CER Cerrillos", "LVA Lo Valledor", "PAC Pedro Aguirre Cerda"
            , "FRA Franklin", "BIO Bío Bío", "NUB Ñuble", "ESN Estadio Nacional"
            , "NUO Ñuñoa", "ISU Inés de Suárez", "LEN Los Leones"};   
    for(int i=0;i<40;i++){
        linea[i]=a[i];
    }
}

void llenarLinea1(int matrizAdy[][118]){
    for(int i = 0; i<27; i++){
        for(int j=0; j<27; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

void llenarLinea2(int matrizAdy[][118]){
    for(int i = 27; i<49; i++){
        for(int j=27; j<49; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

void llenarLinea4(int matrizAdy[][118]){
    for(int i = 49; i<72; i++){
        for(int j=49; j<72; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

void llenarLinea4a(int matrizAdy[][118]){
    for(int i = 72; i<78; i++){
        for(int j = 72; j<78; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

void llenarLinea5(int matrizAdy[][118]){
    for(int i = 78; i<108; i++){
        for(int j=78; j<108; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

void llenarLinea6(int matrizAdy[][118]){
    for(int i = 108; i<118; i++){
        for(int j=108; j<118; j++){
            if(j == i+1){
                matrizAdy[i][j] = 1;
            }
            else if(i == j+1){
                matrizAdy[i][j] = 1;
            }
            else{
                matrizAdy[i][j] = 0;
            }
        }
    }
}

string BuscaCodigoEstacion(string linea[], string cod_estacion)     //Busca el codigo de la estacion y devuelve el nombre de la estacion correspondiente
{
    int ini=1000,fin=cod_estacion.length()+1;
    string nom_estacion="";
    for(int i=0; i<40; i++)
    {
        ini=linea[i].find(cod_estacion);
        if(ini==0)
            return nom_estacion=linea[i].substr(fin);

    }
    if(ini!=0)
        return "Error, no se encontraron coincidencias.";
}
