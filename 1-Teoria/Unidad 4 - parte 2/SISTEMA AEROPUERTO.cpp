#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
typedef asientos[8];

struct fecha
{
	int dia,mes,anio;
};

struct registro
{
	int nv;
	char destino[30];
	asientos estados[100];		
};

void ingresar(paciente a[100],int n)
{	
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nINGRESE EL CODIGO:");
		scanf("%d",&a[i].cod);
		printf("\nINGRESE EL APELLIDO:");
		_flushall();
		gets(a[i].apellido);
		printf("\nINGRESE EL NOMBRE:");
		_flushall();
		gets(a[i].nombre);
		printf("\nINGRESE EL DIA DE NACIMIENTO:");
		scanf("%d",&a[i].nac.dia);
		printf("\nINGRESE EL MES DE NACIMIENTO:");
		scanf("%d",&a[i].nac.mes);
		printf("\nINGRESE EL AÑO DE NACIMIENTO:");
		scanf("%d",&a[i].nac.anio);
		printf("\nINGRESE EL RESULTADO DEL TEST:(P=POSITIVO O N=NEGRATIVO): ");
		_flushall();
		scanf("%c",&a[i].test);
		
	}
}

int encontrar(paciente a[100],int n)
{
	int i,c;
	c=0;
	for(i=0;i<n;i++)
	{
		if(2020-a[i].nac.anio>60)
		{
			c++;
		}
	}
	return c;
}

float porcentaje(paciente a[100],int n)
{
	int i,c;
	c=0;
	float por;
	
	for(i=0;i<n;i++)
	{
		if(a[i].test=='p'||a[i].test=='P')
		{
			c++;
		}
	}
	por=c*100/n;
	return por;
}


main()
{
	registro vuelos[100];
	int i,j,n,vuelo,v_asiento,b;	
	//int n,mayores;
	//float por;
	printf("INGRESE LA CANTIDAD DE VUELOS: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		prinft("INGRESE LOS DATOS DEL REGISTRO\n");
		printf("INGRESE EL NUMERO DE VUELO:");
		scanf("%d",&reg[i].destino);
		for(j=0;j<5;j++)
		{
			strcpy(reg[i].asientos[i],"LIBRE");
			printf("ASIENTO %d: %s\n",j,reg[i].asientos[j]);
		}
	}
	
	printf("INGRESE EL NUMERO DE VUELO: ");
	scanf("%d",vuelo);
	printf("INGRESE EL NUMERO DE ASIENTO: ");
	do
	{
		scanf("%d",&v_asiento);		
	}
	while(v_asiento<0||v_asiento>4)
	
	b=0;
	for(i=0;i<n;i++)
	{
		if(vuelo==reg[i].nv)
		{
			b=1;
			if(strcmp(reg[i].asientos(v_asiento),"LIBRE")==0)
			{
				printf("\nSE REALIZA LA VENTA DEL ASIENTO %d",v_asiento);
				strcpy(reg[i],asientos(v_asiento),"OCUPADO");
			}
			else
			{
				printf("ESTA OCUPADO XD");	
			}
		}
	}
	
	if(b==0)
	{
		printf("NO ESTA DISPONIBLE ESE NUMERO DE VUELO");		
	}
	
	for(i=0;i<n;i++)
	{
		printf("INGRESE LOS DATOS DEL REGISTRO:");
		printf("");
		printf("");
		
	}
	
	printf("");
	scanf("",);

printf("\n\n");
system("pause");
}

