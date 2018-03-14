
#include <stdlib.h>

int main()
{
    
    int numeros[] = {1,3,5,6,10},i=0, suma=0;

    for(i=0; i<5; i++){
        suma=suma+numeros[i];
    }
        printf("La suma de los elementos del vector es: %d\n", suma);

    
    return 0;
}
