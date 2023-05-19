#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
	int x,a,b;
	int y=10000;
	
	printf("\n\tBIENVENIDO A SU CAJERO AUTOMATICO");
	printf("\n\t");
	printf("\n\t*********************************");
	printf("\n");
	printf("\n\t1.SALDO DE SU CUENTA");
	printf("\n\t2.INGRESE DINERO EN CUENTA");
	printf("\n\t3.RETIRAR DINERO DE LA CUENTA");
	printf("\n\t4.SALIR");
	printf("\n");
	printf("\n\t*********************************");
	printf("\n");
	printf("\n\tELIGA LA OPCION: ");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1: a=y;
				printf("\n");
				printf("SALDO DE SU CUENTA: $%d",a);
				printf("\n");
				printf("\n");
				system("pause");
				system("cls");
				
						printf("\n\tBIENVENIDO A SU CAJERO AUTOMATICO");
						printf("\n\t");
						printf("\n\t*********************************");
						printf("\n");
						printf("\n\t1.SALDO DE SU CUENTA");
						printf("\n\t2.INGRESE DINERO EN CUENTA");
						printf("\n\t3.RETIRAR DINERO DE LA CUENTA");
						printf("\n\t4.SALIR");
						printf("\n");
						printf("\n\t*********************************");
						printf("\n");
						printf("\n\tELIGA LA OPCION: ");
						int x1;
						scanf("%d",&x1);
						
						switch(x)
						{
							case 1: a=y;
									printf("\n");
									printf("SALDO DE SU CUENTA: $%d",a);
									printf("\n");
									printf("\n");
									system("pause");
									system("cls");			
									break;			
									
							case 2: 
									printf("\n");
									printf("CUANTO DINERO DESEA INGRESAR EN SU CUENTA: $");
									scanf("%d",&b);
									a=y+b;
									printf("\n");
									printf("DINERO EN SU CUENTA ES DE: $%d",a);
									printf("\n");
									break;
									
							case 3: 
									printf("\n");
									printf("CUANTO DINERO DESEA RETIRAR DE SU CUENTA: $");
									scanf("%d",&b);
									a=y-b;
									if(a<0)
										{
											printf("\n");
											printf("NO CUENTA CON ESA CANTIDAD");
											printf("\n");	
										}
										else
										{
											printf("\n");
											printf("DINERO EN SU CUENTA ES DE: $%d",a);
											printf("\n");
										}
									break;
									
							case 4:	
									printf("\n");
									printf("USTED SALIO DEL PROGRAMA");
									printf("\n");
									break;
							
							default: 
									printf("\n");
									printf("NO HAY OPERACIONES A REALIZAR");
						}
										
				break;			
				
		case 2: 
				printf("\n");
				printf("CUANTO DINERO DESEA INGRESAR EN SU CUENTA: $");
				scanf("%d",&b);
				a=y+b;
				printf("\n");
				printf("DINERO EN SU CUENTA ES DE: $%d",a);
				printf("\n");
				break;
				
		case 3: 
				printf("\n");
				printf("CUANTO DINERO DESEA RETIRAR DE SU CUENTA: $");
				scanf("%d",&b);
				a=y-b;
				if(a<0)
					{
						printf("\n");
						printf("NO CUENTA CON ESA CANTIDAD");
						printf("\n");	
					}
					else
					{
						printf("\n");
						printf("DINERO EN SU CUENTA ES DE: $%d",a);
						printf("\n");
					}
				break;
				
		case 4:	
				printf("\n");
				printf("USTED SALIO DEL PROGRAMA");
				printf("\n");
				break;
		
		default: 
				printf("\n");
				printf("NO HAY OPERACIONES A REALIZAR");
	}
	

printf("\n");
printf("\n");
system("pause");

}

