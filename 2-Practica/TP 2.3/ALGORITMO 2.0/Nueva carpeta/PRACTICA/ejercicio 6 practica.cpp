#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>

main ()
{
	int sm=0;
	int sf=0;
	int sfe=0;
	int sma=0;
	int n,e,d,s;
	
	printf("\nINGRESAR NUMERO DE SOCIO: ");
	scanf("%d",&n);
	
	while (n!=0)
	{
		printf("\nINGRESAR LA EDAD: ");
		scanf("%d",&e);
		
		if (e<16)
		{
			sm=sm+1;
		}
		
		printf ("\n\nINGRESE 1 SI REALIZA FUTBOL, INGRESE 2 SI REALIZA NATACION, INGRESE 3 SI REALIZA HOCKEY: ");
		scanf ("%d",&d);
		
		if (d==1)
		{
			printf("\n\t-->USTED REALIZA FUTBOL");
			if(e>=30 and e<=50)
			{
				sf=sf+1;
			}
		}
		else 
		{
			if (d==2)
			{
				printf("\n\t--->USTED REALIZA NATACION");
				
			}
			else 
			{
				printf("\n\t-->USTED REALIZA HOCKEY");
			
			}
		}
		
		printf("\n\nINGRESE EL SEXO, 1 SI ES MASCULINO, 2 SI ES FEMENINO:  ");
		scanf("%d",&s);
		
		if (s==1)
		{
			sfe=sfe+1;
		}
		else
		{
			sma=sma+1;
			
		}
		
			printf("\nINGRESAR NUMERO DE SOCIO: ");
	        scanf("%d",&n);
		
		
	}
	
	printf("\n\n\t-----------------------------------------------------\n\n");
	printf("\n--> LOS SOCIOS QUE PRACTICAN FUTBOL ENTRE 30 Y 50N AÑOS DE EDAD SON: %d",sf);
	printf("\n--> LA CANTIDAD DE SOCIOS FEMENINOS EN EL CLUB ES DE: %d",sma);
	printf("\n--> LA CANTIDAD DE SOCIOS MASCULINOS EN EL CLUB ES DE: %d ",sfe);
	printf("\n--> LA CANTIDAD DE SOCIOS MENORES DE 16 ES DE: %d\n",sm);
	
	system("pause");
}
