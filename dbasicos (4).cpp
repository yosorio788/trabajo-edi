
#include <stdio.h>

int main()
{
	
    float diurnas,hora,noturnas,dominicales,festivos,vhoradiurna,vhoranoturna,vhoradomini,vhorafestivos;
   

    printf( "\n   ingrese horas diurnas: " );
    scanf( "%f", &diurnas );
	printf( "\n   ingrese horas noturnas: " );
    scanf( "%f", &noturnas );
    printf( "\n   ingrese horas dominicales: " );
    scanf( "%f", &dominicales );
    printf( "\n   ingrese horas festivos: " );
    scanf( "%f", &festivos );
    hora=2500;
    vhoradiurna=2500*diurnas;
    vhoranoturna=(2500+0.35)*10;
    vhoradomini=(2500+0.50)*4;
    vhorafestivos=(2500+0.75)*10;
    
	printf("\n valor hora : %1.1f" , hora );
    printf( "\n   valor hora diurna: %f", vhoradiurna );
    printf("\n valor hora noturna : %f" , vhoranoturna );
    printf("\n valor hora dominicales : %f" , vhoradomini );
    printf("\n valor hora festivos : %f" , vhorafestivos );

   
   
    return 0;
}

