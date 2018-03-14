
#include <stdio.h>

main()
{
int a,b,c;

printf("INGRESE un numero\n");
scanf("%d",&a);
printf("cantidad otro numero \n");
scanf("%d",&b);

printf("cantidad otro numero \n");
scanf("%d",&c);

if(a>b && a>c)
printf("el numero mayor es %d\n",a);
else
if(b>a && b>c)
printf("el numero mayor es %d\n",b);
else
if(c>b && c>a)

printf("el numero mayor es %d\n",c);


return 0;
}







