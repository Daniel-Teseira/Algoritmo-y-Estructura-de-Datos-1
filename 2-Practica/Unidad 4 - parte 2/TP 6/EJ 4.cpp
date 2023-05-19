#include<stdio.h>
#include<stdlib.h>
#include<string.h> 



main()
{
	char poema[200];
	int i,vocal=0,consonante=0,puntuacion=0,espacio=0,lon,mayuscula=0,minuscula=0;
	
	printf("\n\t_INGRESE EL POEMA: ");
    gets(poema);
    lon=strlen(poema);
    for(i=0;i<lon;i++)
    {
    	
		switch(poema[i])
    	{case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U': vocal++;
    	
		//default: printf("");
		}   
		if(poema[i]==','|| poema[i]=='.'|| poema[i]==':')
		{
			puntuacion++;
		}
		 
		if(poema[i]==' ')
		{
			espacio++;
		}
		
		if((poema[i]>='a') && (poema[i]<'z'))
		{
		minuscula++;
		}	
		if((poema[i]>='A') && (poema[i]<'Z'))
		{
			mayuscula++;		
		}	
    }
    consonante=lon-vocal-puntuacion-espacio;
    
    printf("\n\t_CANTIDAD DE CONSONANTES ES: %d",consonante);
    printf("\n\t_CANTIDAD DE VOCALES ES: %d",vocal);
    printf("\n\t_CANTIDAD DE DIGITOS ES: %d",lon);
    printf("\n\t_CANTIDAD DE PUNTUACIONES ES: %d",puntuacion);
    printf("\n\t_CANTIDAD DE MAYUSCULAS ES: %d",mayuscula);
    printf("\n\t_CANTIDAD DE MINUSCULAS ES: %d",minuscula);
    printf("\n\t_CANTIDAD DE ESPACIOS ES: %d",espacio);
    
    
    
    
    printf("\n\tEL POEMA ES: ");
    puts(poema);
    
printf("\n\n");
system("pause");
}

