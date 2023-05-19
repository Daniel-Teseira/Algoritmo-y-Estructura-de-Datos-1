#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>

void mostrar(char nombres[100])
{
	int aux=0,f=0,k,i;
	
	for(k=0;nombres[k]!='\0';k++)
	{
		if(nombres[k]==',')
		{		
			for(f=aux;f<k;f++)
			{				
				printf("%c",nombres[f]);
			}
			printf("\n");
			aux=f+1;			
		}		
	}
	
	for(i=aux;nombres[i]!='\0';i++)
	{
		printf("%c",nombres[i]);
	}
}

int longitud(char nombres[100])
{
	int k,suma=0;
	for (k=0;nombres[k]!='\0';k++)
     {
        suma++;
     }	
	return suma;
}

main()  
{ 
	char nombres[100];    
    int lon;
    
    printf("\nINGRESE LA LISTA DE NOMBRES:");
    gets(nombres);
    strupr(nombres);
	//PUNTO A 	
	mostrar(nombres);
	//PUNTO B
	lon=longitud(nombres);
	printf("\nLA LONGITUD ES: %d",lon);
	
    printf("\n");  
    system("PAUSE");  
}
