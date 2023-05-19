#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct punto
{
	float x,y;
};

main()
{
	punto v[2];
	int y,i;
	float d1,dp,x1,y1;
	do{
		printf("\t\t  SELECCIONE UNA OPCION\n");
		printf("**************************************************************");	
		printf("\n\t 1) CARGAR PUNTOS");
		printf("\n\t 2) MOSTRAR LOS 2 PUNTOS");
		printf("\n\t 3) DISTANCIA ENTRE ORIGEN DE COORDENADAS Y EL PUNTO 'A'");
		printf("\n\t 4) LONGITUD DE ENTRE LOS 2 PUNTOS");
		printf("\n\t 5) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n\t CARGAR PUNTOS ");
					for(i=0;i<2;i++)
					{
						printf("\nPUNTO %d\n",i+1);
						printf("COORDENADA X: ");
						scanf("%f",&v[i].x);
						printf("COORDENADA Y: ");
						scanf("%f",&v[i].y);
					}
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	printf("\n\tMOSTRAR LOS 2 PUNTOS");
					for(i=0;i<2;i++)
					{
						printf("\nP%d=(x%.0f,y%.0f)",i+1,v[i].x,v[i].y);
					}
					printf("\n\n");
					system("pause");
					system("cls");		
					break;
			case 3:	d1=sqrt((v[0].x)*(v[0].x)+(v[0].y)*(v[0].y));
					printf("\nDISTANCIA ENTRE EL ORIGEN Y EL PUNTO 'A' ES= %.2f",d1);
					printf("\n");
					system("pause");
					system("cls");
					break;
			case 4:	x1=v[1].x-v[0].x;
					y1=v[1].y-v[0].y;
					dp=sqrt(x1*x1+y1*y1);
					printf("\nDISTANCIA ENTRE LOS 2 PUNTOS ES= %.2f",dp);
					printf("\n");
					system("pause");
					system("cls");
					break;
			case 5:
					break;	
			default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
				
		}
		
	}while(y<5);
/*
printf("\n\n");
scanf("",);
_flushall();
gets();
puts();
*/
system("pause");
}

