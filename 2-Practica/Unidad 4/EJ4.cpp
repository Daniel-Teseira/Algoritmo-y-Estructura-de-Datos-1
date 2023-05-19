#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

void aleatorio(int v[100]);
int multiplos(int v[100],int k,int &resultado);

main()
{
    int n,v[100],k,resultado,i;
	printf("INGRESE 1 SI CREAR EL VECTOR (0 para salir): ");
	scanf("%d",&n);
	if(n==1)
	{
		aleatorio(v);
		printf("\nINGRESE UN VALOR PARA EXTRAER SUS MULTIPLOS: ");
		scanf("%d",&k);
		
		multiplos(v,k,resultado);
		printf("LA CANTIDAD DE MULTIPLOS DE %d SON: %d",k,resultado);
		printf("\n\n*PRESIONE UNA TECLA PARA VER EL ARREGLO COMPLETO\n\n");
		system("pause");
		
		for (i=1;i<=100;i++)
		{
			printf("\n v[%d]= %d\n\n",i,v[i]);
		}
			
	}
	else
	{
		printf("\n\t************************************************************");
		printf("*\n\t*  USTED NO DESEA AGREGAR NUMEROS, HASTA PRONTO PAPURRI!!!  *");
		printf("\n\t*************************************************************\n\n");
	}
	
system("pause");	
}

void aleatorio(int v[100])
{
	int i,pri=100,ult=432;
	
	srand(time(NULL)); 
	for (i=1;i<=100;i++) 
	{
		v[i]=pri+rand()%(ult+1-pri);
	}
	
}

int multiplos(int v[100],int k,int &resultado)
{
	int i,r,cont=0;
	
	for (i=1;i<=100;i++)
	{
		r=v[i]%k;
		if(r==0)
		{
			cont=cont+1;
		}
	}
	resultado=cont;
	return resultado;
}










