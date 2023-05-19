#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int e,leg,c;

main()
{
int isi=0;
int mec=0;
int elec=0;


printf("INGRESE LA CANTIDAD DE EGRESADOS");
printf("\n");
scanf("%d",&e);

for (int i=0 ; i<e ; i=i+1)
	{
		printf("\n\INGRESE EL LEGAJO DEL ALUMNO: ");
		scanf("%d",&leg);
		
		printf("\nINGRESE EL NUMERO CORRESPONDIENTE A LA CARRERA: ");	
		printf("\n\n1--> ISI");
		printf("\n2--> MECANICA");
		printf("\n3--> ELECTRICA");
		printf("\nOPCION: ");
		scanf("%d",&c);
		
		if (c==1)
		{
			isi=isi+1;
		}
		else
		{
			if (c==2)
			{
				mec=mec+1;
				
			}
			else
			{
				elec=elec+1;
			}
		}
	}

	int suma=isi+elec+mec;
	float pelec=elec*100/suma;
	float pisi=isi*100/suma;
	float pmec=mec*100/suma;
	
	printf("\nLA CANTIDAD DE ALUMNOS EGRESADOS DE LA CARRERA DE ISI:       %d",isi);
	printf("\nLA CANTIDAD DE ALUMNOS EGRESADOS DE LA CARRERA DE MECANICA:  %d",mec);
	printf("\nLA CANTIDAD DE ALUMNOS EGRESADOS DE LA CARRERA DE ELECTRICA: %d",elec);
	
	printf("\n");
	printf("\nEL PORCENTAJE DE EGRESADOS EN LA CARRERA DE ISI ES DE:       %2.f",pisi);
	printf("%%");
	printf("\nEL PORCENTAJE DE EGRESADOS EN LA CARRERA DE MECANICA ES DE:  %2.f",pmec);
	printf("%%");
	printf("\nEL PORCENTAJE DE EGRESADOS EN LA CARRERA DE ELECTRICA ES DE: %2.f",pelec);
	printf("%%");
	printf("\n");



system("pause");
}

