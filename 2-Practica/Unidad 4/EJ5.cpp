#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

void aleatorio(int v[100]);
int prompar(int v[100],float &promediopar);
int promimp(int v[100],float &promedioimp);
int sumlugpar(int v[100],int &sumapar);
int sumlugimp(int v[100],int &sumaimp);

main()
{
    int n,v[100],i,sumapar,sumaimp;
    float promediopar,promedioimp;
    
	printf("INGRESE 1 SI CREAR EL VECTOR (0 para salir): ");
	scanf("%d",&n);
	if(n==1)
	{
		aleatorio(v);
		prompar(v,promediopar);
		printf("\nEL PROMEDIO DE NUMEROS PARES ES: %.2f",promediopar);
		
		promimp(v,promedioimp);
		printf("\nEL PROMEDIO DE NUMEROS IMPARES ES: %.2f",promedioimp);
		
		sumlugpar(v,sumapar);
		printf("\nLA SUMA DE LOS ELEMENTOS EN UN LUGAR PAR ES: %d",sumapar);
		
		sumlugimp(v,sumaimp);
		printf("\nLA SUMA DE LOS ELEMENTOS EN UN LUGAR IMPAR ES: %d\n\n",sumaimp);
		
		printf("PARA VER EL VECTOR INGRESE UN NUMERO\n\n");		
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
	int i,pri=1,ult=99;
	
	srand(time(NULL)); 
	for (i=1;i<=100;i++) 
	{
		v[i]=pri+rand()%(ult+1-pri);
	}
	
}

int prompar(int v[100],float &promediopar)
{
	int i,r;
	float sumpar=0,cont=0;
	
	for (i=1;i<=100;i++)
	{
		r=v[i]%2;
		if(r==0)
		{
			cont=cont+1;
			sumpar=sumpar+v[i];			
		}
	}
	
	promediopar=sumpar/cont;
return promediopar;
}

int promimp(int v[100],float &promedioimp)
{
	int i,r;
	float sumimp=0,cont=0;
	
	for (i=1;i<=100;i++)
	{
		r=v[i]%2;
		if(r!=0)
		{
			cont=cont+1;
			sumimp=sumimp+v[i];			
		}
	}	
	promedioimp=sumimp/cont;
return promedioimp;
}

int sumlugpar(int v[100],int &sumapar)
{
	int i,r,suma=0;
	
	for (i=1;i<=100;i++)
	{
		r=i%2;
		if(r==0)
		{
			suma=suma+v[i];			
		}
	}
	
	sumapar=suma;
return sumapar;
}

int sumlugimp(int v[100],int &sumaimp)
{
	int i,r,suma=0;
	
	for (i=1;i<=100;i++)
	{
		r=i%2;
		if(r!=0)
		{
			suma=suma+v[i];			
		}
	}
	
	sumaimp=suma;
return sumaimp;
}





