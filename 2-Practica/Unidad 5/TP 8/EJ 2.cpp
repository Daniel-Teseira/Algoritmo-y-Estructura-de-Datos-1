#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>

void aleatorio(int v[100])
{
	int i,pri=125,ult=789;
	
	srand(time(NULL)); 
	for (i=1;i<=276;i++) 
	{
		v[i]=pri+rand()%(ult+1-pri);
	}	
}

main()
{
	setlocale(LC_CTYPE,"Spanish");
	FILE *arch;
	int y,i,pri=125,ult=789,num,par=0,impar=0,calculo,nuevo,n=1,buscar,x=0,Y=0,numero;
	bool esta;
	
	arch=fopen("numeros.dat","wb");
	if(arch==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
	srand(time(NULL)); 
	for (i=1;i<=276;i++) 
	{
		numero=pri+rand()%(ult+1-pri);
		fwrite(&numero,sizeof(int),1,arch);
	}	
	fclose(arch);
	
	do{
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CUANTOS VALORES SON PARES E IMPARES");
		printf("\n\t 2) LISTADO DE NUMEROS");
		printf("\n\t 3) AGREGAR UN NUEVO DATO");
		printf("\n\t 4) BUSCAR UN NUMERO");
		printf("\n\t 5) CUANTOS VALORES ESTAN EN EL RANGO[125-500] y [500-789]");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n==============================================\n");
					printf("=\tELIGIO CUANTOS VALORES SON PARES E IMPARES      =");					
					printf("\n==============================================\n");
					arch=fopen("numeros.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fread(&num,sizeof(int),1,arch);
					while(!feof(arch))
					{
						calculo=num&2;
						if(calculo==0)
						par++;
						if(calculo!=0)
						impar++;
						fread(&num,sizeof(int),1,arch);
					}
					fclose(arch);				
					printf("==============================================\n");
					printf("\nVALORES PARES= %d",par);
					printf("\nVALORES IMPARES= %d",impar);
					par=0;
					impar=0;
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	
					printf("\n\t ELIGIO LISTADO DE NUMEROS");										
					arch=fopen("numeros.dat","rb");					
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fread(&num,sizeof(int),1,arch);
					while(!feof(arch))
					{
						printf("\n NUMERO (%d)=%d",n,num);
						n++;						
						fread(&num,sizeof(int),1,arch);
					}
					fclose(arch);
					n=1;
					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					printf("\n==============================================\n");
					printf("\n=\t ELIGIO LISTADO DE VENTAS   =");
					printf("\n=\t0 para terminar de cargar            =");
					printf("\n==============================================\n");
										
					arch=fopen("numeros.dat","ab");	
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
						scanf("%d",&nuevo);
						if(nuevo!=0)
						{						
							fwrite(&nuevo,sizeof(int),1,arch);
						}
					}while(nuevo!=0);					
					fclose(arch);							
							
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	printf("\n==============================================\n");
					printf("\n=\t ELIGIO BUSCAR UN NUMERO   =");
					printf("\n==============================================\n");
			
					arch=fopen("numeros.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					printf("\nINGRESE EL NUMERO A BUSCAR: ");
					scanf("%d",&buscar);
					fread(&num,sizeof(int),1,arch);
					while(!feof(arch))
					{
						if(buscar==num)
						{
							esta=true;							
						}
						fread(&num,sizeof(int),1,arch);				
					}
					fclose(arch);
					
					if (esta=true)
					printf("\n EL NUMERO SI ESTA");
					else
					printf("\n EL NUMERO NO ESTA");
				
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5:	printf("\n==============================================\n");
					printf("\n=\t ELIGIO CUANTOS VALORES ESTAN EN EL RANGO[125-500] y [500-789]   =");
					printf("\n==============================================\n");
					arch=fopen("numeros.dat","rb");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
										
					fread(&num,sizeof(int),1,arch);
					while(!feof(arch))
					{
						if(num>=125&&num<500)
						{
							x++;							
						}
						if(num>=500&&num<789)
						{
							y++;							
						}
						fread(&num,sizeof(int),1,arch);				
					}
					fclose(arch);
					printf("\nNUMEROS ENTRE 125 y 500, SON= %d",x);
					printf("\nNUMEROS ENTRE 500 y 789, SON= %d",y);
					x=0;
					y=0;
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

