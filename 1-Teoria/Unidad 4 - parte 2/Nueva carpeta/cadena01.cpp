#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// Explicación de declaración, asignación, lectura, escritura, mayúsculas, minúsculas en cadenas.

main ()
{   
    char apellido[30], nombre[50], apeynom[60];
      printf("Ingrese Apellido:");
    printf("Ingrese Apellido:");
    scanf("%s",apellido);
    gets(apellido);
    
    printf("\nIngrese Nombre: ");
    //_flushall();
	scanf("%s",nombre);
    //gets(nombre);
	
	printf("\nApellido: %s ",apellido);
	printf("\nNombre: %s ",nombre);
	
	/*
	
	printf("\nApellido: ");
	puts(apellido);
	printf("Nombre: ");
	puts(nombre);
	
	
	/*
	printf("\nInicio Concatenacion\n"); 
	//apeynom="PEREZ"; ERROR
	
	//realiza asignacion
    strcpy(apeynom,apellido);
    //puts(apeynom);
    
    //concatenar - agregar a la cadena
    strcat(apeynom,", ");
    //puts(apeynom);
    
    strcat(apeynom,nombre); 
	printf("\n%s",apeynom);
    
    printf("\n");
    //pone todo en minuscula
    strlwr(apeynom);
    printf("\n%s",apeynom);
    printf("\n");
    //pone todo en mayusculas
    strupr(apeynom);
    printf("\n%s",apeynom); */
    
}
