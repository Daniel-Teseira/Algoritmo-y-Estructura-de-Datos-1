#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


//float ;

main()
{		
	int x;
	
	do
	{
		int x,a1,b1,c1,b2;
		int y=10000;
		int a=0;
		int b=0;
		int c=0;
		
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
		a=y+b-c;
		
		switch(x)
			{
				case 1: 
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
						scanf("%d",&b1);
						b=b+b1;
						a1=a+b;
						printf("\n");
						printf("DINERO EN SU CUENTA ES DE: $%d",a1);
						printf("\n");
						system("pause");
						system("cls");
						break;
						
				case 3: 
						printf("\n");
						printf("CUANTO DINERO DESEA RETIRAR DE SU CUENTA: $");
						scanf("%d",&c1);
						c=c+c1;
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
						system("pause");
						system("cls");
						break;
						
				case 4:	
						printf("\n");
						printf("USTED SALIO DEL PROGRAMA");
						printf("\n");
						system("pause");
						system("cls");
						break;
				
				default: 
						printf("\n");
						printf("NO HAY OPERACIONES A REALIZAR");
						system("pause");
						system("cls");
			}
	
	}while (x != 4);

printf("\n");
printf("\n");
system("pause");
}

