#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>

main()
{
	int isi=0;
	int mec=0;
	int elec=0;
	int a,leg,n,c;
	
	printf("\ningrese a cantidad de alumnos: ");
	scanf("%d",&n);
	
	printf("\n\t-------------------------------------------------------------------\n");
	
	for (int i=0 ; i<=n ; i=i+1)
	{
		printf("\n\ningrese el legajo del alumno: ");
		scanf("%d",&leg);
		
		printf("\ningrese el numero correspondido a la Carrera: ");	
		printf("\n\n1--> ISI");
		printf("\n2--> MECANICA");
		printf("\n3--> ELECTRICA");
		printf("\nopcion: ");
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
	
	printf("\n\t-------------------------------------------------------------------\n");
	printf("\nla cantidad de alumnos egresados en la carrera ISI: %d",isi);
	printf("\nla cantidad de alumnos egresados en la carrera ELECTRICA: %d",elec);
	printf("\nla cantidad de alumnos egresados en la carrera MECANICA: %d",mec);
	
	printf("\n\t-------------------------------------------------------------------\n");
	printf("\nel porcentaje de egresados en la cerreas ISI es de : %2.f",pisi);
	printf("\nel porcentaje de egresados en la cerreas ELECTRICA es de : %2.f",pelec);
	printf("\nel porcentaje de egresados en la cerreas MECANICA es de : %2.f\n",pmec);
	
	system("pause");
	
	
}
