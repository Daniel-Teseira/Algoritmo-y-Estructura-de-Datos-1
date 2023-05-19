#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct fecha
{
	int dia,mes,anio;
};

struct notas
{
	float pri,seg,ter;
	//float prom;
};

struct datos
{
	int dni;
	char apenom[25];
	fecha nac;
	notas nota;
		
};


main()
{	
	datos v[10];
	float prom[10],aux;
	int n,i,x=0;
	
	printf("\t\tBIENVENIDO\n");
	printf("**************************************************************");
	printf("\nINGRESE LA CANTIDAD DE ALUMNOS A CARGAR: ");	
	scanf("%d",&n);
	printf("**************************************************************");
	for(i=0;i<n;i++)
	{
		/*
		printf("\nINGRESE EL DOCUMENTO: ");
		scanf("%d",&v[i].dni);
		printf("INGRESE EL APELLIDO Y NOMBRE: ");
		_flushall();
		gets(v[i].apenom);
		printf("INGRESE EL DIA DE NACIMIENTO: ");
		scanf("%d",&v[i].nac.dia);
		printf("INGRESE EL MES DE NACIMIENTO: ");
		scanf("%d",&v[i].nac.mes);
		printf("INGRESE EL ANIO DE NACIMIENTO: ");
		scanf("%d",&v[i].nac.anio);*/
		printf("INGRESE LA NOTA DEL PRIMER TRIMESTRE: ");
		scanf("%f",&v[i].nota.pri);
		printf("INGRESE LA NOTA DEL SEGUNDO TRIMESTRE: ");
		scanf("%f",&v[i].nota.seg);
		printf("INGRESE LA NOTA DEL TERCER TRIMESTRE: ");
		scanf("%f",&v[i].nota.ter);
		aux=(v[i].nota.pri+v[i].nota.seg+v[i].nota.ter)/3;
		prom[i]=aux;
	}
	
	for(i=0;i<n;i++)
	{
		/*
		printf("\nINGRESE EL DOCUMENTO: %d",v[i].dni);
		printf("\nINGRESE EL APELLIDO Y NOMBRE: %s",v[i].apenom);
		printf("\nINGRESE EL DIA DE NACIMIENTO: %d",v[i].nac.dia);
		printf("\nINGRESE EL MES DE NACIMIENTO: %d",v[i].nac.mes);
		printf("\nINGRESE EL ANIO DE NACIMIENTO: %d",v[i].nac.anio);
		*/
		printf("\nINGRESE LA NOTA DEL PRIMER TRIMESTRE: %.2f",v[i].nota.pri);
		printf("\nINGRESE LA NOTA DEL SEGUNDO TRIMESTRE: %.2f",v[i].nota.pri);
		printf("\nINGRESE LA NOTA DEL TERCER TRIMESTRE: %.2f",v[i].nota.pri);
		printf("\nPROMEDIO: %.2f",prom[i]);
		if(prom[i]>=8)
		{
			x++;
		}
	}
	printf("\nLA  CANTIDAD DE ALUMNOS CON PROMEDIO MAYOR A 8 ES= %d",x);

printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

