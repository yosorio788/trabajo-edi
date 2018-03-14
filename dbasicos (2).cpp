a. //

#include <stdio.h>

int main()
{
	
    float base,altura,area;
    const float PI = 3.1416;

    printf( "\n   Introduzca base: " );
    scanf( "%f", &base );
	printf( "\n   Introduzca altura: " );
    scanf( "%f", &altura );
    
    area= (base*altura/2);
    
	printf("\n la base intruducida es : %2.1f" , base );
    printf( "\n   la altura introducida es: %2f", altura );
    printf("\n el area es : %f" , area );
    
	getch(); /* Pausa */
   
   
    return 0;
}


