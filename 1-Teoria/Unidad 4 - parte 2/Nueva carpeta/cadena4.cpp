#include <stdio.h>
#include <conio.h>
#include <string.h>

// contenido typedef : tipo de dato(arreglo de cadena) definido por el usuario.

main()
{
      typedef char cadena[30];
      
	  cadena nombre[30];
      
	  int i,n;
     
     
     printf("ingrese N nombres: ");
     scanf("%d",&n);
     
	 
	 for (i=0;i<n;i++)
     {
         printf("Ingrese nombre %d: ",i);
		 _flushall();
		 gets(nombre[i]);
     }
     
     printf("\n");
     
	 for (i=0;i<n;i++)
     {
         puts(nombre[i]);
     }         
      
}
