#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

// Contenido strstr buscar una subcadena dentro de otra.

main ()
{   
    char medicamento[30], buscar[30];
    int pos;
    
    printf("Ingrese Medicamento: ");
    gets(medicamento);
    
    printf("\n\nBuscar:");
    gets(buscar); 
	//puts(buscar);   
    
    
	pos=strstr(medicamento,buscar)-medicamento; 
    //printf("POSISISION %d",pos);
	if (pos>=0) 
        printf("Esta EN %d",pos);
        
        
    else
        printf("\nNo esta");
    
}
