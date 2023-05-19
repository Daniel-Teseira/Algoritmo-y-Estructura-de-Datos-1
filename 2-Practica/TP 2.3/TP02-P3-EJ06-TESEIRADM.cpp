#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int n,e,ns,s;
//float ;

main()
{
int m=0;
int f=0;
int sf=0;
int sm=0;

printf("INGRESE NUMERO DE SOCIO (0 para salir): ");
printf("\n");
scanf("%d",&ns);
printf("\n");

while (ns!=0)
	{
		printf("INGRESE LA EDAD: ");
		printf("\n");
		scanf("%d",&e);
		printf("\n");
		
			if (e<16) 
				{
					m=m+1;		
				}
	
		printf("INGRESE 1 SI REALIZA FUTBOL, INGRESE 2 SI REALIZA NATACION, INGRESE 3 SI REALIZA HOCKEY: ");
		printf("\n");
		scanf("%d",&n);
		printf("\n");
	
			if (n==1)
				{
				if (e>=30 and e<=50)
					{
						f=f+1;			
					}
				}
		printf("INGRESE 1 SI ES MASCULINO, 2 SI ES FEMENINO:  ");
		printf("\n");
		scanf("%d",&s);
		
			if (s==1)
				{
					sm=sf+1;
				}
			else 
				{	
					sf=sm+1;
				}
						
		printf("\n");
		printf("INGRESE NUMERO DE SOCIO (0 para salir): ");
		printf("\n");
		scanf("%d",&ns);
		printf("\n");
	}

printf("\n");
printf("LOS SOCIOS QUE PRACTICAN FUTBOL ENTRE 30 Y 50 AÑOS SON: %d",f);
printf("\n");

printf("LA CANTIDAD DE SOCIOS FEMENINOS EN EL CLUB SON: %d",sf);
printf("\n");

printf("LA CANTIDAD DE SOCIOS MASCULINOS EN EL CLUB SON: %d",sm);
printf("\n");

printf("LA CANTIDAD DE SOCIOS MENORES DE 16 ES DE: %d",m);
printf("\n");

system("pause");
}

