#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int numeros[]={3,6,9,13,23,45};
	int i=5;
    for(i=5; i>=0; i--){
        printf("%d --> %d\n", i, numeros[i]);
    }

    system("pause");
    return 0;
}
