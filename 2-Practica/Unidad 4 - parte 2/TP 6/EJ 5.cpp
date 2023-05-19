#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <iostream>
typedef char cadena[25];

void cargar(cadena nombres[30],int n)
{
	int i;
	for (i=0;i<n;i++)
    {
    	printf("\n   *SOCIO A CARGAR: %d",i+1);
		printf("\n\t_INGRESE EL APELLIDO Y NOMBRE DEL SOCIO: ");
        _flushall();
        gets(nombres[i]);
        strupr(nombres[i]);
    }	
}

void ordenar(cadena nombres[30],int n,cadena aux)
{
	int b,i;
	do
     {
         b=0;
         for (i=0;i<n-1;i++)
         {
             if(strcmp(nombres[i],nombres[i+1])<0)
             {
                  strcpy(aux,nombres[i]);
                  strcpy(nombres[i],nombres[i+1]);
                  strcpy(nombres[i+1],aux);
                  b=1;
             }
         }         
     }
     while (b==1);
}

void mostrar(cadena nombres[30],int n)
{
	int i;
	for (i=0;i<n;i++)
     {
         printf("\tSOCIO %d: %s\n",i+1,nombres[i]);
     }
}

main()  
{     
    cadena nombres[30],aux;
	char busqueda[25]; 
    int n,i,b,k,aux1,f,pos,pos1=0;
    
    printf("BIENVENIDO"); 
    printf("\nA) DEBE INGRESAR LA CANTIDAD DE SOCIOS A CARGAR: ");
    scanf("%d",&n);
    //PUNTO A
    cargar(nombres,n);
    //PUNTO B
    ordenar(nombres,n,aux);
    //PUNTO C
    printf("\nC)MUESTRA DE NOMBRES DE LOS SOCIOS DECRECIENTE\n");
    mostrar(nombres,n);
    printf("\nD)MUESTRA DE APELLIDOS DE LOS SOCIOS CRECIENTE\n");     
	//PUNTO D
	do
     {
         b=0;
         for (i=0;i<n-1;i++)
         {
             if(strcmp(nombres[i],nombres[i+1])>0)
             {
                  strcpy(aux,nombres[i]);
                  strcpy(nombres[i],nombres[i+1]);
                  strcpy(nombres[i+1],aux);
                  b=1;
             }
         }         
     }
     while (b==1);
     
	//printf("\nD)APELLIDOS CRECIENTES\n");
	for(i=0;i<n;i++)
	{
		for(k=0;nombres[i][k]!='\0';k++)
		{			
			if(nombres[i][k]==' ')
			{	
				printf("\tAPELLIDO %d: ",i+1);	
				for(f=0;f<k;f++)
				{				
					printf("%c",nombres[i][f]);
				}
					printf("\n");
					aux1=f+1;			
			}
			
					
		}
	}

	  
    //PUNTO E
    printf("\n\nE) INGRESE UNA APELLIDO A BUSCAR: ");
	scanf("%s",busqueda);   
    strupr(busqueda);
    
	    for (i=0;i<n;i++)
	    {
		    //_flushall();
			pos=strstr(nombres[i],busqueda)-nombres[i];
			//printf("%d",pos);
			if(pos>=0)
			{
				pos1=pos1+i;
			}
			else
			pos=0;	
		}
	
	
	if (pos>=0)
	{
		printf("\n   _%s COINSIDE CON %s",busqueda,nombres[pos1]);
		//printf("\n   _%s TIENE %d INCRIPTOS",materia[pos1],vector[pos1]);
	}
	else
	{		
		printf("\n %s NO ESTA INGRESADO",busqueda);
	} 
    
    
    printf("\n\n");  
    system("PAUSE");  
}
