#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int x,e,p,p1,suma,pf,s;

main()
{
int m=0;
int ga=0;
int h=0;

printf("INGRESE LA CANTIDAD DE PACIENTES: ");
printf("\n");
scanf("%d",&x);

for (int i=0 ; i<=x ; i=i+1) 
	{		
		printf("\n");
		printf("INGRESE LA EDAD DEL PACIENTE: ");
		printf("\n");
		scanf("%d",&e);
		printf("\n");
		
		printf("INGRESE 1 SI ES HOMBRE O 0 SI ES MUJER: ");
		printf("\n");
		scanf("%d",&s);
		printf("\n");
		
		if (s==1)
			{
				h=h+1;
				printf("INGRESE 0 SI POSEE GRIPE ESTACIONAL, INGRESE 1 SI POSEE GRIPE A, INGRESE 2 SI POSEE NEUMONIA, INGRESE 3 SI POSEE BRONQUITIS : ");
				printf("\n");
				scanf("%d",&p);
				
				if (p==1) 
					{
						ga=ga+1;
					}
			}
		else
			{
				m=m+1;
				printf("INGRESE 0 SI POSEE GRIPE ESTACIONAL, INGRESE 1 SI POSEE GRIPE A, INGRESE 2 SI POSEE NEUMONIA, INGRESE 3 SI POSEE BRONQUITIS : ");
				printf("\n");
				scanf("%d",&p1);
				printf("\n");
				
				
			}
	
	}


suma= m+h;
pf= m*100/suma;	

printf("\n\t-------------------------------------------------------------\n\t");
printf("\nLA CANTIDAD DE HOMBRES CON GRIPE A ES DE: %d",ga);
printf ("\nEL PORCENTAJE DE PACIENTES MUJERES ES DE: %d",pf);
printf("%%");
printf("\n\n");




system("pause");
}

