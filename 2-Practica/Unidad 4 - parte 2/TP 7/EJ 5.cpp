#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct datos
{
	char apenom[25];
	int dni;
	int dia,mes,anio;
	float venta[5];
	float t;
};

void ven(char busqueda[25],int di,float monto,datos v[10],int i)
{
	int j;
	float total=0;
	v[i].venta[di]=monto;
	for(j=0;j<5;j++)
	{
		total=total+v[i].venta[j];
	}
	v[i].t=total;	
}	

void cambio(int doc,int di,float monto,datos v[25],int i)
{
	int j;
	float total=0;
	v[i].venta[di]=monto;
	for(j=0;j<5;j++)
	{
		total=total+v[i].venta[j];
	}
	v[i].t=total;	
}

main()
{	
	datos v[10];
	int n,i,x,j,doc,di,p,z;
	float total=0,monto;
	char busqueda[25];
	/*
	do
	{
		printf("\t\tBIENVENIDO\n");
		printf("**************************************************************");
		printf("\nINGRESE LA CANTIDAD DE VENDEDORES A CARGAR: ");	
		scanf("%d",&n);
		printf("**************************************************************");
		if(n>5)
		{
			for(i=0;i<n;i++)
			{
				//printf("\n");
				printf("\n%d=> INGRESE LOS DATOS DEL VENDEDOR: \n",i+1);	
				printf("  _APELLIDO Y NOMBRE: ");
				_flushall();
				gets(v[i].apenom);
				printf("  _DOCUMENTO: ");
				scanf("%d",&v[i].dni);
				printf("  _DIA DE INGRESO: ");
				scanf("%d",&v[i].dia);
				printf("  _MES DE INGRESO: ");
				scanf("%d",&v[i].mes);
				printf("  _ANIO DE INGRESO: ");
				scanf("%d",&v[i].anio);
				printf("\nSI DECEA AGREGAR MONTOS DE VENTAS DE LA SEMANA INGRESE 1: ");
				scanf("%d",&x);
				if(x==1)
				{
					printf("\nLUNES=0; MARTES=1; MIERCOLES=2; JUEVES=3; VIERNES=4\n");
					for(j=0;j<5;j++)
					{
						printf("INGRESE EL MONTO DE LA VENTA DEL DIA %d: ",j);
						scanf("%f",&v[j].venta[j]);
						total=total+v[j].venta[j];
					}
					t[i]=total;
					total=0;
				}
				else
				printf("\nELIGIO NO CARGAR MONTOS DE VENTAS\n");
			}
		}
		else
		{
			system("cls");
			printf("\nDEBE INGRESAR UN NUMERO MAYOR A 5\n\n");
			system("pause");
			system("cls"); 
		}
	}while(n!=0);
	*/
	

		printf("\t\tBIENVENIDO\n");
		printf("**************************************************************");
		printf("\nINGRESE LA CANTIDAD DE VENDEDORES A CARGAR: ");	
		scanf("%d",&n);
		printf("**************************************************************");
		
			for(i=0;i<n;i++)
			{
				//printf("\n");
				printf("\n%d=> INGRESE LOS DATOS DEL VENDEDOR: \n",i+1);	
				printf("  _APELLIDO Y NOMBRE: ");
				_flushall();
				gets(v[i].apenom);
				strupr(v[i].apenom);
				printf("  _DOCUMENTO: ");
				scanf("%d",&v[i].dni);/*
				printf("  _DIA DE INGRESO: ");
				scanf("%d",&v[i].dia);
				printf("  _MES DE INGRESO: ");
				scanf("%d",&v[i].mes);
				printf("  _ANIO DE INGRESO: ");
				scanf("%d",&v[i].anio);*/
				
			}
			
			printf("\nSI DECEA AGREGAR MONTOS DE VENTAS DE LA SEMANA INGRESE 1, o 0 PARA SALIR: ");
			scanf("%d",&x);
			while(x==1)
			{
				printf("\nINGRESE EL APELLIDO Y NOMBRE A BUSCAR\n");
				scanf("%s",&busqueda);
				strupr(busqueda);
				for(i=0;i<n;i++)
				{
					p=strstr(v[i].apenom,busqueda)-v[i].apenom;
					if(p==0)
					{											
						printf("\n'%s' COINSIDE CON EL NOMBRE '%s'",busqueda,v[i].apenom);
						printf("\nINDIQUE QUE DIA DESEA CARGAR VENTAS");
						printf("\nLUNES=0; MARTES=1; MIERCOLES=2; JUEVES=3; VIERNES=4: ");
						scanf("%d",&di);
						if(di!=0)
						v[i].venta[0]=0;					
						printf("INGRESE EL MONTO DE LA VENTA DEL DIA %d: ",di);
						scanf("%f",&monto);
						ven(busqueda,di,monto,v,i);
						z++;
					}
					else
					{
						for(j=0;j<5;j++)
						{
							v[i].venta[j]=0;
						}
							
					}
										
				}
				if(z==0)
				printf("\nEL EMPLEADO NO ESTA INGRESADO\n");
				z=0;
				
				printf("\nSI DECEA AGREGAR MONTOS DE VENTAS DE LA SEMANA INGRESE 1, o 0 PARA SALIR: ");
				scanf("%d",&x);
			}
			if(x!=1)
			printf("\nELIGIO NO CARGAR MONTOS DE VENTAS\n");

	//PUNTO C
	printf("\nDOCUMENTO\tAPELLIDO Y NOMBRE\tLUNES\tMARTES\tMIERCOLES  JUEVES VIERNES\t\tTOTAL ");
	printf("\n===================================================================================================");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d\t%s\t",v[i].dni,v[i].apenom);
		for(j=0;j<5;j++)
		{
			printf("\t%.2f",v[i].venta[j]);
		}
		printf("\t\t%.2f",v[i].t);
	}

	//PUNTO D
	printf("\nINGRESE UN DNI PARA MODIFICAR SU MONTO DE VENTA: ");
	scanf("%d",&doc);
	total=0;
	z=0;
	for(i=0;i<n;i++)
	{
		if(doc==v[i].dni)
		{
			printf("\n'%d' COINSIDE CON EL VENDEDOR '%s'",doc,v[i].apenom);
			printf("\nINGRESE EL DIA DEL MONTO QUE DESEA CAMBIAR: ");
			scanf("%d",&di);
			printf("\nINGRESE EL MONTO QUE DESEA CAMBIAR: ");
			scanf("%f",&monto);
			cambio(doc,di,monto,v,i);
			z++;
		}
		
	}
	if(z==0)
	{
		printf("\nEL DNI NO ESTA INGRESADO");	
	}
	
	//PUNTO C
	printf("\nDOCUMENTO\tAPELLIDO Y NOMBRE\tLUNES\tMARTES\tMIERCOLES  JUEVES VIERNES\t\tTOTAL ");
	printf("\n===================================================================================================");
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("%d\t%s\t",v[i].dni,v[i].apenom);
		for(j=0;j<5;j++)
		{
			printf("\t%.2f",v[i].venta[j]);
		}
		printf("\t\t%.2f",v[i].t);
	}
	
	
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

