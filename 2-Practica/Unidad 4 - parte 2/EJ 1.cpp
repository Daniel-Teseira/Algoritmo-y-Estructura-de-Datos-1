#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

main()  
{ 
    typedef char cadena[25];
    cadena alumnos[30],palabra;
    char vector[25];
    
    int n,i,comp,auxlong=0,longitud1,longitud2,k;
    
    printf("\nINGRESE UNA PALABRA: ");
    gets(palabra);
    strupr(palabra);
    comp=strcmp(palabra,"FINAL");
    i=0;
    while(comp!=0)
    {
        strcpy(alumnos[i],palabra);
        i++;
        printf("INGRESE UNA PALABRA: ");
        gets(palabra);
        strupr(palabra);
        comp=strcmp(palabra,"FINAL");
    }
     n=i;
	 for (k=0;k<n;k++)
     {
        longitud1=strlen(alumnos[k]);
		if(auxlong<longitud1)
        {
			auxlong=longitud1;
			strcpy(vector,alumnos[k]);
			
        }
     }
    printf("\nLA PALABRA MAS LARGA TIENE %d CARACTERES",auxlong);
    printf("\nEL NOMBRE MAS LARGO ES: %s",vector);    
    
    printf("\n\nSE INGRESARON %d PALABRAS:",n);
    printf("\n");  
    system("PAUSE");  
}
