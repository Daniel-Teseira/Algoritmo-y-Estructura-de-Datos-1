#include <stdio.h>
#include <conio.h>
#include <string.h>

// Explicación de declaración, asignación, lectura, escritura, mayúsculas, minúsculas en cadenas.

main ()
{   
    char nombre[50], apeynom[60];
    //apellido[30]
    int cc;
    char apellido[2]="t";
    
    
    //printf("Ingrese Apellido: ");
    //scanf("%s",apellido);
    //gets(apellido);
    
    printf("\nIngrese Nombre: ");
    //_flushall();
	//scanf("%s",nombre);
    gets(nombre);
	
	//printf("\nApellido: %s ",apellido);
	//printf("\nNombre: %s ",nombre);
		
	printf("\nApellido: ");
	puts(apellido);
	printf("Nombre: ");
	puts(nombre);
	
	
	cc=strlen(apellido);
	
	printf("la cadena apellido tiene: %d caracteres",cc);
	
	
	
	//printf("\nInicio Concatenacion\n"); 
	//apeynom="PEREZ"; ERROR
	
	//realiza asignacion o copia
    
	printf("\n");
	
	strcpy(apeynom,apellido);
    puts(apeynom);
    
    
    
	
    //concatenar - agregar a la cadena
    
	strcat(apeynom,", ");
    puts(apeynom);
    
	strcat(apeynom,nombre); 
	
	puts(apeynom);
	
    	
    printf("\n");
    
	//pone todo en minuscula
    
	strlwr(apeynom);
    
	puts(apeynom);
    
	printf("\n");
    
	//pone todo en mayusculas
    
	strupr(apeynom);
    
	puts(apeynom);
    
}
