#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int x,e,p,p1,suma,pf,s;

main()
{
int m=0;
int ga=0;
int h=0;

printf("INGRESE CUALQUIER NUMERO SI DECEA AGREGAR UN PACIENTE, EN CASO CONTRARIO 0 PARA SALIR: ");
printf("\n");
scanf("%d",&x);
printf("\n");

while (x!=0) 
	{		
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
		
			
		printf("\n");
		printf("INGRESE CUALQUIER NUMERO SI DECEA AGREGAR UN PACIENTE, EN CASO CONTRARIO 0 PARA SALIR: ");
		printf("\n");
		scanf("%d",&x);
		printf("\n");
	}


suma= m+h;
pf= m*100/suma;	

printf("\n\t-------------------------------------------------------------\n\t");
printf("\n\nLA CANTIDAD DE HOMBRES CON GRIPE A ES DE: %d",ga);
printf ("\n\nEL PORCENTAJE DE PACIENTES MUJERES ES DE: %d",pf);
printf("%%");
printf("\n");




system("pause");
}

