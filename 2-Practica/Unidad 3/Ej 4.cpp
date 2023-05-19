#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int produccion(int ep,int ed,float &res);

main()
{
	int x,ep,ed;
	float res;	
	printf("INGRESE EL CODIGO DE LA MAQUINA (0 para salir): ");
	scanf("%d",&x);
	while(x!=0) 
	{
		printf("\nINGRESE LA CANTIDAD DE ENVASES QUE PRODUJO: ");
		scanf("%d",&ep);//envases producidos
		printf("INGRESE LA CANTIDAD DE ENVASES CON FALLAS DESECHADOS:");
		scanf("%d",&ed);//envases desechados
		
		produccion(ep,ed,res);
		printf("******************************************************");
		printf("\n* _CODIGO DE LA MAQUINA ES: %d                        *",x);
		printf("\n* _CANTIDAD DE ENVASES PRODUCIDOS ES: %d            *",ep);
		printf("\n* _PORCENTAJE DE ENVASES DESECHADOS ES: %.2f        *",res);
		printf("\n******************************************************");
		printf("\n");
		system("pause");
		system("cls");
		
		printf("INGRESE EL CODIGO DE LA MAQUINA (0 para salir): ");
		scanf("%d",&x);
		printf("\n");
		
	}
system("pause");
}

int produccion(int ep,int ed,float &res)
{
	res=float(ed*100)/ep;
	return res;	
}

