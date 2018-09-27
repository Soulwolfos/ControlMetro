#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "/usr/include/mpich/mpi.h"
#include <string.h>
#include "blowfish.h"

int main(int argc, char** argv){

    int id, num_procs;
    int inferior = (4*id) + 1;   //limite inferior
    int superior = inferior + 1;  //limite superior
    int valido=1;
    int sizeMessage;

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);


    char* msj = "734b76ed5b240aca35f76f9095b9c14ef60adfc642071f286dcf4962dcb9611c27e1189eef842aff20b4bf7495fef6b5c18b206941ab41e6ced09679af49c9b73dc0b05ac9fe05c7d3a4e245c5cbb90c5c65fb1281505b44154ed05d24ef8a4bc6d700960deacb90022b2c4362544bc9cc9c447d88e5e412df841f87843c1ac3";
    char* intento = NULL;

    // arreglo de caracteres Ascii
    char asciiArray[] = {'!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2', '3', '4'
                        , '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C'
                        , 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'
                        , 'U', 'V', 'W', 'X', 'Y', 'Z','[', '\\', ']', '^', 'a', 'b', 'c', 'd', 'e', 'f'
                        , 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x'
                        , 'y', 'z', '{', '|', '}', '~', ' '};

    char password[5];
    for(int indice_1= inferior; indice_1<superior; indice_1++)
    {
        for(int indice_2=0; indice_2<92; indice_2++)
        {
            for(int indice_3=0; indice_3<92; indice_3++)
            {
                for(int indice_4=0; indice_4<92; indice_4++)
                {
                    for(int indice_5=0; indice_5<92; indice_5++)
                    {
                        free(intento);
                        password[0]= asciiArray[indice_1];
                        password[1]= asciiArray[indice_2];
                        password[2]= asciiArray[indice_3];
                        password[3]= asciiArray[indice_4];
                        password[4]= asciiArray[indice_5];
                        intento= descifrar(password, msj);
                        sizeMessage= strlen(intento);

                        valido=1;
                        if(sizeMessage!=0)
                        {
                            for(int i=0; i<sizeMessage; i++)
                            {
                                if(intento[i]< 32 || intento[i]>127 )
                                {
                                    valido=0;
                                    break;
                                }
                            }
                            if ( (sizeMessage>8) && (valido==1) )
                            {
                                fprintf(stdout,"\nClave: %c%c%c%c%c\n",asciiArray[indice_1], asciiArray[indice_2], asciiArray[indice_3], asciiArray[indice_4], asciiArray[indice_5]);
                                fprintf(stdout,"\nTexto: %s\n", intento);
                            }
                        }
                    }
                }
            }
        }
    }


    MPI_Finalize();
    return 0;
}
