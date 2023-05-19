#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int porcentaje(int x,float &porp);

main()
{
 	int x,num,contn1=0;
	float porp;
	
	printf("INGRESE NUMEROS, 0 PARA TERMINAR: ");
	scanf("%d",&num);	
	while(num!=0)
	{	
		x=num;
		porcentaje(x,porp);
		printf("INGRESE NUMEROS, 0 PARA TERMINAR: ");
		scanf("%d",&num);	
					
	}
		
	printf("\nEL PORCENTAJE DE NUMEROS PARES ES: %.2f",porp);
	printf("\n");

	
	
system("pause");
}

int porcentaje(int x,float &porp)
{
	int pares,contp1,x1,contn1=0;
	int contp=0;//contador de pares
	
	contn1=contn1+1;
	pares=x%2;
	if(pares==0)
		{
			contp=contp+1;
		}
	
	while(x==0)
	{
		porp=(contp*100)/contn1;
		return porp;
	}
}










