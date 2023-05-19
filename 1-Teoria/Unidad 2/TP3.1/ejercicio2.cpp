#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	
int x,y,j,os,p,stp,st1,s,st2;

printf("INGRESE EL VALOR DE LA HORA: ");
printf("\n");
scanf("%d",&x);

printf("INGRESE LA CANTIDAD DE HORAS TRABAJADAS: ");
printf("\n");
scanf("%d",&y);

s=x*y; //sueldo

j=(11*s)/100; //jubilado

os=(3*s)/100; //obra social

if (y==0)
{
	printf("\nNO TRABAJO\n");
}
else 
{

		if (y>60)
			{
				
			p=(5*s)/100; //premio
			
			stp=s+p;//sueldo mas premio
			
			st1=stp-j-os;
			
			printf("EL SUELDO ES DE: ");
			printf("\n");
			printf("%d",s);
			
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
				st2=s-j-os; //sueldo dos
				
				printf("EL SUELDO ES DE: ");
				printf("\n");
				printf("%d",s);
				
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

