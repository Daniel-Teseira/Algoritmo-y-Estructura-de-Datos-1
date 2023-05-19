#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>
#include<windows.h>
typedef char cadena[50];

void mostrar1(FILE *arch,cadena frase)
{
	arch=fopen("Alumnos.txt","r");
	if(arch==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
			
	fgets(frase,sizeof(char),arch);
	strlwr(frase);				
	while(!feof(arch))
	{
		if(!feof(arch))
		{
			printf("%s",frase);
		}												
		fgets(frase,sizeof(cadena),arch);
		strlwr(frase);		
	}
	fclose(arch);	
}

main()
{
	cadena frase,v[20],apellidos[20],nombres[20],carreras[20],notas[5],nomyape[30];
	//setlocale(LC_CTYPE,"Spanish");
	FILE *arch;
	int y,comp,i,k,signo,z,x,repetidos,lon,a;
	//char palabras[50];
	
	do{
		system("color 0C");
		printf("\t\t  BIENVENIDO\n");
		printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CARGAR INFORMACION DE ESTUDIANTE/S");
		printf("\n\t 2) LISTADO DE INFORMAICON DE ESTUDIANTE/S");
		printf("\n\t 3) CANTIDAD DE APELLIDOS IGUALES DE ESTUDIANTES");
		printf("\n\t 4) CANTIDAD DE ESTUDIANTES QUE CURSAN LA MISMA CARRERA");
		printf("\n\t 5) BUSCAR INFORMACION DE UN ESTUDIANTE");
		printf("\n\t 6) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n==============================================\n");
					printf("=\tELIGIO CARGAR INFORMACION DE ESTUDIANTE/S\t=");
					printf("\n=\t'no' PARA SALIR           \t=");					
					printf("\n==============================================\n");
					_flushall();
					printf("\nDESEA CARGAR UN ESTUDIANTE?: ");
					gets(frase);
					strlwr(frase);	
					comp=strcmp(frase,"no");	
					
					arch=fopen("Alumnos.txt","a");
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}				
					while(comp!=0)
					{
						if(comp!=0)
						{													
							_flushall();
							printf("\nINGRESE NOMBRE/S DEL ESTUDIANTE: ");
							gets(frase);
							strlwr(frase);							
							fprintf(arch,strcat(frase,";"));
							
							_flushall();
							printf("INGRESE APELLIDO/S DEL ESTUDIANTE: ");
							gets(frase);
							strlwr(frase);							
							fprintf(arch,strcat(frase,";"));
							
							_flushall();
							printf("INGRESE CARRERA QUE ESTUDIA EL ESTUDIANTE: ");
							gets(frase);
							strlwr(frase);							
							fprintf(arch,strcat(frase,";"));
							
							_flushall();
							printf("INGRESE NOTA PROMEDIO DEL ESTUDIANTE: ");
							gets(frase);	
							strlwr(frase);						
							fprintf(arch,strcat(frase,"\n"));							
						}
						_flushall();						
						printf("\nDESEA CARGAR UN ESTUDIANTE?: ");
						gets(frase);
						strlwr(frase);	
						comp=strcmp(frase,"no");				
					}
					fclose(arch);							
					printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	system("color 0A");
					printf("\n==============================================\n");
					printf("=\tELIGIO LISTADO DE INFORMAICON DE ESTUDIANTE/S\t=");					
					printf("\n==============================================\n");
					arch=fopen("Alumnos.txt","r");
					signo=0,i=0,k=0,x=0,repetidos=0,a=1,z=0;
					//carga del vector
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}					
					fgets(v[i],sizeof(v[i]),arch);
					printf("\nLINEA: %s",v[i]);
					while(!feof(arch))
					{																
						i++;					
						fgets(v[i],sizeof(v[i]),arch);		
						printf("LINEA: %s",v[i]);
					}
					fclose(arch);
					
					//CARGA DE NOMBRES SOLAMENTE
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==0)
							{
								nombres[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//CARGA DE APELLIDIOS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==1)
							{
								apellidos[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//CARGA DE CARRERAS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==2)
							{
								carreras[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//CARGA DE NOTAS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==3)
							{
								notas[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//MUESTRA
					for(z=0;z<=i;z++)
					{
						printf("\nESTUDIANTE %d",z+1);
						printf("\n\tNOMBRE: %s",nombres[z]);	
						printf("\n\tAPELLIDO: %s",apellidos[z]);
						printf("\n\tCARRERA QUE ESTUDIA: %s",carreras[z]);
						printf("\n\tNOTA: %s",notas[z]);				
					}	
					printf("\n");
					printf("\n");
					fclose(arch);				
					mostrar1(arch,frase);
																
					printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	
					printf("\n==============================================\n");
					printf("=\tELIGIO CANTIDAD DE APELLIDOS IGUALES DE ESTUDIANTES\t=");				
					printf("\n==============================================\n");
					
					signo=0,i=0,k=0,x=0,repetidos=0,a=1,z=0;
					arch=fopen("Alumnos.txt","r");			
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fgets(v[i],sizeof(v[i]),arch);
					printf("\nLINEA: %s",v[i]);
					while(!feof(arch))
					{																
						i++;					
						fgets(v[i],sizeof(v[i]),arch);		
						printf("LINEA: %s",v[i]);
					}
					fclose(arch);
					
					//printf("\nAPELLIDO: %s",v[1]);
					for(z=0;z<i;z++)
					{
						lon=strlen(v[z]);
						printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==1)
							{
								apellidos[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//i=6
					for(z=0;z<i;z++)
					{
						//printf("\n A: %d",a);
						//printf("\nFRASE: %s",apellidos[z]);					
						while(a<i)
						{
							printf("\n A: %d",a);
							comp=strcmp(apellidos[z],apellidos[a]);
							//printf("\nCOMP: %d",comp);
							
							if(comp==0)
							{
								repetidos++;
							}
							a++;	
						}
						
						a=z+2;
						//printf("\n A: %d",a);
					}			
					
					printf("\nCANTIDAD DE APELLIDOS REPETIDOS ES: %d",repetidos);				
														
					printf("\n==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	printf("\n==============================================\n");
					printf("=\tELIGIO CANTIDAD DE ESTUDIANTES QUE CURSAN LA MISMA CARRERA\t=");					
					printf("\n==============================================\n");
					
					signo=0,i=0,k=0,x=0,repetidos=0,a=1,z=0;
					arch=fopen("Alumnos.txt","r");			
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					
					fgets(v[i],sizeof(v[i]),arch);
					printf("\nLINEA: %s",v[i]);
					while(!feof(arch))
					{																
						i++;					
						fgets(v[i],sizeof(v[i]),arch);		
						printf("LINEA: %s",v[i]);
					}
					fclose(arch);
					
					//printf("\nAPELLIDO: %s",v[1]);
					for(z=0;z<i;z++)
					{
						lon=strlen(v[z]);
						printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==2)
							{
								apellidos[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					
					for(z=0;z<i;z++)
					{
						//printf("\n A: %d",a);
						printf("\nFRASE: %s",apellidos[z]);					
						while(a<i)
						{
							printf("\n A: %d",a);
							comp=strcmp(apellidos[z],apellidos[a]);
							//printf("\nCOMP: %d",comp);
							
							if(comp==0)
							{
								repetidos++;
							}
							a++;	
						}
						
						a=z+2;
						//printf("\n A: %d",a);
					}		
					
					printf("\nCANTIDAD DE MATEIAS REPETIDAS ES: %d",repetidos);								
					printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 5:	printf("\n==============================================\n");
					printf("\n=\tELIGIO BUSCAR INFORMACION DE UN ESTUDIANTE\t=");
					printf("\n==============================================\n");
					printf("\nINGRESE UN APELLIDO Y NOMBRE A BUSCAR: ");
					_flushall();					
					gets(frase);
					//puts(frase);
					//APERTURA DE ARCHIVO
					i=0;
					bool esta;
					esta=false;
					arch=fopen("Alumnos.txt","r");			
					if(arch==NULL)
					{
						printf("\nERROR DE APERTURA DE ARCHIVO!");
						printf("\n");
						system("pause");
						exit(1);	
					}
					//CARGA DEL VECTOR
					fgets(v[i],sizeof(v[i]),arch);
					//printf("\nLINEA: %s",v[i]);
					while(!feof(arch))
					{																
						i++;					
						fgets(v[i],sizeof(v[i]),arch);		
						//printf("LINEA: %s",v[i]);
					}
					fclose(arch);
					signo=0,k=0;
					//CARGA DEL VECTOR CON NOMBRE Y APELLIDO					
					//printf("\nAPELLIDO: %s",v[1]);
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==0)
							{
								nomyape[z][k]=v[z][x];
								k++;								
							}
							if(signo==1 && esta==false)
							{
								strcat(nomyape[z]," ");
								k++;
								esta=true;	
							}
							
							if(v[z][x]!=';' && signo==1)
							{		
								nomyape[z][k]=v[z][x];
								k++;
							}
						}
						esta=false;
						k=0;
						signo=0;											
					}
					int ubi;
					//NOMBRES Y APELLIDOS IGUALES
					for(z=0;z<=i;z++)
					{
						comp=strcmp(nomyape[z],frase);
						//printf("\nNOMBRE Y APELLIDO %d: %s",z+1,nomyape[z]);
						if(comp==0)
						{
							ubi=z;
							//printf("\n Ubicacion= %d",ubi);	
						}						
					}					
					
					//CARGA DE NOMBRES SOLAMENTE
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==0)
							{
								nombres[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//CARGA DE APELLIDIOS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==1)
							{
								apellidos[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					
					//CARGA DE CARRERAS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==2)
							{
								carreras[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//CARGA DE NOTAS SOLAMENTE
					signo=0,k=0;
					for(z=0;z<=i;z++)
					{
						lon=strlen(v[z]);
						//printf("\nLONGITUD: %d",lon);
						for(x=0;x<lon;x++)
						{
							if(v[z][x]==';')
							{
								//printf("%c",v[z][x]);
								signo++;	
							}
							if(v[z][x]!=';' && signo==3)
							{
								notas[z][k]=v[z][x];
								k++;
							}							
						}
						k=0;
						signo=0;											
					}
					//MUESTRA
					if(ubi>=0)
					{
						printf("\nEL ESTUDIANTE SI ESTA, ES EL N°: %d",ubi+1);
						printf("\n\tNOMBRE: %s",nombres[ubi]);	
						printf("\n\tAPELLIDO: %s",apellidos[ubi]);
						printf("\n\tCARRERA QUE ESTUDIA: %s",carreras[ubi]);
						printf("\n\tNOTA: %s",notas[ubi]);		
					}
					else
					printf("\nEL ESTUDIANTE NO ESTA INGRESADO!!!");					
					
					printf("\n==============================================\n");			
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

