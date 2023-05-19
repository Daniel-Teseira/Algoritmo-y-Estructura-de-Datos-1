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
void consulta(FILE *archivo, ventas vendedores);
void modificar (FILE *archivo, ventas vendedores);
void bajar (FILE *archivo, ventas vendedores);
void listar (FILE *archivo, ventas vendedores);
void borrar (FILE *archivo, ventas vendedores);
void ordenar (FILE *archivo, ventas vendedores);

main()
{
	int opcion;
	ventas vendedores;
	FILE *arch;
	//arch = fopen("comercio.dat","rb");
	do
		{
	  		opcion = menuPrincipal(); 
	  		system("cls");
	  		switch(opcion)
	 		 {
	   			case 1:
	   			consulta(arch, vendedores);
			   	break;
			   	case 2:
			   	modificar (arch, vendedores);
			   	break;                                 
			   	case 3:
				bajar (arch, vendedores);
			    break;
			   	case 4:
			   	listar (arch, vendedores);
			    break;
			   	case 5:
			    borrar (arch, vendedores);
			    break;
			    case 6:
			    ordenar (arch, vendedores);
			    break;
			    case 7:
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
		}while(opcion != 7);   	
	
	fclose(arch);
}

void ordenar (FILE *archivo, ventas vendedores)
{

	ventas v[100],aux;
    int b,i,n;

	archivo=fopen("comercio.dat","rb");
    fread (&vendedores, sizeof(ventas), 1, archivo);  
    i=0;
    
    while(!feof(archivo))
    {     
       v[i]=vendedores;
       i++;
       fread (&vendedores, sizeof(ventas), 1, archivo);      
    } 
    n=i;
  
    do
    {
        
		b=0;
        for (i=0;i<n-1;i++)
        {
            if (v[i].numfac>v[i+1].numfac)
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                b=1;
            }
        }
    }
    while (b==1);
    
    fclose(archivo);
    
	archivo=fopen("comercio.dat","wb"); 
    fwrite (&vendedores, sizeof(ventas), 1, archivo);
	for (i=0;i<n;i++)
    {     
       vendedores=v[i];
       fwrite (&vendedores, sizeof(ventas), 1, archivo);   
    } 
  
	fclose(archivo);
    
    system("CLS");
    
	printf("\n\nRegistros ordenados por numero de factura\n\n");
    
	archivo=fopen(" comercio.dat","rb"); 
    
	fread(&vendedores,sizeof(ventas),1,archivo);        
	while(!feof(archivo))
    {     
       if (!feof(archivo))
       {
            printf("\nNumero de vendedor: %d",vendedores.numvendedor);
			printf("\nApellido y nombre del vendedor: ");
			puts(vendedores.apeynom);
            printf("\nNumero de factura: %d",vendedores.numfac);
			printf("\nImporte facturado: %.2f",vendedores.importeventa);
			printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
			printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
       }
       fread(&vendedores,sizeof(ventas),1,archivo);
    }
   	printf("\n\n");
	system("pause");
	system("cls");
    fclose(archivo);
}
//BORRAR FISICO
void borrar (FILE *archivo, ventas vendedores)
{
	FILE *aux;
	bool band;
	archivo= fopen("comercio.dat","rb");
    aux=fopen("auxiliar.dat","w+b");                                                    
	fread (&vendedores, sizeof(ventas), 1, archivo);  	
	while(!feof(archivo))
   	{
   		if(vendedores.borrado==false)
   		{
   			fwrite(&vendedores, sizeof(ventas), 1, aux);
			band=true;
   		}
   		fread (&vendedores, sizeof(ventas), 1, archivo); 
   	}
   	fclose(archivo);
	fclose(aux); 
	if(band==true)
    {
    	printf("Baja Fisica realizada");
    	
		remove("comercio.dat");
    	
		rename("auxiliar.dat","comercio.dat");
    }
    else
    {
    	fclose(aux);
    	remove("auxiliar.dat");
    }
  
   	printf("\n\n");
	system("pause");
	system("cls"); 
   	fclose(archivo);
 
}

void listar (FILE *archivo, ventas vendedores)
{
	archivo= fopen("comercio.dat","rb");
	fread (&vendedores, sizeof(ventas), 1, archivo);  	
	while(!feof(archivo))
   	{
   		if(vendedores.borrado==true)
   		{
   			printf("\n");
            printf("\n");
            printf("\nNumero de vendedor: %d",vendedores.numvendedor);
			printf("\nApellido y nombre del vendedor: ");
			puts(vendedores.apeynom);
            printf("\nNumero de factura: %d",vendedores.numfac);
			printf("\nImporte facturado: %.2f",vendedores.importeventa);
			printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
			printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
   		}
   			fread (&vendedores, sizeof(ventas), 1, archivo); 
   	}
   	printf("\n\n");
	system("pause");
	system("cls"); 
   	fclose(archivo);
	
}
void bajar (FILE *archivo, ventas vendedores)
{
	int nf;
    bool lo;
    char conf;
    
    archivo= fopen("comercio.dat","rb");
    //fread (&vendedores, sizeof(ventas), 1, archivo);  
    printf("Ingrese el numero de factura a dar de baja : "); 
    scanf("%d",&nf);  
    fread (&vendedores, sizeof(ventas), 1, archivo);  
    while(!feof(archivo) and lo==false)
    {
    	//fread (&vendedores, sizeof(ventas), 1, archivo); 
    	if(nf==vendedores.numfac and vendedores.borrado==false)
    	{
    		lo=true;
    		printf("\nNumero de vendedor: %d",vendedores.numvendedor);
			printf("\nApellido y nombre del vendedor: ");
			puts(vendedores.apeynom);
            printf("\nNumero de factura: %d",vendedores.numfac);
			printf("\nImporte facturado: %.2f",vendedores.importeventa);
			printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
			printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
			printf("\n");
			_flushall();
    		printf("\nEsta seguro de dar de baja la factura? s: si  n: no : ");
    		scanf("%c",&conf);
    		if(conf=='s' or conf=='S')
    		{
    			vendedores.borrado=true;
    			fseek(archivo,-sizeof(ventas),SEEK_CUR);
				fwrite(&vendedores,sizeof(ventas),1,archivo);
				printf("\n");
   				printf("\n");
				printf("\nRegistro dado de Baja ");		
			}
		}
		fread (&vendedores, sizeof(ventas), 1, archivo);  
	}
	if(lo==false)
	{
		printf("\nEl numero de factura que ha ingresado no se encuentra registrado");
	}
	
	//rewind(archivo);
   	printf("\n\n");
	system("pause");
	system("cls");  
    fclose(archivo);
	
}

void modificar (FILE *archivo, ventas vendedores)
{
	int fact;
	bool b;
	
	archivo= fopen("comercio.dat","rb");
    printf("Ingrese el numero de factura a modificar : "); 
    scanf("%d",&fact);  
    fread (&vendedores, sizeof(ventas), 1, archivo);  
	int formv;
	while(!feof(archivo) and b==false)
	{
      	if(fact==vendedores.numfac)
      	{
            printf("\nIngrese la nueva forma de venta (1:contado-2:credito): ");
      		scanf("%d",&formv);  
      		fseek ( archivo, -sizeof(ventas), SEEK_CUR); 
         	vendedores.formv = formv;             
      		fwrite(&vendedores,sizeof(ventas),1,archivo);
         	printf("Archivo modificado\n\n");
         	b=true;
    		}
			fread(&vendedores, sizeof(ventas), 1, archivo);			
    }
    if(b==0)
    {
    	printf("\nEl numero de factura que ha ingresado no se encuentra registrado");
	}
	
	rewind(archivo);    
    
	fread (&vendedores,sizeof(ventas),1,archivo);
  
    while(!feof(archivo))
    {     
       if (b==1)
       {
       		printf("\nNumero de vendedor: %d",vendedores.numvendedor);
			printf("\nApellido y nombre del vendedor: ");
			puts(vendedores.apeynom);
            printf("\nNumero de factura: %d",vendedores.numfac);
			printf("\nImporte facturado: %.2f",vendedores.importeventa);
			printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
			printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
			printf("\n");
       }
       fread(&vendedores,sizeof(ventas),1,archivo);
    } 
	printf("\n\n");
	system("pause");
	system("cls");  
    fclose(archivo);
		
}

void consulta(FILE *archivo, ventas vendedores)
{
	archivo=fopen("comercio.dat","rb");
	printf("\t\n***Numeros de facturas ingresados***");
	fread (&vendedores, sizeof(ventas), 1, archivo);
	while(!feof(archivo))
	{ 
		printf("\nNumero de factura: %d",vendedores.numfac);
		printf("\nImporte facturado: %.2f",vendedores.importeventa);
		printf("\nForma de venta (1:contado-2:credito) : %d",vendedores.formv);
		printf("\nFECHA DE VENTA: %d/%d/%d\n",vendedores.fec.dia,vendedores.fec.mes,vendedores.fec.anio);
		printf("\n");
		fread (&vendedores, sizeof(ventas), 1, archivo);
	} 	
	
	printf("\n\n");
	system("pause");
	system("cls");
	fclose(archivo);
}

int menuPrincipal()
{
    int opc=0;
    system("CLS");
    printf("\t***********************************************************\n");
    printf("\t**   BIENVENIDO AL SISTEMA, SELECCIONE UNA OPERACION     **\n");
    printf("\t***********************************************************\n");
    printf("\t1-Visualizacion de las facturas registradas\n");
    printf("\t2-Modificacion del campo forma de venta\n");
    printf("\t3-Baja logica de una factura \n");
    printf("\t4-Listar los registros marcados como borrado logico \n");        
    printf("\t5-Borrado fisico de los registros marcados como borrado logico\n");
	printf("\t6-Ordenar archivo por numero de factura \n");        
    printf("\t7- SALIR del SISTEMA\n");    
    printf("\t*********************************************************\n\n");
    printf("  Seleccione Opcion: "); 
    scanf("%d", &opc);
    return opc;  
}
