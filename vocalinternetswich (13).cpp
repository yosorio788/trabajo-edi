#include <stdio.h>

int main()
{
char vocal;
printf("ingrese numero vocal\n");
scanf("%c",vocal);

switch (vocal){
	case A:printf("LA LETRA %c es una voca"%c,vocal);
	break;
	case 2:printf("febrero");
	break;
	case 3:printf("marzo");
	break;
	case 4:printf("abril");
	break;
	case 5:printf("mayo");
	break;
	case 6:printf("junio");
	break;
	case 7:printf("agosto");
	break;
	case 8:printf("septiembre");
	break;
	case 9:printf("octubre");
	break;
	case 10:printf("diciembre");
	break;
	
	
}


    return 0;
}

