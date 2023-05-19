#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct datos
{
	int exp;
	char nom[25];
	float metros;
	int obra;
	int dia,mes,anio;
	float monto;		
};

main()
{
	datos v[10];
	char o[10];
	int n,i;
		printf("\t\tBIENVENIDO\n");
		printf("**************************************************************");
		printf("\nINGRESE LA CANTIDAD DE VENDEDORES A CARGAR: ");	
		scanf("%d",&n);
		printf("**************************************************************");
		if(n>0)
		{
			for(i=0;i<n;i++)
			{
				//printf("\n");
				printf("\n%d=> INGRESE LOS DATOS DEL VENDEDOR: \n",i+1);	
				printf("  _NUMERO DE EXPEDIENTE: ");
				scanf("%d",&v[i].exp);
				printf("  _APELLIDO Y NOMBRE: ");
				_flushall();
				gets(v[i].nom);
				printf("  _METROS CUADRADOS CONSTRUIDOS: ");
				scanf("%f",&v[i].metros);				
				printf("  _TIPO DE OBRA (VIVIENDA BASICA:0, VIVIENDA DE LUJO 1, EDIFICIO:2, PREDIO ESPECIAL:3):");
				scanf("%d",&v[i].obra);
				if(v[i].obra>=4||v[i].obra<0)
				{
					printf("\nEL NUMERO INGRESADO ES INCORRECTO\n");
				}
				printf("  _DIA DE INGRESO: ");
				scanf("%d",&v[i].dia);
				printf("  _MES DE INGRESO: ");
				scanf("%d",&v[i].mes);
				printf("  _ANIO DE INGRESO: ");
				scanf("%d",&v[i].anio);
				printf("  _MONTO MONETARIO: ");
				scanf("%f",&v[i].monto);				
			}
		}
		
		//PUNTO C
		printf("\nMUESTRA\n");
		for(i=0;i<n;i++)
		{
			printf("\n**************************************************************");
			printf("\n%d=> CLIENTE: ",i+1);
			printf("\nEXPEDIENTE: %d",v[i].exp);
			printf("\nPROPIETARIO: %s",v[i].nom);
			if(v[i].obra==0)
			printf("\nTIPO DE OBRA: VIVIENDA BASICA");
			if(v[i].obra==1)
			printf("\nTIPO DE OBRA: VIVIENDA LUJO");
			if(v[i].obra==2)
			printf("\nTIPO DE OBRA: EDIFICIO");
			if(v[i].obra==3)
			printf("\nTIPO DE OBRA: PREDIO ESPECIAL");
			
			printf("\nFECHA\t\t\tMONTO");
			printf("\n----------------------------------------");
			printf("\n%d/%d/%d\t\t%.2f",v[i].dia,v[i].mes,v[i].anio,v[i].monto);
			//printf("\n**************************************************************");
		}
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

