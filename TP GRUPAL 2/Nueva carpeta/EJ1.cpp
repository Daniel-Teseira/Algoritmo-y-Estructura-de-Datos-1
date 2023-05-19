#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>
#include <windows.h>

struct usuario             //estructura de carga de usuario
{
    char usuario[10];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    char apeynom[60];
};

struct veterinario          //estructura de carga de veterinario
{
    char apeynom[60];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    int matricula;
    int dni;
    char telefono[25];    
};

main()
{
    usuario v;
	setlocale(LC_ALL,"Spanish");
    SetConsoleCP(1252); // Cambiar STDIN -  Para m√°quinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para m√°quinas Windows
    char u[7],c[33],auxc[33];
    int lon1,contadormayusculas,contadornumeros,contadorminusculas,contadorconsecutivo,a,b,c1;
    bool error,errorconsecutivos,errorletraconsecutiva,error0,errorcaracter;
/*
    do
    {
        system("cls");
        //REGISTRAR UN USUARIO
        contadormayusculas=0;
        contadornumeros=0;
        contadorminusculas=0;
        error=false;
        error0=false;
        printf("\nINGRESO DE USUARIO");
        printf("\nDebe: comenzar con minuscula, tener al menos 2 letras mayusculas, tener como maximo 3 numeros");
        printf("\n\tINGRESE USUARIO: ");
        _flushall();
        gets(u);
        lon1=strlen(u);
        //printf("\nlon= %d",lon1);
        if(lon1<11)
        {
        	for (int i = 0; i < lon1; i++)
        	{	
	            int num;
				num=u[i];
	           // printf("\nascii= %d",num);
	           // printf("\ncaracter= %c",u[i]);
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
	                //printf("\ncontnum= %d",contadornumeros);
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
        	printf("\nDEBE CONTENER SOLO 10 CARACTERES!!\n");
        	system("pause");
        }
        
        
    } while (error==true);
*/   
    do
    {
        //REGISTRAR UNA CONTRASEÔøΩA
        system("cls");
        contadormayusculas=0;
        contadornumeros=0;
        error=false;
        errorconsecutivos=false;
        contadorconsecutivo=0;
        errorletraconsecutiva=false;
        errorcaracter=false;
        
        printf("\nINGRESO DE CONTRASE—A");
        printf("\nDebe: Contener al menos una minuscula, una mayusculas y un numero. Solo caracteres alfanumericos");
        printf("\n       Entre 6 y 32 caracteres. No debe tener m·s de 3 caracteres numÈricos consecutivos.");
        printf("\n       No debe tener 2 caracteres consecutivos que refieran a letras alfabÈticamente consecutivas (ascendentemente)");
        printf("\n       Este criterio es v·lido tanto para letras may˙sculas, min˙sculas o combinaciÛn de ambas");
        printf("\n\tINGRESE CONTRASE—A: ");
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
				if((c[i]>='a') || (c[i]<'z'))
                {
                    contadorminusculas++;
                    //error=true;
                }
                //REQUISITO A
                if ((c[i]>='A') || (c[i]<'Z'))
                {
                    contadormayusculas++;
                    //error=true;       
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
                        printf("\nca= %c",auxc[i]);
                        printf("\na= %d",a);
                        printf("\nca= %c",auxc[i+1]);
                        printf("\nb= %d",b);
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
        } 
        else
        {
            //REQUISITO-MUESTRA C
			printf("\nDEBE INGRESAR ENTRE 6 Y 32 CARACTERES!!\n");
            error=true;
            system("pause");
        }
         system("pause");      
    } while (error==true);

    if (error==false)
    {       
        strcpy(v.usuario,u);
        strcpy(v.contrasena,c);
        printf("\nINGRESE EL APELLIDO Y NOMBRE: ");
        _flushall();
        gets(v.apeynom);
    }
    
    



printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}
