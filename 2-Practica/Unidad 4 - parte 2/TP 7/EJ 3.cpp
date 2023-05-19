#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct fecha
{
	int dia;
	int mes;
	int anio;
};
struct datoscliente
{
	char apenom[40]; 		//apellido y nombre del cliente
	char dire[60]; 			//domicilio particular del cliente
	float monvehi; 			//Monto del vehículo.
	fecha fecventa; 		//Fecha de venta del vehículo.
};

void muestra(datoscliente v[50],int i)
{
	printf("\n   CLIENTE: %d",i+1);	
	printf("\n    _APELLIDO Y NOMBRE: %s",v[i].apenom);
	printf("\n    _DOMICILIO: %s",v[i].dire);
	printf("\n    _MONTO DE LA VENTA: %.2f",v[i].monvehi);
	printf("\n    _FECHA DE LA VENTA: %d/%d/%d",v[i].fecventa.dia,v[i].fecventa.mes,v[i].fecventa.anio);
	printf("\n=======================================================\n");
}

void vta(datoscliente v[50],int n)
{
	int i,dia;
	float aux=0;
	for(i=0;i<n;i++)
	{
		if(v[i].monvehi>aux)
		{
			aux=v[i].monvehi;
			dia=v[i].fecventa.dia;	
		}
	}
	printf("\n**************************************************************");
	printf("\nEL DIA QUE MAS SE VENDIO FUE EL DIA: %d",dia);
	printf("\n**************************************************************");
}


main()
{
	datoscliente v[20];
	int n,i,dia;
	float aux=0;
	printf("\t\tBIENVENIDO\n");
	printf("**************************************************************");
	printf("\nINGRESE LA CANTIDAD DE VENTAS REALIZADAS EN LA SEMANA: ");	
	scanf("%d",&n);
	printf("**************************************************************");
	for(i=0;i<n;i++)
	{
		printf("\n%d=> INGRESE LOS DATOS DE LA VENTA",i+1);		
		printf("\n    _APELLIDO Y NOMBRE: ");
		_flushall();
		gets(v[i].apenom);
		printf("    _DOMICILIO: ");
		_flushall();
		gets(v[i].dire);
		printf("    _MONTO DE LA VENTA: ");
		scanf("%f",&v[i].monvehi);
		printf("    _INGRESE EL DIA DE LA VENTA: ");
		scanf("%d",&v[i].fecventa.dia);
		printf("    _INGRESE EL MES DE LA VENTA: ");
		scanf("%d",&v[i].fecventa.mes);
		printf("    _INGRESE EL AÑO DE LA VENTA: ");
		scanf("%d",&v[i].fecventa.anio);
		printf("*MUESTRA DE CLIENTE CARGADO");
		printf("\n=======================================================");
		muestra(v,i);
	}
	vta( v,n);
	
	
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

