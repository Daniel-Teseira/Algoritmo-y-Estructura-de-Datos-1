#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void sueldo(int x,int y,int &salario,int &j,int &os,int &p,int &stp,int &st1,int &st2);

main()
{
	
int x,y,stp,st1,st2,salario,j,os,s,p;

printf("INGRESE EL VALOR DE LA HORA: ");
printf("\n");
scanf("%d",&x);

printf("INGRESE LA CANTIDAD DE HORAS TRABAJADAS: ");
printf("\n");
scanf("%d",&y);

sueldo(x,y,salario,j,os,p,stp,st1,st2);

if (y==0)
{
	printf("\nEL SUELDO= %d\n\n",salario);
}
else 
{

		if (y>60)
			{
			
			printf("EL SUELDO ES DE: ");
			printf("\n");
			printf("%d",salario);
			
			printf("\n");
			printf("EL PREMIO ES DE: ");
			printf("\n");
			printf("%d",p);
			
			printf("\n");
			printf("LA JUBILACION ES: ");
			printf("\n");
			printf("%d",j);
			
			printf("\n");
			printf("LA OBRA SOCIAL ES: ");
			printf("\n");
			printf("%d",os);
			
			printf("\n");
			printf("EL SUELDO TOTAL ES: ");
			printf("\n");
			printf("%d",st1);
			printf("\n");
			
    		}
		else
			
			{			
				
				
				printf("EL SUELDO ES DE: ");
				printf("\n");
				printf("%d",salario);
				
				printf("\n");
				printf("LA JUBILACION ES: ");
				printf("\n");
				printf("%d",j);
				
				printf("\n");
				printf("LA OBRA SOCIAL ES: ");
				printf("\n");
				printf("%d",os);
				
				printf("\n");
				printf("EL SUELDO TOTAL ES: ");
				printf("\n");
				printf("%d",st2);
				printf("\n");
				
			}
}
	
			
system("pause");

}

void sueldo(int x,int y,int &salario,int &j,int &os,int &p,int &stp,int &st1,int &st2)
{
	int s;
	salario=x*y; 						//sueldo
	j=(11*salario)/100; 				//jubilado
	os=(3*salario)/100;					//obra social
	s=salario;	
	if (y>60)
		{
			p=(5*s)/100; 				//premio
			stp=s+p;					//sueldo mas premio
			st1=stp-j-os;				//sueldo mas premio - jubilacion - obra social
		}
	else 
	{
		st2=s-j-os; 					//sueldo dos
	}
	
}






