#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void menmay(int n,int v[100],int &menor,int &mayor);
void vector(int n,int v[100]);
int promedio(int n,int v[100],float &resultado);
int supprom(int n,int v[100],float resultado,float &sup);
void p(int n,int v[100],int &aprobados,int &desaprobados);

main()
{
    int n,leg,v[100],mayor,menor,aprobados,desaprobados;
    float resultado,sup;
 	
	printf("INGRESE LA CANTIDAD DE ALUMNOS: ");
	scanf("%d",&n);
	printf("\n");
	
	vector(n,v);
	
	menmay(n,v,menor,mayor);	
	printf("\n\t*LA MAYOR NOTA ES: %d\n",mayor);
	printf("\n\t*LA MENOR NOTA ES: %d\n",menor);
	
	promedio(n,v,resultado);
	printf("\n\t*EL PROMEDIO DE LAS NOTAS ES: %.2f",resultado);
	
	supprom(n,v,resultado,sup);
	printf("\n\nLA CANTIDAD DE NOTAS SUPERIORES AL PROMEDIO SON: %.0f",sup);
	
	p(n,v,aprobados,desaprobados);
	printf("\nLA CANTIDAD DE ALUMNOS APROBADOS SON: %d",aprobados);
	printf("\nLA CANTIDAD DE ALUMNOS DESAPROBADOS SON: %d",desaprobados);
	printf("\n");
	
system("pause");
}

void vector(int n,int v[100])
{
	int i,nota,cont=1;
	
	for (i=1;i<=n;i++)
	{
		printf("INGRESE LA NOTA DEL ALUMNO (%d): ",i);
		scanf("%d",&nota);
		if(nota>=1 and nota<=10)
		{
			v[i]=nota;
		}
		else
		{
			printf("LA NOTA DEBE ESTAR ENTRE 1 Y 10\n");
			i=i-1;	
			system("pause");
		}
	}
}

void menmay(int n,int v[100],int &menor,int &mayor)
{
	int b=0,i,c,aux;	
	
	do
	{
		b=0;
		for (i=1;i<=n-1;i++)
		{
			if (v[i]<v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				b=1;
			}
		}
	}
	while (b==1);

/*for (i=1;i<=n;i++)
	{
		printf("\n v[%d]= %d\n\n",i,v[i]);
	}
*/
menor=v[n];
mayor=v[1];
}

int promedio(int n,int v[100],float &resultado)
{
	int i;
	float res=0;
	
	for (i=1;i<=n;i++)
	{
		res=res+v[i];
	}
	resultado=res/n;	
return resultado;	
}

int supprom(int n,int v[100],float resultado,float &sup)
{
	int cont,i;
	
	for (i=1;i<=n;i++)
	{
		if(v[i]>resultado)
		{
			cont=cont+1;
		}
	}
sup=cont;
return sup;
}

void p(int n,int v[100],int &aprobados,int &desaprobados)
{
	int ap=0,des=0,i;
	
	for (i=1;i<=n;i++)
	{
		if(v[i]>=6)
		{
			ap=ap+1;
		}
		else
		{
			des=des+1;
		}
	}
aprobados=ap;
desaprobados=des;
}



