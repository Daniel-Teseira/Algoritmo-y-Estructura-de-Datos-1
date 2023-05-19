#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int vector(int n,int v[100],int &num);
int NUM(int n,int v[100],int k,bool &x,int num,int &cont);

main()
{
    int num,n,v[100],k,i,cont;
    bool x;
    
    
	printf("INGRESE 1 SI DECEA AGREGAR NUMEROS AL VECTOR (0 para terminar de ingresar): ");
	scanf("%d",&n);
	if(n==1)
	{
		vector(n,v,num);
		printf("\nLA CANTIDAD DE NUMEROS INGRESADOS SON: %d",num);
		
		printf("\nINGRESE EL NUMERO QUE DESEA BUSCAR: ");
		scanf("%d",&k);
		NUM(n,v,k,x,num,cont);
		if(x==true)
		{
			printf("\nEL NUMERO SI ESTA EN EL VECTOR\n");
			if(cont!=1)
			{
				printf("EL NUMERO SE REPITE %d veces\n",cont);
			}	
		}
		else
		{
			printf("EL NUMERO NO NO ESTA EN EL VECTOR\n\n");
		}
	}
	else
	{
		printf("\n\t****************************************************");
		printf("*\n\t*  USTED NO DESEA AGREGAR NUMEROS, HASTA PRONTO!!!  *");
		printf("\n\t*****************************************************\n\n");
	}
system("pause");
}

int vector(int n,int v[100],int &num)
{
   int c,cont=0,i=0;
		do
		{
			i=i+1;
			printf("INGRESE EL NUMERO: ");
		    scanf("%d",&v[i]);        
		}
		while(v[i]!=0);
	
		for(c=1;c<=i-1;c++)
	    {
	    	cont=cont+1;
	    }
	
 num=cont;
 return num;         
}

int NUM(int n,int v[100],int k,bool &x,int num,int &cont)
{
	int i,b,cont1=0;
	
	for(i=1;i<=num;i++)
	{
		if (v[i]==k)
		{
			x=true;
			cont1=cont1+1;
			b=1;
		}
	}
	if(b==0)	
	{
		x=false;
	}
cont=cont1;		
return x,cont;
}








