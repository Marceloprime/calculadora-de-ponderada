/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 16,i;
    float vector[n],vector1[n],x=0,y=0;
    vector[0] = 5.1;
    vector[1] = 5.0;
    vector[2] = 6.9;
    vector[3] = 6.6;
    vector[4] = 6.9;
    vector[5] = 7.4;
    vector[6] = 6.5;
    vector[7] = 6.6;
    vector[8] = 5.0;
    vector[9] = 6.6;
    vector[10] = 6.8;
    
    vector1[0] = 4;
    vector1[1] = 2;
    vector1[2] = 4;
    vector1[3] = 2;
    vector1[4] = 3;
    vector1[5] = 2;
    vector1[6] = 2;
    vector1[7] = 4;
    vector1[8] = 6;
    vector1[9] = 4;
    vector1[10] = 4;
    
    
    
    for(i=11;i<n;i++){
        
        if( i == 11){
            printf("Algoritmos e Estruturas de Dados II\n");
        }
        else if( i == 12){
            printf("POO\n");
        }
        else if( i == 13){
            printf("Intera\n");
        }
        else if( i == 14){
            printf("Calculo nume\n");
        }
        else if( i == 15){
            printf("Estati\n");

        }
        scanf("%f",&vector[i]);
        scanf("%f",&vector1[i]);
    }

    for(i=0;i<n;i++){
        y+=vector1[i];
    }
    for(i=0;i<n;i++){
        x+=vector1[i]*vector[i];
    }
    float media = x/y;
    printf("%f",media);
    
    return 0;
}


