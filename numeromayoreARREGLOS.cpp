#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int numeros[200], n, mayor=-9999;
    int i=0;
    printf("Ingrese la cantidad de elementos del vector:\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Digite un numero: \n");
        scanf("%d",&numeros[i]);

        if(numeros[i]>mayor){
            mayor=numeros[i];
        }
    }

    printf("El numero mayor del vector es: %d\n", mayor);

    
    return 0;
}
