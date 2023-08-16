#include <stdio.h>


int main (){

int vetorFull[10];
int number;
int vetorPar[10];
int vetorImpar[10];
int indexPar = 0;
int indexImpar = 0;


    for(int i=0; i < 10; i++){
        printf("\nDigite um numero:");
        scanf("%d",&number);
        vetorFull[i] = number;

    if(vetorFull[i] % 2 == 0){
        vetorPar[indexPar] = vetorFull[i];
        indexPar++;
    }

    else {
        vetorImpar[indexImpar] = vetorFull[i];
        indexImpar++;
    }
    }

   /* for(int i=0; i < 10; i++){
        printf("\nvetor [%d]: %d",i,vetorFull[i]);

    } */

    printf("\n\nNUMEROS PARES----------->");
    for(int i = 0;i < indexPar; i++){
        printf("\nNumeros Pares: %d",vetorPar[i]);

    }


    printf("\n\nNUMEROS IMPARES----------->");
    for(int i = 0;i < indexImpar; i++){
        printf("\nNumeros Impares: %d",vetorImpar[i]);

    }

    puts("");

return 0;
}
