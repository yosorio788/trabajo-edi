#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[100],i=0 ,n;
    printf("Ingrese la cantidad de elementos que tendra el vector:\n");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Digite un numero:\n");
        scanf("%d",&numeros[i]);
    }

    for(i=0; i<n; i++){
        printf("%d - %d\n", i, numeros[i]);
    }

    system("pause");
    return 0;
}
