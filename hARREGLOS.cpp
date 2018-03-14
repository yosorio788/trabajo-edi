#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int numeros1[5], numeros2[5];
	int i=0;
    for(i=0; i<5; i++){
        printf("Digite un numero: \n");
        scanf("%d",&numeros1[i]);
    }

    for(i=0; i<5; i++){
        numeros2[i]=numeros1[i]*2;
    }

    for(i=0; i<5; i++){
        printf("%d - %d\n", i, numeros2[i]);
    }

    
    return 0;
}
