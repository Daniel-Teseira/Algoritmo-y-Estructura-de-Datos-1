#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//#include<string.h>
#include<math.h>
//#include<locale.h>

void carga(FILE *arch)
{
	float monto;
	printf("\n==============================================\n");
	printf("=\tELIGIO CARGAR MONTOS DE VENTAS       =");
	printf("\n=\t0 para terminar de cargar            =");
	printf("\n==============================================\n");
	arch=fopen("ventas.dat","ab");
	if(arch==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}					
	do
	{
		printf("INGRESE EL MONTO DE VENTA: ");
		scanf("%f",&monto);
		if(monto!=0)
		{							
			//vta[n]=monto;
			//n++;
			fwrite(&monto,sizeof(float),1,arch);
		}
	}while(monto!=0);
	fclose(arch);
}



main()
{
	//setlocale(LC_CTYPE,"Spanish");
	int n=0,i=1,y,x=0;
	float monto,vta[50],mayor=0,total=0,monto1,monto2;
	FILE *arch;
	
	do{
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CARGAR MONTOS DE VENTAS");
		printf("\n\t 2) MAYOR MONTO DE VENTAS");
		printf("\n\t 3) LISTADO DE VENTAS");
		printf("\n\t 4) MONTO TOTAL DE VENTAS");
		printf("\n\t 5) BORRAR EL ARCHIVO");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	
					carga(arch);
										
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	
					printf("\n\t ELIGIO MAYOR MONTO DE VENTAS");										
					arch=fopen("ventas.dat","rb");
					
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fread(&monto2,sizeof(float),1,arch);
					while(!feof(arch))
					{
						//printf("\n N=%d",n);
						vta[n]=monto2;
						//printf("\n%.2f",monto2);
						//printf("\n V[%d]=%.2f",n,vta[n]);
						n++;						
						fread(&monto2,sizeof(float),1,arch);
					}
					fclose(arch);
					if(n==1)
					{
						printf("\nMAYOR MONTO: %.2f",vta[0]);
					}
						
					if(n>1)
					{
						for(i=0;i<n;i++)
						{
							if(vta[i]>mayor)
							{
								mayor=vta[i];
							}
						}
						printf("\nLA MAYOR VENTA ES: %.2f",mayor);						
					}
					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					arch=fopen("ventas.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					printf("\n\t ELIGIO LISTADO DE VENTAS");
					fread(&monto1,sizeof(float),1,arch);
					i=1;
					while(!feof(arch))
					{
						if(!feof(arch))
						{
							//float mod1,mod10,mod100,mod1000;							
							if((monto1/1)>=1&&(monto1/1)<10)
							printf("\nMONTO DE VENTA %d: %.5f",i,monto1);
							
							if((monto1/10)>=1&&(monto1/10)<10)
							printf("\nMONTO DE VENTA %d: %.4f",i,monto1);
							
							if((monto1/100)>=1&&(monto1/100)<10)
							printf("\nMONTO DE VENTA %d: %.3f",i,monto1);
							
							if((monto1/1000)>=1&&(monto1/1000)<10)
							printf("\nMONTO DE VENTA %d: %.2f",i,monto1);
							
							if((monto1/10000)>=1&&(monto1/10000)<10)
							printf("\nMONTO DE VENTA %d: %.1f",i,monto1);
							
							if((monto1/100000)>=1&&(monto1/100000)<10)
							printf("\nMONTO DE VENTA %d: %.0f",i,monto1);
							
							if(monto1>=1000000)
							printf("\nMONTO DE VENTA %d: %.2f",i,monto1);
							
							fread(&monto1,sizeof(float),1,arch);
							i++;
						}
					}
					fclose(arch);		
							
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	arch=fopen("ventas.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}	
						total=0;			
						printf("\n\t ELIGIO MONTO TOTAL DE VENTAS");						
						//arch=fopen("ventas.dat","rb");
						fread(&monto,sizeof(float),1,arch);
						while(!feof(arch))
						{
							total=total+monto;
							fread(&monto,sizeof(float),1,arch);
						}
					
					fclose(arch);
					printf("\nMONTO TOTAL DE VENTAS ES= %.2f",total);
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5:	
					remove("ventas.dat");
					printf("\n");
					system("pause");
					system("cls");					
					break;		
			case 6: 
					break;	
			default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
				
		}
		
	}while(y<6);
	

printf("\n\n");
/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

