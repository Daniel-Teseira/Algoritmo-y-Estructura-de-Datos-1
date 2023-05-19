#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//int ;
float x,vt,g,ib,gt,ing,gcias,p;

main()
{

printf("INGRESE UN NUMERO SI DECEA CONTINUAR (0 para salir): ");
printf("\n");
scanf("%f",&x);
printf("\n");

while (x!=0)

	{
		printf("INGRESE TOTAL DE VENTAS: ");
		printf("\n");
		scanf("%f",&vt);
		printf("\n");
		
		printf("INGRESE GASTOS: ");
		printf("\n");
		scanf("%f",&g);
		printf("\n");
		
		ib=vt*0.25;
		gt=ib+g;
		
		if (vt>gt)
			{
				gcias=vt-gt;
				printf("\n");
				printf("TOTAL DE VENTAS: $ %.2f",vt);
				printf("\n");
				printf("\t-INGRESOS BRUTOS: $ %.2f",ib);
				printf("\n");	
				printf("\t-GASTOS: $ %.2f",g);
				printf("\n");
				printf("\TOTAL DE GASTOS: $ %.2f",gt);
				printf("\n");
				printf("TUVO GANANCIAS DE: $ %.2f",gcias);
				printf("\n");
			}
			else 
				{			
					if (vt==gt)
						{
							printf("\n");	
							printf("NO TUVO GANANCIAS");
							printf("\n");
						}
					else
						{
							p=vt-gt;
							printf("\n");
							printf("TUVO PERDIDAS: $ %.2f",p);
							printf("\n");
						}
				}
		printf("\nINGRESE UN NUMERO SI DECEA CONTINUAR (0 para salir): ");
		printf("\n");
		scanf("%f",&x);
		printf("\n");
	}

system("pause");
}

