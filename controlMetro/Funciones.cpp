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
            , "HSR Hospital Sótero del Rio", "PIN Protectora de la Infancia"
            , "LME Las Mercedes", "PPA Plaza de Puente Alto"};            
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

void set_metro(string metro[]){
    string aux[118] = {"SP San Pablo", "NP Neptuno", "PJ Pajaritos", "LR Las Rejas"
            ,"EC Ecuador", "AH San Alberto Hurtado", "US Universidad de Santiago"
            ,"EL Estación Central", "LA ULA", "RP República", "LH Los Héroes"
            ,"LM La Moneda", "CH Universidad de Chile", "SL Santa Lucía"
            ,"UC Universidad Católica", "BA Baquedano", "SA Salvador"
            ,"MM Manuel Montt", "PV Pedro de Valdivia", "LE Los Leones"
            ,"TB Tobalaba", "GO El Golf", "AL Alcántara", "EM Escuela Militar"
            ,"MQ Manquehue", "HM Hernando de Magallanes", "LD Los Dominicos"
            ,"LC La Cisterna", "EP El Parrón", "LO Lo Ovalle", "CN Ciudad del Niño"
            ,"DE Departamental", "LV Lo Vial", "SM San Miguel", "LL El Llano"
            ,"FR Franklin", "RO Rondizzoni", "PQ Parque OHiggins", "TO Toesca"
            ,"HE Los Héroes", "AN Santa Ana", "CA Puente Cal y Canto"
            ,"PT Patronato", "CB Cerro Blanco", "CE Cementerios", "EI Einstein"
            ,"DO Dorsal", "ZA Zapadores", "AV Vespucio Norte"
            ,"TOB Tobalaba", "COL Cristóbal Colón", "BIL Francisco Bilbao"
            ,"PDG Principe de Gales", "SBO Simón Bolivar", "PEG Plaza Egaña"
            ,"LOR Los Orientales", "RGR Grecia", "LPR Los Presidentes"
            ,"RQU Quilín", "LTO Las Torres", "MAC Macul", "VMA Vicuña Mackenna"
            ,"VVA Vicente Valdés", "RMA Rojas Magallanes", "TRI Trinidad"
            ,"SJE San José de la Estrella", "LQU Los Quillayes", "ECO Elisa Correa"
            ,"HSR Hospital Sótero del Rio", "PIN Protectora de la Infancia"
            ,"LME Las Mercedes", "PPA Plaza de Puente Alto"
            ,"VIM Vicuña Mackenna", "SJU Santa Julia", "LGR La Granja"
            ,"SRO Santa Rosa", "SRA San Ramón", "LCI La Cisterna"
            ,"PM Plaza de Maipú", "SB Santiago Bueras", "DS Del Sol"
            ,"MT Monte Tabor", "LP Las Parcelas", "LS Laguna Sur"
            ,"BR Barrancas", "PU Pudahuel", "SO San Pablo", "PR Lo Prado"
            ,"BL Blanqueado", "GL Gruta de Lourdes", "QN Quinta Normal"
            ,"RC Cumming", "NA Santa Ana", "PZ Plaza de Armas", "BE Bellas Artes"
            ,"BQ Baquedano", "PB Parque Bustamante", "SI Santa Isabel"
            ,"IR Irarrázaval", "NU Ñuble", "RA Rodrigo de Araya", "CV Carlos Valdovinos"
            ,"AG Camino Agrícola", "SJ San Joaquín", "PE Pedrero", "MA Mirador"
            ,"LF Bellavista de La Florida", "VV Vicente Valdés"
            ,"CER Cerrillos", "LVA Lo Valledor", "PAC Pedro Aguirre Cerda"
            ,"FRA Franklin", "BIO Bío Bío", "NUB Ñuble", "ESN Estadio Nacional"
            ,"NUO Ñuñoa", "ISU Inés de Suárez", "LEN Los Leones"};
    for(int i=0;i<118;i++){
        metro[i]=aux[i];
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

void llenarCombinaciones(int matrizAdy[][118]){   
    //Combinaciones L1
    matrizAdy[1][86] = 1;
    matrizAdy[1][0] = 1;
    matrizAdy[9][39] = 1;
    matrizAdy[9][10] = 1;
    matrizAdy[11][39] = 1;
    matrizAdy[11][10] = 1;
    matrizAdy[14][15] = 1;
    matrizAdy[14][95] = 1;
    matrizAdy[16][15] = 1;
    matrizAdy[16][95] = 1;
    matrizAdy[18][19] = 1;
    matrizAdy[18][117] = 1;
    matrizAdy[20][19] = 1;
    matrizAdy[20][117] = 1;
    matrizAdy[19][20] = 1;
    matrizAdy[19][49] = 1;
    matrizAdy[21][20] = 1;
    matrizAdy[21][49] = 1;
    
    //Combinaciones L2
    matrizAdy[39][40] = 1;
    matrizAdy[39][92] = 1;
    matrizAdy[41][40] = 1;
    matrizAdy[41][92] = 1;
    matrizAdy[40][39] = 1;
    matrizAdy[40][10] = 1;
    matrizAdy[38][39] = 1;
    matrizAdy[38][10] = 1;
    matrizAdy[36][35] = 1;
    matrizAdy[36][111] = 1;
    matrizAdy[34][34] = 1;
    matrizAdy[34][111] = 1;
    matrizAdy[28][27] = 1;
    matrizAdy[28][77] = 1;
    
    //Combinaciones L4
    matrizAdy[50][49] = 1;
    matrizAdy[50][20] = 1;
    matrizAdy[60][61] = 1;
    matrizAdy[60][72] = 1;
    matrizAdy[62][61] = 1;
    matrizAdy[62][72] = 1;
    matrizAdy[61][62] = 1;
    matrizAdy[61][107] = 1;
    matrizAdy[63][62] = 1;
    matrizAdy[63][107] = 1;
    
    //Combinaciones 4a
    matrizAdy[73][72] = 1;
    matrizAdy[73][61] = 1;
    matrizAdy[76][77] = 1;
    matrizAdy[76][27] = 1;
    
    //Combinaciones L5
    matrizAdy[85][86] = 1;
    matrizAdy[85][0] = 1;
    matrizAdy[87][86] = 1;
    matrizAdy[87][0] = 1;
    matrizAdy[91][92] = 1;
    matrizAdy[91][40] = 1;
    matrizAdy[93][92] = 1;
    matrizAdy[93][40] = 1;
    matrizAdy[94][95] = 1;
    matrizAdy[94][15] = 1;
    matrizAdy[96][95] = 1;
    matrizAdy[96][95] = 1;
    matrizAdy[98][99] = 1;
    matrizAdy[98][113] = 1;
    matrizAdy[100][99] = 1;
    matrizAdy[100][113] = 1;
    matrizAdy[106][107] = 1;
    matrizAdy[106][62] = 1;

    //Combinaciones L6
    matrizAdy[116][117] = 1;
    matrizAdy[116][19] = 1;
    matrizAdy[114][113] = 1;
    matrizAdy[114][99] = 1;
    matrizAdy[112][113] = 1;
    matrizAdy[112][99] = 1;
    matrizAdy[112][111] = 1;
    matrizAdy[112][35] = 1;
}


void dij(int matriz[][118], int ini, int fin){
    int matrizAux[118][118], verticesUsados[118];
    int auxMin=99999999, vertice=0, camino[118], posCam=0, largoAux=0;
    
    for(int i=0; i<118; i++){
        verticesUsados[i] = 0;
    }
    
    for(int i=0; i<118; i++){
        for(int j=0; j<118; j++){
            matrizAux[i][j] = 0;
        }
    }
    
    verticesUsados[ini] = 1;
    camino[0] = ini;
    for(int i=0; i<118; i++){   
        matrizAux[0][i] = matriz[ini][i];
    }

    int contador = 0;
    while(vertice != fin){
  
        auxMin = 99999999;
        for(int i=0; i<118; i++){
            if(matrizAux[contador][i] != 0){
                if(matrizAux[contador][i] < auxMin){
                    auxMin = matrizAux[contador][i];
                    vertice = i;
                }
            }
        }
        
        
        if(auxMin == 99999999){
            for(int j=0; j<contador+1; j++){
                for(int i=0; i<118; i++){
                    if(matrizAux[j][i] != 0){
                        if(verticesUsados[i] == 0){
                            if(matrizAux[j][i] < auxMin){
                                auxMin = matrizAux[j][i];
                                vertice = i;
                                camino[j] = vertice;
                            }
                        }
                    }
                }
            }
        }
        
        verticesUsados[vertice] = 1;
        
        for(int i=0; i<118; i++){
            if(verticesUsados[i] == 0){
                if(matriz[vertice][i] == 0){
                    matrizAux[contador+1][i] = matrizAux[contador][i];
                }
                else{
                    if(matriz[vertice][i] + auxMin > largoAux){
                        posCam += 1;
                        camino[posCam] = vertice;
                    }
                    largoAux = matriz[vertice][i] + auxMin;
                    if(matrizAux[contador][i] != 0){
                        if(largoAux < matrizAux[contador][i]){
                            matrizAux[contador+1][i] = largoAux;
                        }
                        else{
                            matrizAux[contador+1][i] = matrizAux[contador][i];
                        }
                    }
                    else{
                        matrizAux[contador+1][i] = largoAux;
                    }
                }             
            }
            else{
                matrizAux[contador+1][i] = 0;
            }
        }
        
        //camino[posCam] = vertice;      
        contador++;
    }
    
    cout<<"largo camino: "<<auxMin<<endl;
    for(int i=0; i<118; i++){
        cout<<camino[i]<<endl;
    }
}
 
 