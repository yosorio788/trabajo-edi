#include <stdio.h>

int main()
{
    int i,numero;
    printf("ingrese un numero \n");
    scanf ("%d",&numero);
    
    for(i=i;numero>1;i++){
    while (numero %i==0){
    	printf("%d",i);
    	printf("%d \t | \t %d \n", numero,i);
    
    	numero/=i;
    	
	}
    
}
  

    return 0;
}
