#include <stdio.h>
void imc(float peso,float est,char nombre[]);
main()
{
	printf("Programa que valida el IMC con su peso y estatura de una persona y muestra el estado de masa corporal en el que esta, por medio de funciones\n");
	char nombre[20];
	float peso, est;
	printf("Ingresa tu nombre: ");
    scanf("%s",nombre);
	printf("Ingresa tu peso en (kg): ");
	scanf("%f",&peso);
	printf("Ingresa tu estatura en (m): ");
	scanf("%f",&est);
	imc(peso,est,nombre);
}
void imc (float peso,float est, char nombre[])
{
	char genero;
	float Rimc;
	FILE *archivo;
	Rimc=peso/(est*est);
	printf("Eres hombre o mujer: ");
	fflush(stdin);
	scanf("%c",&genero);
	if(genero=='H' || genero=='h')
	{
		if(Rimc<20)
		{
			printf("Peso bajo\n");
			archivo = fopen("peso_bajo.txt","a");
            fprintf(archivo,"%s\n",nombre);
		}
			
		if(Rimc>=20 && Rimc<=25)
		{
			printf("Tienes el peso normal\n");
			archivo = fopen("peso_normal.txt","a");
            fprintf(archivo,"%s\n",nombre);
		}
			
		if(Rimc>=26 && Rimc<=30)
		{
			printf("Usted tiene sobrepeso\n");
			archivo = fopen("sobrepeso.txt","a");
            fprintf(archivo,"%s\n",nombre);
		}
			
	}
	else
	{
		if(genero=='M'|| genero=='m')
		{
			if(Rimc<19)
			{
				printf("Peso bajo\n");
			 	archivo = fopen("peso_bajo.txt","a");
           		fprintf(archivo,"%s\n",nombre);
			}
				
			if(Rimc>=19 && Rimc<=24)
			{
				printf("Tienes el peso normal\n");
				archivo = fopen("peso_normal.txt","a");
           		fprintf(archivo,"%s\n",nombre);
			}
				
			if(Rimc>=25 && Rimc<=30)
			{
				printf("Usted tiene sobrepeso\n");
				archivo = fopen("sobrepeso.txt","a");
           		fprintf(archivo,"%s\n",nombre);
			}
				
		}
	}
	
	
}
  



