#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

/*En un Hospital se realiza una investigación para determinar las patologías respiratorias en época invernal de un grupo no determinado de pacientes. A tal efecto se cargan
los siguientes datos:
a. EDAD
b. SEXO (1 = Masculino, 2= Femenino).
c. PATOLOGÍA (0 = Gripe Estacional, 1 = Gripe A, 2 = Neumonía, 3 = Bronquitis).
La cantidad de personas de sexo masculino que padecen Gripe A.
El porcentaje de personas del sexo femenino*/

main ()
{
	int x,e,s,p;
	int cga=0;
	float pf=0;
	int f=0;
	int m=0;
	int suma;
	
	
	printf("\nINGRESE 1 SI DESEA AGREGAR PACIENTES,CASO CONTRARIO INGRESE 0\n");
	scanf("%d",&x);
	
	while (x!=0)
	{
		printf("\nINGRESE LA EDAD DEL PACIENTE\n");
		scanf ("%d",&e);
		
		printf ("\nINGRESE 1 SI ES SEXO MASCULINO, SI ES FEMENINO INGRESE 2\n");
		scanf ("%d",&s);
		
		
		if (s==1)
		{
			m=m+1;
			
		printf ("\nINGRESE 0 SI POSEE GRIPE ESTACIONAL, INGRESE 1 SI POSEE GRIPE A, INGRESE 2 SI POSEE NEUMONIA, INGRESE 3 SI POSEE BRONQUITIS\n");
		scanf ("%d",&p);
		
		          if (p==1)
		             {
		              	cga=cga+1;
	                	}
		
		} else
		
		{
				printf ("\nINGRESE 0 SI POSEE GRIPE ESTACIONAL, INGRESE 1 SI POSEE GRIPE A, INGRESE 2 SI POSEE NEUMONIA, INGRESE 3 SI POSEE BRONQUITIS\n");
		scanf ("%d",&p);
			
		f=f+1;
		}
			printf("\nINGRESE 1 SI DESEA AGREGAR PACIENTES,CASO CONTRARIO INGRESE 0\n");
	scanf("%d",&x);
		
		}
		
		suma= m+f;
		pf= f*100/suma;
		
		printf("\n\t-------------------------------------------------------------\n\t");
		
		printf("\n\nla cantidad de hombres con gripe a es de : %d",cga);
		
		printf ("\n\nel porcentaje de pacientes mujeres es de:% %2.f",pf);
		
	}

