#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fecha 
{
	int dia,mes,anio;
};

struct ventas
{
	int numvendedor;
	char apeynom[35];
	int numfac;
	float importeventa;
	int formv;
	fecha fec;
	bool borrado;
};


int menuPrincipal();
void cargararchivo(FILE *arch, ventas vendedores);
void listar(FILE *arch, ventas vendedores);
void mes (FILE *arch, ventas vendedores);
void forms (FILE *arch, ventas vendedores);
void importe (FILE *arch, ventas vendedores);

main()
{
	ventas vendedores;
	
	int opcion;
	
	FILE *arch;
	//arch = fopen("comercio.dat","rb");

	do
		{
	  		opcion = menuPrincipal(); 
	  		system("cls");
	  		switch(opcion)
	 		 {
	   			case 1:
	   			cargararchivo(arch, vendedores);
			   	break;
			   	case 2:
			   	mes(arch,vendedores);
			   	break;                                 
			   	case 3:
				forms (arch,vendedores);
			    break;
			   	case 4:
			   	importe(arch,vendedores);
			    break;
			   	case 5:
			    listar(arch, vendedores);
			    break;
			    case 6:
			    system("cls");
			    printf("\nF i n   d e l   P r o g r a m a");
			    printf("\n\n");
			    system("pause");
			    break;
			   	default:
			    system("cls");
			    printf("NO CORRESPONDE A NINGUNA OPCION");
			    printf("\n");
			    system("pause");	    
			    break;
		    } 
		}while(opcion != 6);   	
	
	fclose(arch);
}

void importe (FILE *arch, ventas vendedores)
{
	char nom[35];
	float cuenta=0;
	int p;
	arch = fopen("comercio.dat","rb");
	
	_flushall();
	printf("\nIngrese el nombre del vendedor a consultar: ");
	gets(nom);
	strupr(nom);
	fread (&vendedores, sizeof(ventas), 1, arch);
	
 	while(!feof(arch))
	{ 
		strupr(vendedores.apeynom);
		p=strcmp(vendedores.apeynom,nom);
		if(p==0)
		{
			cuenta=cuenta+vendedores.importeventa;
		}
		fread (&vendedores, sizeof(ventas), 1, arch);
	}
		printf("\nImporte total realizado por el vendedor %s: %.2f",nom,cuenta);

	printf("\n\n");
	system("pause");
	system("cls");
	fclose(arch);	
}
void forms (FILE *arch, ventas vendedores)
{
	int mes,cuenta=0,p=0;
	
	arch = fopen("comercio.dat","rb");
	
		printf("\nIngrese el mes en formato MM para conocer la cantidad de ventas de contado y de credito: ");
		scanf("%d",&mes);
		fread (&vendedores, sizeof(ventas), 1, arch);
 		while(!feof(arch))
		{ 
			if(mes==vendedores.fec.mes)
			{
				if(vendedores.formv==1)
				{
					cuenta++;	
				}
				if(vendedores.formv==2)
				{
					p++;	
				}
				
			}
			fread (&vendedores, sizeof(ventas), 1, arch);
		}
		printf("\nLa cantidad de ventas de contado en el mes %d, son de %d",mes,cuenta);
		printf("\nLa cantidad de ventas con tarjeta de credito en el mes %d, son de %d",mes,p);

	printf("\n\n");
	system("pause");
	system("cls");
	fclose(arch);
}

void mes (FILE *arch, ventas vendedores)
{
	
	int mes;
	int cuenta=0;
	
	arch = fopen("comercio.dat","rb");

		
		printf("\nIngrese el mes que desea conocer en formato MM: ");
		scanf("%d",&mes);
		fread (&vendedores, sizeof(ventas), 1, arch);
 		while(!feof(arch))
		{ 
			if(mes==vendedores.fec.mes)
			{
				cuenta++;
			}
			fread (&vendedores, sizeof(ventas), 1, arch);
		}
		printf("\nLa cantidad de ventas registradas en el mes %d, son %d",mes,cuenta);

	printf("\n\n");
	system("pause");
	system("cls");
	fclose(arch);
	
}
void listar(FILE *arch, ventas vendedores)
{
	arch=fopen("comercio.dat","rb");
	fread (&vendedores, sizeof(ventas), 1, arch);
 	while(!feof(arch))
	{ 
		printf("\nNumero de vendedor: %d",vendedores.numvendedor);
		printf("\nApellido y nombre del vendedor: ");
		puts(vendedores.apeynom);
		printf("\nNumero de factura: %d",vendedores.numfac);
		printf("\nImporte facturado: %.2f",vendedores.importeventa);
		printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
		printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
		printf("\n");
		fread(&vendedores, sizeof(ventas), 1, arch); 
	}
		
	printf("F i n del L i s t a d o");
	printf("\n\n");
	system("pause");
	system("cls");	
 	fclose(arch);
}

void cargararchivo(FILE *arch, ventas vendedores)
{
	int n,i;
	char seguir='n';

	arch = fopen("comercio.dat","ab");
		
	printf("\nREGISTRE LOS SIGUIENTES DATOS:  ");
	do
	{
		printf("\nNumero de vendedor: ");
		scanf("%d",&vendedores.numvendedor);
		if(vendedores.numvendedor ==1 or vendedores.numvendedor ==2 or vendedores.numvendedor ==3)
		{
			_flushall();
			printf("\nApellido y nombre del vendedor: ");
			gets(vendedores.apeynom);
			printf("\nNumero de factura: ");
			scanf("%d",&vendedores.numfac);
			printf("\nImporte facturado: ");
			scanf("%f",&vendedores.importeventa);
				printf("\nForma de venta (1:contado-2:credito) : ");
				scanf("%d",&vendedores.formv);
				if(vendedores.formv !=1 and vendedores.formv !=2)
				{
					printf("\nPor favor ingrese correctamente la forma de venta");
					printf("\nForma de venta (1:contado-2:credito) : ");
					scanf("%d",&vendedores.formv);
				}
				if(vendedores.formv ==1 or vendedores.formv ==2)
				{
					printf("\nFECHA DE VENTA\n");
					printf("DIA: ");
					scanf("%d",&vendedores.fec.dia);
					printf("MES: ");
					scanf("%d",&vendedores.fec.mes);
					printf("ANIO: ");
					scanf("%d",&vendedores.fec.anio);
				}	
				fwrite(&vendedores, sizeof(ventas), 1, arch);
		}
		else
		{
			printf("\nSon solo tres vendedores, ingrese de nuevo");	
		}
 
		_flushall();
		printf("\n\nDesea seguir registrando datos? s:si n:no: ");
		scanf("%c", &seguir);
	}while(seguir== 'S' or seguir == 's');
	printf("F i n de la c a r g a"); 
	printf("\n\n");
	system("pause");
	system("cls");		
	fclose(arch);	
	
}

int menuPrincipal()
{
    int opc=0;
    system("CLS");
    printf("\t***********************************************************\n");
    printf("\t**   BIENVENIDO AL SISTEMA, SELECCIONE UNA OPERACION     **\n");
    printf("\t***********************************************************\n");
    printf("\t1-Cargar datos al archivo\n");
    printf("\t2-Cantidad total de venta registrada en un determinado mes \n");
    printf("\t3-Cantidad de ventas de contado y por credito de un determinado mes \n");        
    printf("\t4-Importe total realizado en el mes por un vendedor \n");
	printf("\t5-Visualizar contenido del archivo \n");        
    printf("\t6- SALIR del SISTEMA\n");    
    printf("\t*********************************************************\n\n");
    printf("  Seleccione Opcion: "); 
    scanf("%d", &opc);
    return opc;  
}
