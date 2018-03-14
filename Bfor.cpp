#include <stdio.h>
int main()
{
	float temperatura, suma_temperatura=0, temperatura_media=0, temperatura_alta=0 ,temperatura_baja=999;
	
	printf("Registrar las temperaturas presentadas durante el dia\n");
	
	for(int i=0; i<24; i+=4){
		printf("Digite las temperaturas: %d:" , i);
		scanf("%f",&temperatura);
		suma_temperatura = suma_temperatura + temperatura;
		if(temperatura>temperatura_alta){
			temperatura_alta=temperatura;
			
		}
		if (temperatura<temperatura_baja){
			temperatura_baja=temperatura;
		}
	}
	
	temperatura_media=suma_temperatura/6;
	printf("la temperatura media es: %1.1f\n", temperatura_media);
	printf("la temperatura media es: %1.1f\n", temperatura_baja);
	printf("la temperatura media es: %1.1f\n", temperatura_alta);
	return 0;
}
	
	
	
	
	
	return 0;
}

