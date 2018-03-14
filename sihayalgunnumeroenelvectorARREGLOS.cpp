#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[]={3,5,10,24,41}, suma=0;
    int i=0;

    for(i=0; i<5; i++){
        suma=suma+numeros[i];
        if (numeros[i]==suma){
            printf("Si existe un valor: %d\n", numeros[i]);
        }else{
            printf("No existe un valor\n");
        }
    }

    
    return 0;
}
