#include<stdlib.h>
#include <stdio.h>
#include<conio.h>

int f,tf,c,tc,tabla[50][50];
main(){

	 


printf("\t\t\t imprimir diagonal principal\n\n");
printf("digita la dimension de la matriz cuadrada: ");
scanf("%d", &tf);
tc-tf;

for(f=1;f<=tf;f++)
for(c=1;c<=tc;c++){
	printf("%d,%d: ",f,c);
	scanf("%d",&tabla[f][c]);
	
}
printf("\t\t\t matriz\n\n");
for(f=1;f<=tf;f++){
	for(c=1;c<=tc;c++){
		if(f==c)
		printf("[%d]", tabla[f][c]);
		else
		printf("[-]");
		
	}
	printf("\n");
	
}
}
