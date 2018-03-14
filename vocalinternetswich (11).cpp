#include <stdio.h>
#include <iostream>
using namespace std;


void cubodeunnumero (){
	int num1,res;
 printf("Programa que eleva un numero al cubo.n");
 printf("numero: ");
 scanf("%d",&num1);
 res=num1*num1*num1;
 printf("Resultado: %d",res);
  
}
void numeropareimpar (){
	int a,b;

printf("INGRESE un numero\n");
scanf("%d",&a);


if(a/2==0)
printf("el numero mayor par %d\n",a);
else

printf("el numero es impar %d\n",b);


}


void menu(){
	int opcion=0;
	while (opcion!=3){
		system("cls");
		cout<<"menu"<<endl;
		cout<<"1.cubodeunnumero"<<endl;
		cout<<"2.numeropareimpar"<<endl;
		cout<<"3.salir"<<endl;

switch (opcion){
	case 1:printf("cubodeunnumero");
	break;
	case 2:printf("numeropareimpar");
	break;
	case 3:printf("salir");
	break;

}

		}
	}
int main (){
	menu();

}
	

