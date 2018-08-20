//aqui van las funciones ... 
#include <cstdlib>
#include <iostream>
#include <string.h>
#include "Funciones.h"


void Inicializar_Lineas(string linea1[32],string linea2[25],string linea4[25],string linea4a[7],string linea5[38],string linea6[12])
{
    linea1[32] ={"SP San Pablo", "NP Neptuno", "PJ Pajaritos", "LR Las Rejas"
            ,"EC Ecuador", "AH San Alberto Hurtado", "US Universidad de Santiago"
            ,"EL Estación Central", "LA ULA", "RP República", "LH Los Héroes"
            ,"LM La Moneda", "CH Universidad de Chile", "SL Santa Lucía"
            ,"UC Universidad Católica", "BA Baquedano", "SA Salvador"
            ,"MM Manuel Montt", "PV Pedro de Valdivia", "LE Los Leones"
            ,"TB Tobalaba", "GO El Golf", "AL Alcántara", "EM Escuela Militar"
            ,"MQ Manquehue", "HM Hernando de Magallanes", "LD Los Dominicos"};
   
    linea2[25] = {"LC La Cisterna", "EP El Parrón", "LO Lo Ovalle", "CN Ciudad del Niño"
            ,"DE Departamental", "LV Lo Vial", "SM San Miguel", "LL El Llano"
            , "FR Franklin", "RO Rondizzoni", "PQ Parque OHiggins", "TO Toesca"
            , "HE Los Héroes", "AN Santa Ana", "CA Puente Cal y Canto"
            , "PT Patronato", "CB Cerro Blanco", "CE Cementerios", "EI Einstein"
            , "DO Dorsal", "ZA Zapadores", "AV Vespucio Norte"};
    
    linea4[25] = {"TOB Tobalaba", "COL Cristóbal Colón", "BIL Francisco Bilbao"
            , "PDG Principe de Gales", "SBO Simón Bolivar", "PEG Plaza Egaña"
            , "LOR Los Orientales", "RGR Grecia", "LPR Los Presidentes"
            , "RQU Quilín", "LTO Las Torres", "MAC Macul", "VMA Vicuña Mackenna"
            , "VVA Vicente Valdés", "RMA Rojas Magallanes", "TRI Trinidad"
            , "SJE San José de la Estrella", "LQU Los Quillayes", "ECO Elisa Correa"
            , "HSR Hospital Sótero del Rio", "LME Las Mercedes"
            , "PIN Protectora de la Infancia", "PPA Plaza de Puente Alto"};
   
    linea4a[7] = {"VIM Vicuña Mackenna", "SJU Santa Julia", "LGR La Granja"
            , "SRO Santa Rosa", "SRA San Ramón", "LCI La Cisterna"};
    
    linea5[38] = {"PM Plaza de Maipú", "SB Santiago Bueras", "DS Del Sol"
            , "MT Monte Tabor", "LP Las Parcelas", "LS Laguna Sur"
            , "BR Barrancas", "PU Pudahuel", "SO San Pablo", "PR Lo Prado"
            , "BL Blanqueado", "GL Gruta de Lourdes", "QN Quinta Normal"
            , "RC Cumming", "NA Santa Ana", "PZ Plaza de Armas", "BE Bellas Artes"
            , "BQ Baquedano", "PB Parque Bustamante", "SI Santa Isabel"
            , "IR Irarrázaval", "NU Ñuble", "RA Rodrigo de Araya", "CV Carlos Valdovinos"
            , "AG Camino Agrícola", "SJ San Joaquín", "PE Pedrero", "MA Mirador"
            , "LF Bellavista de La Florida", "VV Vicente Valdés"};
   
    linea6[12] = {"CER Cerrillos", "LVA Lo Valledor", "PAC Pedro Aguirre Cerda"
            , "FRA Franklin", "BIO Bío Bío", "NUB Ñuble", "ESN Estadio Nacional"
            , "NUO Ñuñoa", "ISU Inés de Suárez", "LEN Los Leones"};
    
}
