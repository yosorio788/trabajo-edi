#include <stdio.h>
#include <stdlib.h>

int main()
{
 

    char caracteres1[]={'s','e','b','a','t'}, caracteres2[]={'i','n','o','s','o'}, caracteres3[10];
    int i=0;

    for( i=0; i<5; i++){
        caracteres3[i]=caracteres1[i];
    }

    for(i=5; i<10; i++){
        caracteres3[i]=caracteres2[i-5];
    }

    for(i=0; i<10; i++){
        printf("%d -- %c\n", i, caracteres3[i]);
    }


   
    return 0;
}
