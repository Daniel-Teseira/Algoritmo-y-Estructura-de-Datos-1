#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>

struct fecha
{
	int dia,mes,anio;
};

struct ventas
{
	int vendedor;
	char apenom[30];
	int fac;
	float imp;
	int vta;
	fecha compra;
	bool cond;
	bool borrado;
};

main()
{
	setlocale(LC_CTYPE,"Spanish");
	ventas v;
	FILE *arch;
	v.cond=false;
	int y,x,forma,buscar,credito=0,contado=0,emp;
	float summes,sumxemp=0;
	char vendedor[30],z[50];
	bool esta=false;
	
	do{
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CARGA DE VENTAS POR VENDEDOR");
		printf("\n\t 2) CANTIDAD TOTAL DE VENTA/S EN UN MES");
		printf("\n\t 3) CANTIDAD DE VENTA/S DE CONTADO/CREDITO EN UN MES");
		printf("\n\t 4) LISTADO DE VENTA/S TOTAL POR VENDEDOR");
		printf("\n\t 5) LISTADO DE TODAS LAS VENTAS REALIZADAS");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n==============================================\n");
					printf("=\tELIGIO CARGA DE VENTAS POR VENDEDOR      =");					
					printf("\n==============================================\n");
					arch=fopen("VENTASxEMPLEADO.dat","ab");
					if(arch==NULL)
					{
						
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					printf("\nINGRESE EL NUMERO DE VENDEDOR (1, 2 o 3): ");
					scanf("%d",&x);
					if(x==1||x==2||x==3)
					{
						if(v.cond==false)
						{
							printf("\nINGRESE EL NOMBRE DEL EMPLEADO %d: ",x);
							_flushall();
							gets(v.apenom);
							strupr(v.apenom);
							v.cond=true;
						}
						v.vendedor=1;
						printf("INGRESE EL NUMERO DE FACTURA: ");
						scanf("%d",&v.fac);
						printf("INGRESE EL IMPORTE DE LA VENTA: ");
						scanf("%f",&v.imp);
						v.borrado=false;
						do
						{
							printf("INGRESE FORMA DE VENTA ");
							printf("\n1=CONTADO, 2=CEDITO: ");
							scanf("%d",&forma);
						}
						while(forma>2);
						
						v.vta=forma;
						
						printf("INGRESE EL DIA DE LA VENTA: ");
						scanf("%d",&v.compra.dia);
						printf("INGRESE EL MES DE LA VENTA: ");
						scanf("%d",&v.compra.mes);
						printf("INGRESE EL AÑO DE LA VENTA: ");
						scanf("%d",&v.compra.anio);
						fwrite(&v,sizeof(ventas),1,arch);
					}
					else
					{
						printf("\nEL NUMERO INGRESADO DE VENDEDOR ES INCORRECTO!");	
					}
					
					fclose(arch);				
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	
					printf("\n\t ELIGIO CANTIDAD TOTAL DE VENTA/S EN UN MES");										
					arch=fopen("VENTASxEMPLEADO.dat","rb");					
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fread(&v,sizeof(ventas),1,arch);
					printf("\nINGRESE EL MES: ");
					scanf("%d",&buscar);
					while(!feof(arch))
					{
						if(buscar==v.compra.mes)
						{
							summes=summes+v.imp;
						}												
						fread(&v,sizeof(ventas),1,arch);
					}
					fclose(arch);
					printf("\nSUMA TOTAL DEL MES %d: %.2f",buscar,summes);
					summes=0;
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					printf("\n==============================================\n");
					printf("\n=\t ELIGIO CANTIDAD DE VENTA/S DE CONTADO/CREDITO EN UN MES   =");
					printf("\n==============================================\n");
					printf("\nINGRESE EL MES: ");
					scanf("%d",&buscar);
										
					arch=fopen("VENTASxEMPLEADO.dat","rb");
					fread(&v,sizeof(ventas),1,arch);	
					while(!feof(arch))
					{						
						if(buscar==v.compra.mes)
						{
							if(v.vta==1)							
							contado++;							
							
							if(v.vta==2)
							credito++;
						}												
						fread(&v,sizeof(ventas),1,arch);
					}
					fclose(arch);
					
					printf("\nCANTIDAD TOTAL DE VENTAS AL CONTADO ES: %d",contado);						
					printf("\nCANTIDAD TOTAL DE VENTAS DE CREDITO ES: %d",credito);	
					contado=0;
					credito=0;					
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	printf("\n==============================================\n");
					printf("\n=\t ELIGIO LISTADO DE VENTA/S TOTAL POR VENDEDOR   =");
					printf("\n==============================================\n");
					printf("\nINGRESE EL VENDEDOR A BUSCAR: ");
					_flushall();
					gets(vendedor);
					strupr(vendedor);
					//puts(vendedor);
					sumxemp=0;
					
					arch=fopen("VENTASxEMPLEADO.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
									
					esta=false;
					fread(&v,sizeof(ventas),1,arch);
					while(!feof(arch))
					{			
						int comp;
						comp=strstr(v.apenom,vendedor)-v.apenom;
						//printf("\nCOM: %d",comp);
						if(comp>=0)
						{						
							emp=v.vendedor;
							esta=true;
							//printf("\n%d",v.vendedor);
						}												
						fread(&v,sizeof(ventas),1,arch);
					}
					fclose(arch);
					
					arch=fopen("VENTASxEMPLEADO.dat","rb");
					if(esta==true)
					{
						printf("\nEL EMPEADO SI ESTA");				
						printf("\nINGRESE EL MES A BUSCAR: ");
						scanf("%d",&buscar);
						//printf("\n%d",buscar);
						rewind(arch);
						fread(&v,sizeof(ventas),1,arch);
						while(!feof(arch))
						{						
							if(emp==v.vendedor&&buscar==v.compra.mes)
							{
								//printf("\n%.2f",v.imp);
								sumxemp=sumxemp+v.imp;
								//printf("\n%d",sumxemp);
							}												
							fread(&v,sizeof(ventas),1,arch);
						}
						fclose(arch);
						
						printf("\nSUMA DE VENTAS DEL EMPLEADO ES: %.2f",sumxemp);
					}
					else
					printf("\nEL EMPLEADO NO ESTA CARGADO");
					
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5:	printf("\n==============================================\n");
					printf("\n=\t ELIGIO LISTADO DE TODAS LAS VENTAS REALIZADAS   =");
					printf("\n==============================================\n");
					arch=fopen("VENTASxEMPLEADO.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
										
					fread(&v,sizeof(ventas),1,arch);
					while(!feof(arch))
					{
						//printf("\n==============================================");
						printf("\nNOMBRE DEL VENDEDOR: %s",v.apenom);
						printf("\nNUMERO DE VENDEDOR: %d",v.vendedor);
						printf("\nNUMERO DE FACTURA: %d",v.fac);
						printf("\nIMPORTE DE LA VENTA: %.2f",v.imp);
						printf("\nFORMA DE VENTA(1=contado,2=credito): %d",v.vta);						
						printf("\nFECHA DE VENTA: %d/%d/%d",v.compra.dia,v.compra.mes,v.compra.anio);
						printf("\nESTADO DE BORRADO: %d",v.borrado);
						printf("\n==============================================");
						fread(&v,sizeof(ventas),1,arch);				
					}
					fclose(arch);				
					printf("\n");
					system("pause");
					system("cls");					
					break;		
			case 6: 
					break;	
			default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
				
		}
		
	}while(y<6);
	

printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

