#include <stdio.h>

main()
{
int a,b,c,d;

printf("INGRESE un numero\n");
scanf("%d",&a);
printf("INGRESE un numero\n");
scanf("%d",&b);
printf("INGRESE un numero\n");
scanf("%d",&c);
printf("INGRESE un numero\n");
scanf("%d",&d);

if(d==a && d==b)
printf("el numero conside %d\n",d);
if(d=c && a==b)
printf("el numero conside %d\n",d);
else
printf("el numero no coinside %d\n",d);
if(a==c && a==d)
printf("el numero conside %d\n",d);
else
printf("el numero no coinside %d\n",d);
if(b==a && b==c)
printf("el numero conside %d\n",d);
else
printf("el numero no coinside %d\n",d);


return 0;
}





