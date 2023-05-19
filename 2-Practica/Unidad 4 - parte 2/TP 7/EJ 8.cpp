#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct fecha
{
	int dia,mes,anio;
};

struct datos
{
	int cod;
	char art[20];
	int canmin;
	fecha ultcom;
	int canact;
	float precio;
};
main()
{
	datos v[20];
	int i,j=0,x,c,can,dia,mes,anio,s=0,d1,vta,s1=0,faltante;
	char y[3],busqueda[25];
	
	//PUNTO A
	printf("\t\tBIENVENIDO\n");
	printf("**************************************************************");
	printf("\nINGRESE 'si' SI DESEA AGREGAR UN ARTICULO, DE LO CONTRARIO 'no': ");	
	_flushall();
	scanf("%s",&y);
	strupr(y);
	x=strcmp(y,"SI");
	while(x==0)
	{	
		printf("\n%d=> INGRESE LOS DATOS DEL ARTICULO: \n",j+1);
		printf("  _CODIGO(5 digitos): ");
		scanf("%d",&v[j].cod);				
		printf("  _NOMBRE DEL ARTICULO: ");
		_flushall();
		gets(v[j].art);
		strupr(v[j].art);
		printf("  _CANTIDAD MINIMA: ");
		scanf("%d",&v[j].canmin);	
		printf("  _DIA DE ULTIMA COMPRA: ");
		scanf("%d",&v[j].ultcom.dia);
		printf("  _MES DE ULTIMA COMPRA: ");
		scanf("%d",&v[j].ultcom.mes);
		printf("  _ANIO DE ULTIMA COMPRA: ");
		scanf("%d",&v[j].ultcom.anio);
		printf("  _CANTIDAD ACTUAL: ");
		scanf("%d",&v[j].canact);
		printf("  _PRECIO UNITARIO DE VENTA: ");
		scanf("%f",&v[j].precio);
		j++;
	
		printf("\nINGRESE 'si' SI DESEA AGREGAR UN ARTICULO, DE LO CONTRARIO 'no: ': ");	
		_flushall();
		gets(y);
		strupr(y);	
		x=strcmp(y,"SI");			
	}
	//PUNTO B
	printf("\nINGRESE UN CODIGO (5 digitos) PARA ACTUALIZAR SU STOCK: ");
	scanf("%d",&c);
	for(i=0;i<j;i++)
	{
		if(v[i].cod==c)
		{
			printf("\nCODIGO INGRESADO COINSIDE CON EL PRODUCTO '%s'",v[i].art);
			printf("\nINGRESE LA EXISTENCIA ACTUALIZADA: ");
			scanf("%d",&can);
			v[i].canact=can;
			printf("\nCANTIDAD ACTUALIZADA: %d",v[i].canact);			
			printf("\nINGRESE LA FECHA ACTUALIZADA\n");
			printf("  _DIA: ");
			scanf("%d",&dia);
			v[i].ultcom.dia=dia;
			printf("  _MES: ");
			scanf("%d",&mes);
			v[i].ultcom.mes=mes;
			printf("  _ANIO: ");
			scanf("%d",&anio);
			v[i].ultcom.anio=anio;
			s++;
		}
	}
	if(s==0)
	printf("\nNO SE ENCONTRO EL CODIGO\n");
	
	
	//PUNTO C
	printf("\nINGRESE UN CODIGO (5 digitos) PARA REALIZAR VENTA: ");
	scanf("%d",&d1);
	for(i=0;i<j;i++)
	{
		if(v[i].cod==d1)
		{
			printf("\nCODIGO INGRESADO COINSIDE CON EL PRODUCTO '%s'",v[i].art);
			printf("\nINGRESE LA CANTIDAD A VENDER: ");
			scanf("%d",&vta);
			if(vta>v[i].canmin)
			{
				v[i].canact=v[i].canact-vta;
				float tot=vta*v[i].precio;
				printf("\nCODIGO  DESCRIPCION\t\tPRECIO UNITARIO  CANTIDAD SOLICITADA  MONTO A PAGAR");
				printf("\n%d  %s\t\t%.2f  %d  %.2f",v[i].cod,v[i].art,v[i].precio,vta,tot);
			}
			else
			printf("\nNO SE PUEDE REALIZAR LA VENTA\n");
			
			s1++;
		}
	}
	if(s1==0)
	printf("\nNO SE ENCONTRO EL CODIGO\n");
	
	//PUNTO D
	printf("\nPRODUCTOS QUE SE TIENE QUE REPONER STOCK SON:");
	printf("\nCODIGO  DESCRIPCION\t\tCANTIDAD MINIMA  CANTIDAD ACTUAL  FALTANTE");
	for(i=0;i<j;i++)
	{
		//printf("\nCANTIDAD ACTUAL ES: %d",v[i].canact);
		//printf("\nCANTIDAD MINIMA ES: %d",v[i].canmin);
		if(v[i].canmin>v[i].canact)
		{
			faltante=v[i].canmin-v[i].canact;
			
			printf("\n%d  %s\t\t%.2f  %d  %.2f",v[i].cod,v[i].art,v[i].canmin,v[i].canact,faltante);
		}	
	}
	
	

printf("\n\n");
/*
scanf("",);
_flushall();
gets();
puts();
*/
system("pause");
}

