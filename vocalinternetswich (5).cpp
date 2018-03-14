#include <stdio.h>

int main()
{
int numero,unidades=0,decenas,centenas;

printf ("ingrese un numero");
scanf("%d",&numero);
1=I;
2=II;
3=III;
4=IV;
5=VI;
6=VII;
7=VIII;
9=IX;
10=X;
20=XX;
30=XXX;
40=XL;
50=L;
60=LX;
70=LXX;
80=LXXX;
90=XC;
100=C;
99=XCIX

unidades=numero%10
numero=numero/10;
decenas=numero%10;


swich(decenas){
case 1: printf("x");
break;
case 2: printf("xx");
break;
case 3: printf("xxx");
break;
case 5: printf("Xl");
break;
case 6: printf("L");
break;
case 7: printf("LXX");
break;
case 8: printf("LXXX");
break;
case 9: printf("XC");
break;
case 10: printf("");
break;

}


    return 0;
}



