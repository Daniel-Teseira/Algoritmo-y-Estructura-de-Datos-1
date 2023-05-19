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
	FILE *arch;
	FILE *aux;
	ventas v,vector[50],aux1;
	char conf[4];	
	int y,num,x,confirmacion1,confirmacion2,z=0,z1=0,i,b;
	bool esta=false;
	
	do{
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) MODIFICAR FORMA DE VENTA");
		printf("\n\t 2) BAJA LOGICA");
		printf("\n\t 3) LISTADO DE LAS BAJAS LOGICAS");
		printf("\n\t 4) BORRADO FISICO DE LAS BAJAS LOGICAS");
		printf("\n\t 5) ORDENAMIENTO/LISTADO POR NUMERO DE FACTURA");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n==============================================\n");
					printf("=\tELIGIO MODIFICAR FORMA DE VENTA      =");					
					printf("\n==============================================\n");
					printf("\nINGRESE EL NUMERO DE FACTURA: ");
					scanf("%d",&num);
					arch=fopen("VENTASxEMPLEADO.dat","r+b");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					rewind(arch);
					
					
					fread(&v,sizeof(ventas),1,arch);				
					while(!feof(arch)&& esta==false)
					{
						if(num==v.fac && esta==false)
						{
							printf("\nEL NUMERO DE FACTURA SI ESTA");
							//printf("\n%d",v.vta);
							
							if(v.vta==1)
							printf("\nCONDICION DE LA VENTA ES CONTADO");							
							if(v.vta==2)
							printf("\nCONDICION DE LA VENTA ES CREDITO");
							
							printf("\nINGRESE LA CONDICION DE VENTA A CAMBIAR: ");
							printf("\n1=CONTADO, 2=CEDITO: ");
							scanf("%d",&x);
							v.vta=x;							
							fseek(arch,-sizeof(ventas),SEEK_CUR);																						
							fwrite(&v,sizeof(ventas),1,arch);
							printf("\nSE CAMBIO LA CONDICION\n");
							esta=true;
						}												
						fread(&v,sizeof(ventas),1,arch);
					}
					fclose(arch);
					esta=false;			
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	printf("\n==============================================\n");
					printf("=\tELIGIO BAJA LOGICA      =");					
					printf("\n==============================================\n");
					arch=fopen("VENTASxEMPLEADO.dat","r+b");										
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					printf("\nINGRESE EL NUMERO DE FACTURA: ");
					scanf("%d",&num);
					esta=false;
					fread(&v,sizeof(ventas),1,arch);				
					while(!feof(arch)&& esta==false)
					{
						if(num==v.fac && esta==false)
						{
							printf("\nEL NUMERO DE FACTURA SI ESTA");
							//printf("\n%d",v.vta);
							do
							{
								printf("\nESTA SEGURO QUE DECEA BORRADO LOGICO? ");
								printf("\n(SI o NO): ");
								//_flushall();
								gets(conf);
								strupr(conf);
								//puts(conf);
								confirmacion1=strcmp(conf,"SI");
								confirmacion2=strcmp(conf,"NO");
								//printf("\n Si esta= %d",confirmacion1);
								//printf("\n No esta= %d",confirmacion2);
								if(confirmacion2==0)
								printf("\nELIGIO NO BORRAR EL COMPROBANTE!\n");
								else
								{
									if(confirmacion1==0)
									{
										printf("\nBORRANDO COMPROBANTE...");
										v.borrado=true;
										fseek(arch,-sizeof(ventas),SEEK_CUR);																						
										fwrite(&v,sizeof(ventas),1,arch);
										printf("\nFACTURA DADA DE BAJA CON EXITO\n");
									}
									else
									printf("\nINGRESO UNA OPCION INCORRECTA!\n");
								}					
								
							}while((confirmacion1>0 && confirmacion2>0)||(confirmacion1<0 && confirmacion2<0));
							
							esta=true;							
						}												
						fread(&v,sizeof(ventas),1,arch);
					}
					fclose(arch);
					
					
					if(esta==false)
					printf("\nLA FACTURA INGRESADA NO ESTA!\n");							
					printf("==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					printf("\n=================================================\n");
					printf("=\tELIGIO LISTADO DE LAS BAJAS LOGICAS\t=");
					printf("\n=================================================\n");
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
						if(v.borrado==true)
						{
						printf("\nNOMBRE DEL VENDEDOR: %s",v.apenom);
						printf("\nNUMERO DE VENDEDOR: %d",v.vendedor);
						printf("\nNUMERO DE FACTURA: %d",v.fac);
						printf("\nIMPORTE DE LA VENTA: %.2f",v.imp);
						printf("\nFORMA DE VENTA(1=contado,2=credito): %d",v.vta);						
						printf("\nFECHA DE VENTA: %d/%d/%d",v.compra.dia,v.compra.mes,v.compra.anio);
						printf("\nESTADO DE BORRADO: %d",v.borrado);
						}
						fread(&v,sizeof(ventas),1,arch);				
					}
					fclose(arch);
									
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	printf("\n==============================================\n");
					printf("=\tELIGIO BORRADO FISICO DE LAS BAJAS LOGICAS\t=");
					printf("\n==============================================\n");
					int clave,pass;
					clave=12345;
					do
					{
						printf("\nINGRESE LA CLAVE: ");
						scanf("%d",&pass);
						esta=false;
						if(clave==pass)
						{
							printf("\nCLAVE INGRESADA ES CORRETA");
							arch=fopen("VENTASxEMPLEADO.dat","r+b");
							aux=fopen("auxiliar.dat","w+b");										
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
								printf("\nESTADO DE BORRADO: %d",v.borrado);
								if(v.borrado==false)
								{
									fwrite(&v,sizeof(ventas),1,aux);
								}
								else
								{
									esta=true;										
								}
								fread(&v,sizeof(ventas),1,arch);
							}
							fclose(arch);
							fclose(aux);
							if(esta==true)
							{
								printf("\nBAJA FISICA REALIZARA CON EXITO!");
								remove("VENTASxEMPLEADO.dat");
								rename("auxiliar.dat","VENTASxEMPLEADO.dat");
							}	
						}
						else
						printf("\nCLAVE INCORRECTA!");
						
					}while(clave!=pass);
					
					
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5:	printf("\n==============================================\n");
					printf("\n=\tELIGIO ORDENAMIENTO/LISTADO POR NUMERO DE FACTURA=");
					printf("\n==============================================\n");
					z=0;
					z1=0;
					arch=fopen("VENTASxEMPLEADO.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					//CARGAR EL VECTOR					
					fread(&v,sizeof(ventas),1,arch);
					while(!feof(arch))
					{
						vector[z]=v;
						z++;
						fread(&v,sizeof(ventas),1,arch);				
					}
					fclose(arch);
					z1=z;
					//ORDENAMIENTO
					do
					{
						b=0;
						for (i=0;i<z1-1;i++)
						{
							if (vector[i].fac<vector[i+1].fac)
							{
								aux1=vector[i];
								vector[i]=vector[i+1];
								vector[i+1]=aux1;
								b=1;
							}
						}
					}while (b==1);
					//PASAR LOS ELEMENTOS DEL ARRAY AL ARCHIVO
					
					arch=fopen("VENTASxEMPLEADO.dat","wb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
						//CARGAR EL ARCHIVO
					for(i=0;i<z1;i++)
					{
						v=vector[i];
						fwrite(&v,sizeof(ventas),1,arch);
					}					
					fclose(arch);
					printf("\nARCHIVO ORDENADO POR NUMERO DE FACTURA");		
					
					
									
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

