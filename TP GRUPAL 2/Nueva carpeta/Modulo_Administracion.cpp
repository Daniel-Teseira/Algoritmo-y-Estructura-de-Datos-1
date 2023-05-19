#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<windows.h>

struct Fecha
{
	int dia, mes, anio;
};

struct turnos
{
	int MatriculaVeterinario;
	int DNI_Dueno;
	char DetalleAtencion[380];
	Fecha fecha;
 // int cantidadturnos[20];
};

struct usuario             //estructura de carga de usuario
{
    char usuario[10];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    char apeynom[60];
};

struct veterinario          //estructura de carga de veterinario
{
    char usuario[10];
    char apeynom[60];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    int matricula;
    int dni;
    char telefono[25];    
};

struct ranking
{
    int matricula;
    int cantidadturnos;
    char apeynom[60];
};

void cargausuario(FILE *arch_usuario)
{     
    usuario v;
    char u[7],c[33],auxc[33];
    int lon1,contadormayusculas,contadornumeros,contadorminusculas,contadorconsecutivo,a,b,c1,opc,x;
    bool error,errorconsecutivos,errorletraconsecutiva,error0,errorcaracter;
	bool band;
    error=false;
    arch_usuario=fopen("Usuarios.dat","ab");
    if(arch_usuario==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}	
					
	do
    {    	
        do
        {
            system("cls");
            //REGISTRAR UN USUARIO
            contadormayusculas=0;
            contadornumeros=0;
            contadorminusculas=0;
            error=false;
            error0=false;
            printf("\n\t\t\t***INGRESO DE USUARIO***\n");
            printf("\nA TENER EN CUENTA: debe comenzar con minuscula, tener al menos 2 letras mayusculas, tener como maximo 3 numeros\n");
            printf("\n\tINGRESE USUARIO: ");
            _flushall();
            gets(u);
            lon1=strlen(u);

            if(lon1>=6 && lon1<=10)
            {
                for (int i = 0; i < lon1; i++)
                {	
                    int num;
                    num=u[i];
                    if(u[0]<97 || u[0]>122)
                    {	                
                        error0=true;
                        error=true;
                    }            
                    if ((u[i]>='A') && (u[i]<'Z'))
                    {
                        contadormayusculas++;           
                    }
                    if (u[i]>47 && u[i]<58)
                    {
                        contadornumeros++;
                    }
                }
        
                if (contadormayusculas<2)
                {
                    printf("\nDEBE TENER AL MENOS 2 LETRAS MAYUSCULAS!!\n");
                    error=true;
                }
                if (contadornumeros>3)
                {
                    printf("\nDEBE TENER MAXIMO 3 NUMEROS!!\n");
                    error=true;
                }
                if(error0==true)
                {
                	printf("\nDEBE COMENZAR CON MINUSCULA!!\n");	
				}
                system("pause");             	
            }
            else
            {
                printf("\nDEBE CONTENER 6 CARACTERES COMO MINIMO Y 10 CARACTERES COMO MAXIMO!!\n");
                error=true;
                system("pause");
            }
			if (error==false)
	        {
	            printf("\nNo hay error!!\n");
	            system("pause");   
	        }   
        } while (error==true);
       
        do        
        {
            //REGISTRAR UNA CONTRASENIA
            system("cls");
            contadormayusculas=0;
            contadornumeros=0;
            error=false;
            errorconsecutivos=false;
            contadorconsecutivo=0;
            errorletraconsecutiva=false;
            errorcaracter=false;
            
            printf("\t***INGRESO DE CONTRASENIA***\n");
            printf("\nDebe: Contener al menos una minuscula, una mayusculas y un numero. Solo caracteres alfanumericos");
            printf("\n       Entre 6 y 32 caracteres. No debe tener mas de 3 caracteres numericos consecutivos.");
            printf("\n       No debe tener 2 caracteres consecutivos que refieran a letras alfabaticamente consecutivas (ascendentemente)");
            printf("\n       Este criterio es valido tanto para letras mayusculas, minusculas o combinacion de ambas");
            printf("\n\n\n\tINGRESE CONTRASENIA: ");
            _flushall();
            gets(c);
            lon1=strlen(c);
            strcpy(auxc,c);
            strlwr(auxc);
            //puts(auxc);            
            //printf("\nlon= %d",lon1);
            if (lon1>=6 && lon1<=32)
            {            
                for (int i = 0; i < lon1; i++)
                {
                    //REQUISITO A
					if(c[i]>=97 && c[i]<=122)
                    {
                        contadorminusculas++;
                        //error=true;
                        //printf("\n contador minusculas: %d",contadorminusculas);  
                    }
                    //REQUISITO A
                    if(c[i]>=65 && c[i]<=90)
                    {
                        contadormayusculas++;
                        //error=true; 
						//printf("\n contador mayusculas: %d",contadormayusculas);      
                    }
                    //REQUISITO A
                    if (c[i]>=48 && c[i]<=57)
                    {
                        contadornumeros++;
                    }
                    
                    //REQUISITO B
                    if ((c[i]<47 || c[i]>58) && (c[i]<65 || c[i]>90) && (c[i]<97 || c[i]>122))
                    {
                        errorcaracter=true;
                        
                    }
                    //REQUISITO D
                    if (c[i]>=48 && c[i]<=57)
                    {
                        a=c[i];
                        b=a+1;
                        c1=a+2;
                        if (c[i+1]==b && c[i+2]==c1)
                        {
                            errorconsecutivos=true;
                        }                    
                    } 
                    
                    //REQUISITO E
                    
                    if(auxc[i]>96 && auxc[i]<123)
                    {                    
                        a=auxc[i];
                        b=a+1;
                        if(auxc[i+1]==b)
                        {
                            errorletraconsecutiva=true;
                        }
                    }               
                }			
                //MUESTRA ERROR  A
                if (contadorminusculas==1)
                {
                    printf("\nDEBE TENER AL MENOS 1 LETRA MINUSCULA!!\n");
                    error=true;
                }
                //MUESTRA ERROR  A
                if (contadormayusculas<1)
                {
                    printf("\nDEBE TENER AL MENOS 1 LETRA MAYUSCULA!!\n");
                    error=true;
                }
                //MUESTRA ERROR  A
                if (contadornumeros<1)
                {
                    printf("\nDEBE TENER AL MENOS 1 NUMERO!!\n");
                    error=true;
                }
                
                //MUESTRA ERROR B
                if(errorcaracter==true)
                {
                    printf("\nDEBE CONTENER SOLO CARACTERES ALFANUMERICOS!!\n");
                    error=true;
                }              
                
                //MUESTRA ERROR  D
                if (errorconsecutivos==true)
                {
                    printf("\nNO DEBE TENER MAS DE 3 NUMEROS CONSECUTIVOS!!\n");
                    error=true;                
                }
                
                //MUESTRA ERROR E
                if (errorletraconsecutiva==true)
                {
                    printf("\nNO DEBE TENER LETRAS CONSECUTIVAS CONSECUTIVAS!!\n");
                    error=true;
                } 
				//error=true; 
				//band=true;
               // system("pause");     
            } 
            else
            {
                //REQUISITO-MUESTRA C
                printf("\nDEBE INGRESAR ENTRE 6 Y 32 CARACTERES!!\n");
                system("pause");
                error=true;  
            } 
			            
             if (error==false)
            {
                printf("\nNo hay error!!\n");
                system("pause");   
            }
                    
        }while(error==true);
        
		
                        
            strcpy(v.usuario,u);
            strcpy(v.contrasena,c);
            printf("\nINGRESE EL APELLIDO Y NOMBRE: ");       
            _flushall();
            gets(v.apeynom);
            
            fwrite(&v,sizeof(usuario),1,arch_usuario);
            do
            {
                _flushall();
				printf("\nDESEA AGREGAR OTRO USUARIO (SI:1 , NO:0): ");
                scanf("%d",&x);
                if(x>1 ||x<0)
                {
                	printf("\nIngreso mal la opcion!!\n");
                	system("pause");
                	system("cls");
                }
                
            } while (x>1 || x<0);               
                               
    }while(x==1);
	fclose(arch_usuario);
}


void cargaveterinario(FILE *arch_veterinario)
{     
    usuario v;
    veterinario v1;
    char u[7],c[33],auxc[33];
    int lon1,contadormayusculas,contadornumeros,contadorminusculas,contadorconsecutivo,a,b,c1,opc,x;
    bool error,errorconsecutivos,errorletraconsecutiva,error0,errorcaracter;
    bool band;

    arch_veterinario=fopen("Veterinarios.dat","ab");
    if(arch_veterinario==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}	
					
	do
    {
    	
        do
        {
            system("cls");
            //REGISTRAR UN VETERINARIO
            contadormayusculas=0;
            contadornumeros=0;
            contadorminusculas=0;
            error=false;
            error0=false;
            printf("\n\t\t\t***CREAR USUARIO DEL VETERINARIO***");
            printf("\n\nA TENER EN CUENTA: debe comenzar con minuscula, tener al menos 2 letras mayusculas, tener como maximo 3 numeros\n");
            printf("\n\tINGRESE UN USUARIO PARA EL VETERINARIO: ");
            _flushall();
            gets(u);
            lon1=strlen(u);

            if(lon1>=6 && lon1<=10)
            {
                for (int i = 0; i < lon1; i++)
                {	
                    int num;
                    num=u[i];                    
                    if(u[0]<97 || u[0]>122)
                    {	                
                        error0=true;
                        error=true;
                    }            
                    if ((u[i]>=65) && (u[i]<91))
                    {
                        contadormayusculas++;           
                    }
                    if (u[i]>47 && u[i]<58)
                    {
                        contadornumeros++;
                    }
                }
        
                if (contadormayusculas<2)
                {
                    printf("\nDEBE TENER AL MENOS 2 LETRAS MAYUSCULAS!!\n");
                    error=true;
                }
                if (contadornumeros>3)
                {
                    printf("\nDEBE TENER MAXIMO 3 NUMEROS!!\n");
                    error=true;
                }
                if(error0==true)
                printf("\nDEBE COMENZAR CON MINUSCULA!!\n");
                
                system("pause");	
            }
            else
            {
                printf("\nDEBE CONTENER 6 CARACTERES COMO MINIMO Y 10 CARACTERES COMO MAXIMO!!\n");
                system("pause");
                error=true;
            }
            if (error==false)
	        {
	            printf("\nNo hay error!!\n");
	            system("pause");   
	        }
             
        } while (error!=false);
        
        //band=false;
        do
        {
        	//REGISTRAR UNA CONTRASENIA
            system("cls");
            contadormayusculas=0;
            contadornumeros=0;
            error=false;
            errorconsecutivos=false;
            contadorconsecutivo=0;
            errorletraconsecutiva=false;
            errorcaracter=false;
            
            printf("\n\t\t***INGRESO DE CONTRASENIA***\n");
            printf("\nDebe: Contener al menos una minuscula, una mayusculas y un numero. Solo caracteres alfanumericos");
            printf("\n       Entre 6 y 32 caracteres. No debe tener mas de 3 caracteres numericos consecutivos.");
            printf("\n       No debe tener 2 caracteres consecutivos que refieran a letras alfabeticamente consecutivas (ascendentemente)");
            printf("\n       Este criterio es valido tanto para letras mayasculas, minusculas o combinacion de ambas");
            printf("\n\n\n\tINGRESE CONTRASENIA: ");
            _flushall();
            gets(c);
            lon1=strlen(c);
            strcpy(auxc,c);
            strlwr(auxc);           
           
            if (lon1>=6 && lon1<=32)
            {            
                for (int i = 0; i < lon1; i++)
                {
                    //REQUISITO A
                    if(c[i]>=97 && c[i]<=122)
                    {
                        contadorminusculas++;
                        //error=true;
                        printf("\n contador minusculas: %d",contadorminusculas);  
                    }
                    //REQUISITO A
                    if(c[i]>=65 && c[i]<=90)
                    {
                        contadormayusculas++;
                        //error=true; 
						//printf("\n contador mayusculas: %d",contadormayusculas);      
                    }
                    //REQUISITO A
                    if (c[i]>=48 && c[i]<=57)
                    {
                        contadornumeros++;
                        //error=true;
                    }
                    
                    //REQUISITO B
                    if ((c[i]<47 || c[i]>58) && (c[i]<65 || c[i]>90) && (c[i]<97 || c[i]>122))
                    {
                        //error=true;
                        errorcaracter=true;
                    }
                    //REQUISITO D
                    if (c[i]>=48 && c[i]<=57)
                    {
                        a=c[i];
                        b=a+1;
                        c1=a+2;
                        //contadorconsecutivo++;
                        if (c[i+1]==b && c[i+2]==c1)
                        {
                            errorconsecutivos=true;
                            //error=true;
                        }                    
                    }                     
                    //REQUISITO E                    
                    if(auxc[i]>96 && auxc[i]<123)
                    {                    
                        a=auxc[i];
                        b=a+1;
                        if(auxc[i+1]==b)
                        {
                            //error=true;
                            errorletraconsecutiva=true;
                        }
                    } 
					//error=true; 
					//band=true;             
                }			
                //MUESTRA ERROR  A
                if (contadorminusculas==1)
                {
                    printf("\nDEBE TENER AL MENOS 1 LETRA MINUSCULA!!\n");
                    error=true;                    
                }
                //MUESTRA ERROR  A
                if (contadormayusculas<1)
                {
                    printf("\nDEBE TENER AL MENOS 1 LETRA MAYUSCULA!!\n");
                    error=true;                   
                }
                //MUESTRA ERROR  A
                if (contadornumeros<1)
                {
                    printf("\nDEBE TENER AL MENOS 1 NUMERO!!\n");
                    error=true;                   
                }
                
                //MUESTRA ERROR B
                if(errorcaracter==true)
                {
                    printf("\nDEBE CONTENER SOLO CARACTERES ALFANUMERICOS!!\n");
                    error=true;                   
                }                
                
                //MUESTRA ERROR  D
                if (errorconsecutivos==true)
                {
                    printf("\nNO DEBE TENER MAS DE 3 NUMEROS CONSECUTIVOS!!\n");
                    error=true;  					             
                }
                
                //MUESTRA ERROR E
                if (errorletraconsecutiva==true)
                {
                    printf("\nNO DEBE TENER LETRAS CONSECUTIVAS CONSECUTIVAS!!\n");
                    error=true;                   
                }
                
				system("pause"); 
				                     
            } 
            else
            {
                //REQUISITO-MUESTRA C
                printf("\nDEBE INGRESAR ENTRE 6 Y 32 CARACTERES!!\n");
                error=true;
                system("pause");                
            }
            //system("pause");
            if (error==false)
	        {
	            printf("\nNo hay error!!\n");
	            system("pause");   
	        } 
			           
		}while(error==true);    

        if (error==false) 
        {       
            strcpy(v1.usuario,u);
            strcpy(v1.contrasena,c);
            
            printf("\nINGRESE EL APELLIDO Y NOMBRE: ");        
            _flushall();
            gets(v1.apeynom);
            printf("\nINGRESE LA MATRICULA DEL VETERINARIO: ");
            scanf("%d",&v1.matricula);
            printf("\nINGRESE EL DNI DEL VETERINARIO: ");
            scanf("%d",&v1.dni);
            printf("\nINGRESE EL TELEFONO DEL VETERINARIO: ");
            _flushall();
            gets(v1.telefono);  
			fwrite(&v1,sizeof(veterinario),1,arch_veterinario);  		
            do
            {
                _flushall();
				printf("\nDESEA AGREGAR OTRO Veterinario (SI:1 , NO:0): ");
                scanf("%d",&x);
                if(x>1 ||x<0)
                {
                	printf("\nIngreso mal la opcion!!\n");
                	system("pause");
                	system("cls");
                }
                
            } while (x>1 || x<0);   
    
        }              
    } while (x==1);
	fclose(arch_veterinario);
}

void AtencionVeterinario(FILE *arch_veterinario,FILE *arch_Turnos,ranking v[50],int &z)
{
	arch_veterinario= fopen("Veterinarios.dat", "rb");
	arch_Turnos= fopen ("Turnos.dat","rb");
	z=0;
	veterinario vet;
	turnos reg[50];
	int y=0,contador=0;	
	
	fread (&vet, sizeof(veterinario),1,arch_veterinario);
	while(!feof(arch_veterinario))
	{			
		v[z].matricula=vet.matricula;
        strcpy(v[z].apeynom,vet.apeynom);
		z++;
		fread (&vet, sizeof(veterinario),1,arch_veterinario);
	}
	fclose(arch_veterinario);
	
	fread(&reg[y], sizeof(turnos),1, arch_Turnos);
	while(!feof (arch_Turnos))
	{
        y++;
		fread(&reg[y], sizeof(turnos),1, arch_Turnos);
	}
	fclose(arch_Turnos);
	
	for (int i = 0; i < z; i++)
    {
       printf("\nVeterinario %s",v[i].apeynom);       
       for (int j = 0; j < y; j++)
       {           
           if (reg[j].MatriculaVeterinario==v[i].matricula)
           {
               contador++;
           }          
       }
       printf("\nCantidad de turnos= %d",contador);
       v[i].cantidadturnos=contador;
       contador=0;  
	   printf("\n");     
    }
    printf("\n\n");
}

void rank()
{
    FILE *arch_veterinario;
    FILE *arch_Turnos;
    int z;
    ranking v[50];
	int b=0,i,c;   
    ranking aux;
    veterinario vet;
	turnos reg[50];
	int y=0,contador=0;	
    
    arch_veterinario= fopen("Veterinarios.dat", "rb");
	arch_Turnos= fopen ("Turnos.dat","rb");
	z=0;
	
	
	fread (&vet,sizeof(veterinario),1,arch_veterinario);
	while(!feof(arch_veterinario))
	{			
		v[z].matricula=vet.matricula;
        strcpy(v[z].apeynom,vet.apeynom);
		z++;
		fread (&vet,sizeof(veterinario),1,arch_veterinario);
	}
	fclose(arch_veterinario);
	
	fread(&reg[y], sizeof(turnos),1, arch_Turnos);
	while(!feof (arch_Turnos))
	{
        y++;
		fread(&reg[y], sizeof(turnos),1, arch_Turnos);
	}
	fclose(arch_Turnos);
	
	for (int i = 0; i < z; i++)
    {
       //printf("\nVeterinario %s",v[i].apeynom);       
       for (int j = 0; j < y; j++)
       {           
           if (reg[j].MatriculaVeterinario==v[i].matricula)
           {
               contador++;
           }          
       }
       //printf("\nCantidad de turnos= %d",contador);
       v[i].cantidadturnos=contador;
       contador=0;  
	   //printf("\n");     
    }
    //printf("\n\n");    
	do
	{
		b=0;
		for (i=0;i<z-1;i++)
		{
			if (v[i].cantidadturnos<v[i+1].cantidadturnos)
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				b=1;
			}
		}
	}
	while (b==1);
	printf("\nEl Veterinario con mayor atencion es %s, con %d atencion/es",v[0].apeynom,v[0].cantidadturnos);
}

main()
{    
	setlocale(LC_ALL,"spanish");
	SetConsoleCP(1252); // Cambiar STDIN -  Para maquinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para maquinas Windows
    //APERTURA DEL ARCHIVO
    system("color 0c");
    FILE *arch_usuario;
    FILE *arch_veterinario;
    FILE *arch_Turnos;
   
    int z=0;
    ranking v[50];
    char u[7],c[33],auxc[33];
    int lon1,contadormayusculas,contadornumeros,contadorminusculas,contadorconsecutivo,a,b,c1,opc;
    bool error,errorconsecutivos,errorletraconsecutiva,error0,errorcaracter;
    
    do
    {
        system("cls");
    	printf("\n\tMODULO ADMINISTRACION\n\n");
		printf("\t======================\n");
		printf("\t1.- Registrar Veterinario\n\n");
		printf("\t2.- Registrar Usuario Asistente\n\n");
		printf("\t3.- Atencion Por Veterinarios\n\n");
		printf("\t4.- Ranking De Veterinarios Por Atenciones\n\n");
		printf("\t5.- Volver al Menu Principal.\n\n");
		printf("\n\nIngrese una opcion: ");
		scanf("%d", &opc);
		system("cls");
    	switch(opc)
    	{
    		case 1:
    			{
    				printf("\n========== REGISTRAR VETERINARIO ===========\n");
                    cargaveterinario(arch_veterinario);
    				printf("\n\n");
					system ("pause");
					system("cls");
    			}
    		    break;

    		case 2:
    			{
    				printf("\n========== REGISTRAR USUARIO ASISTENTE ===========\n");
    				cargausuario(arch_usuario);
					printf("\n\n");
					system ("pause");
					system("cls");
    			}
    		    break;

    		case 3:
    			{
    				printf("\n========== ATENCION POR VETERIANRIOS ===========\n");
    				printf("\n\n");
    				AtencionVeterinario(arch_veterinario,arch_Turnos,v,z);
					system ("pause");
					system("cls");
    			}
    		    break;

    		case 4:
    			{
    				printf("\n========== RANKING DE VETERINARIOS POR ATENCIONES ===========\n");
    				rank();
    				printf("\n\n");
					system ("pause");
					system("cls");    				
    			}
    		    break;
    		case 5:
    			{
    				printf("\n========== GRACIAS POR UTILIZAR NUESTROS SERVICIOS!! ===========\n");
    				printf("\n\n");
					system ("pause");
					//getchar();
					system("cls");
										
    			}
    		    break;
    		default:
    			{
    				printf("\n========== Error. Ha ingresado una opcion incorrecta ===========\n");
    				printf("\n\n");
					//system ("pause");					
					system("cls");
    			}
    			break;
    	}

    }while(opc!=5);
    
    
   
    //printf("\n\n");
	/*
    scanf("",);
    _flushall();
    gets();
    puts();*/
}

