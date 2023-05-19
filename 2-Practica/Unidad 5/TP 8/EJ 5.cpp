#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>
typedef char cadena[30];
/*
if(i==0)
{

	frase[i]=toupper(frase[i]);
	if(frase[i]=='\40')
	{
		frase[i+1]=toupper(frase[i+1]);
	}
}
*/
void carga3(FILE *arch1,FILE *arch2,FILE *arch3,cadena frase)
{
	int i,comp=0,a=0,b=0,c=0;	
	arch1=fopen("Archivo1.txt","r");
	arch2=fopen("Archivo2.txt","r");
	arch3=fopen("Frases.txt","w");
	
	if(arch1==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
	if(arch2==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
	if(arch3==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
					
	while(!feof(arch1) && !feof(arch2))
	{			
		//_flushall();
		if(!feof(arch1))
		{
			fgets(frase,sizeof(cadena),arch1);
			a++;
			fprintf(arch3,frase);
			
		}
		//_flushall();
		if(!feof(arch2))
		{
			fgets(frase,sizeof(cadena),arch2);
			b++;
			fprintf(arch3,frase);
		}
		//_flushall();
		/*			
		fgets(frase,sizeof(cadena),arch1);
		fprintf(arch3,frase);
		fgets(frase,sizeof(cadena),arch2);	
		fprintf(arch3,frase);
		*/									
	}
	fclose(arch1);
	fclose(arch2);
	fclose(arch3);
	c=a+b;				
	arch3=fopen("Frases.txt","r");
	if(arch3==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
	printf("\nMUESTRA DE ARCHIVO 3");
	fgets(frase,sizeof(cadena),arch3);				
	while(!feof(arch3))
	{
		if(!feof(arch3))
		{
			printf("\n%s",frase);								
		}												
		fgets(frase,sizeof(cadena),arch3);	
	}
	fclose(arch3);	
}

void mostrar1(FILE *arch1,cadena frase)
{
	if(arch1==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
			
	fgets(frase,sizeof(cadena),arch1);
	strlwr(frase);				
	while(!feof(arch1))
	{
		if(!feof(arch1))
		{
			printf("%s",frase);
		}												
		fgets(frase,sizeof(cadena),arch1);
		strlwr(frase);		
	}
	fclose(arch1);	
}

void mostrar2(FILE *arch2,cadena frase)
{
	arch2=fopen("Archivo2.txt","r");											
	if(arch2==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
					
	fgets(frase,sizeof(cadena),arch2);
	strupr(frase);				
	while(!feof(arch2))
	{
		if(!feof(arch2))
		{
			
			printf("%s",frase);								
		}												
		fgets(frase,sizeof(cadena),arch2);
		strupr(frase);	
	}
	fclose(arch2);	
}


main()
{
	setlocale(LC_CTYPE,"Spanish");
	
	cadena frase,palabras[30];
	FILE *arch1;
	FILE *arch2;
	FILE *arch3;	
	int y,comp,i;
	
	do{
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CARGAR FRASE/S DEL PRIMER EMPLEADO");
		printf("\n\t 2) MOSTRAR FRASE/S DEL PRIMER EMPLEADO");
		printf("\n\t 3) CARGAR FRASE/S DEL SEGUNDO EMPLEADO");
		printf("\n\t 4) MOSTRAR FRASE/S DEL SEGUNDO EMPLEADO");
		printf("\n\t 5) COMBINAR AMBOS ARCHIVOS");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n==============================================\n");
					printf("=\tELIGIO CARGAR FRASE/S DEL PRIMER EMPLEADO\t=");
					printf("\n=\t'final' PARA SALIR           \t=");					
					printf("\n==============================================\n");
					_flushall();
					printf("\nINGRESE LA FRASE A CARGAR: ");
					gets(frase);
					strlwr(frase);	
					comp=strcmp(frase,"final");	
					
					arch1=fopen("Archivo1.txt","a");
					if(arch1==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					//rewind(arch);							
					i=0;
			
					while(comp!=0)
					{
						if(comp!=0)
						{													
							strcpy(palabras[i],frase);
							fprintf(arch1,strcat(frase,"\n"));
							i++;							
							printf("\nINGRESE LA FRASE A CARGAR: ");
							gets(frase);
							strlwr(frase);	
							comp=strcmp(frase,"final");								
						}				
					}
					fclose(arch1);							
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	printf("\n==============================================\n");
					printf("=\tELIGIO MOSTRAR FRASE/S DEL PRIMER EMPLEADO\t=");					
					printf("\n==============================================\n");
					arch1=fopen("Archivo1.txt","r");	
					mostrar1(arch1,frase);
																
					printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					printf("\n==============================================\n");
					printf("=\tELIGIO CARGAR FRASE/S DEL SEGUNDO EMPLEADO\t=");
					printf("\n=\t'final' PARA SALIR           \t=");					
					printf("\n==============================================\n");
					_flushall();
					printf("\nINGRESE LA FRASE A CARGAR: ");
					gets(frase);
					strlwr(frase);	
					comp=strcmp(frase,"final");	
					
					arch2=fopen("Archivo2.txt","a");
					if(arch2==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					//rewind(arch);							
					i=0;
			
					while(comp!=0)
					{
						if(comp!=0)
						{													
							strcpy(palabras[i],frase);
							fprintf(arch2,strcat(frase,"\n"));
							i++;							
							printf("\nINGRESE LA FRASE A CARGAR: ");
							gets(frase);
							strlwr(frase);	
							comp=strcmp(frase,"final");								
						}				
					}
					fclose(arch2);							
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	printf("\n==============================================\n");
					printf("=\tELIGIO MOSTRAR FRASE/S DEL SEGUNDO EMPLEADO\t=");					
					printf("\n==============================================\n");
					mostrar2(arch2,frase);
													
					printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 5:	printf("\n==============================================\n");
					printf("\n=\tELIGIO COMBINAR AMBOS ARCHIVOS=");
					printf("\n==============================================\n");
					carga3(arch1,arch2,arch3,frase);
					printf("\n==============================================\n");			
					printf("\n");
					remove("Archivo2.txt");
					remove("Archivo1.txt");
					
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

