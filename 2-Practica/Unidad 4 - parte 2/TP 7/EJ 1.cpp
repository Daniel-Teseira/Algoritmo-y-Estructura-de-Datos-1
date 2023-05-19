#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h> 

struct datoscliente
{
	int codcli; 		//código del cliente
	char apenom[40]; 	//apellido y nombre
	char dire[60]; 		//domicilio particular
	float moncred; 		//Monto máximo del crédito que puede realizar en cada compra.
};

void muestra(datoscliente v[50],int i)
{
		printf("\n%d=> CLIENTE ",i+1);
		printf("\n    _CODIGO DE CLIENTE: %d",v[i].codcli);		
		printf("\n    _APELLIDO Y NOMBRE: %s",v[i].apenom);
		printf("\n    _DOMICILIO: %s",v[i].dire);
		printf("\n    _MONTO MAXIMO DE CREDITO: %.2f\n",v[i].moncred);
		printf("**************************************************\n");
}

main()
{
	datoscliente v[50];
	int n,i,b=0;
	printf("BIENVENIDO\n");
	printf("\nINGRESE LA CANTIDAD DE CLIENTES A CARGAR: ");	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n%d=> INGRESE LOS DATOS DEL CLIENTE ",i+1);
		printf("\n    _CODIGO DE CLIENTE: ");
		scanf("%d",&v[i].codcli);		
		printf("    _APELLIDO Y NOMBRE: ");
		_flushall();
		gets(v[i].apenom);
		printf("    _DOMICILIO: ");
		_flushall();
		gets(v[i].dire);
		printf("    _MONTO MAXIMO DE CREDITO: ");
		scanf("%f",&v[i].moncred);
		printf("*MUESTRA DE CLIENTE CARGADO");
		printf("\n**************************************************");
		muestra(v,i);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(v[i].moncred>30000)
		{
			b++;	
		}
	}
	printf("\n\nCANTIDAD DE CLIENTES CON MONTOS MAYORES A 30.000 SON: %d",b);
	

printf("\n\n");
system("pause");
}

