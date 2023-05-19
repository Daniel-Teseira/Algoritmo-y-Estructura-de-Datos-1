#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int c,n,vh,ht,s,j,os,stp,st1,st2,p;

main()
{
c=0;
printf("INGRESE LA CANTIDAD DE EMPLEADOS:");
printf("\n");
scanf("%d",&n);
printf("\n");

while (c<n)
	{	
		printf("\n");
		printf("INGRESE EL VALOR DE CADA HORA:");
		printf("\n");
		scanf("%d",&vh);
		printf("\n");
		printf("INGRESE LA CANTIDAD DE HORAS TRABAJADAS:");
		printf("\n");
		scanf("%d",&ht);
		printf("\n");
		if (ht==0)
		{
			printf("EL EMPLEADO NO TRABAJO:");
		}
		else
			{
				s=ht*vh;
				j=(11*s)/100;
				os=(3*s)/100;
				
				if (ht>60)
				{
					p=(5*s)/100;//premio
				
					stp=s+p;//sueldo mas premio
				
					st1=stp-j-os;//sueldo total a cobrar
				
					printf("EL SUELDO ES DE: ");
					printf("\n");
					printf("$%d",s);
				
					printf("\n");
					printf("EL PREMIO ES DE: ");
					printf("\n");
					printf("$%d",p);
					
					printf("\n");
					printf("LA JUBILACION ES: ");
					printf("\n");
					printf("$%d",j);
					
					printf("\n");
					printf("LA OBRA SOCIAL ES: ");
					printf("\n");
					printf("$%d",os);
					
					printf("\n");
					printf("EL SUELDO TOTAL ES: ");
					printf("\n");
					printf("$%d",st1);
					printf("\n");
					
				}
				else
					{
						st2=s-j-os; //sueldo dos
					
						printf("EL SUELDO ES DE: ");
						printf("\n");
						printf("$%d",s);
						
						printf("\n");
						printf("LA JUBILACION ES: ");
						printf("\n");
						printf("$%d",j);
						
						printf("\n");
						printf("LA OBRA SOCIAL ES: ");
						printf("\n");
						printf("$%d",os);
						
						printf("\n");
						printf("EL SUELDO TOTAL ES: ");
						printf("\n");
						printf("$%d",st2);
						printf("\n");	
						
					}
					
			}
		c=c+1;		
	}
printf("\n");
system("pause");
printf("\n");
}

