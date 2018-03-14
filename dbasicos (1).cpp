
#include <stdio.h>

main()
{
int i,tabla,mult;

printf("Que tabla deseas realizar\n");
scanf("%d",&tabla);
for(i=1;i<=10;i++)
{
mult=tabla*i;
printf("%d x %d = %d\n",tabla,i,mult);
}
return 0;
}


