#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>

main()  
{ 
    typedef char cadena[25];
    cadena materia[30];
	char busqueda[25];    
    int n,i,k,may,lug,pos,incriptos[30],pos1=0,vector[25];
    
    printf("BIENVENIDO"); 
    printf("\nA) DEBE INGRESAR LA CANTIDAD DE MATERIAS A CARGAR: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
    	printf("\n   *MATERIA A CARGAR: %d",i+1);
		printf("\n\t_INGRESE EL NOMRBE DE LA  MATERIA: ");
        _flushall();
        gets(materia[i]);
        strupr(materia[i]);
        printf("\t_INGRESE LA CANTIDAD DE INSCRIPTOS: ");
        scanf("%d",&vector[i]);       
    }
    
	for (k=0;k<n;k++)
    {
		if(vector[k]>may)
		{
			may=vector[k];
			lug=k;
			
		}
    }
    printf("\nB) LA ASIGNATURA CON MAYOR INSCRIPTOS ES %s CON %d ALUMNOS",materia[lug],may);
	
	printf("\n\nC) INGRESE UNA MATERIA A BUSCAR: ");
	scanf("%s",busqueda);   
    strupr(busqueda);
    
    for (i=0;i<n;i++)
    {
	    //_flushall();
		pos=strstr(materia[i],busqueda)-materia[i];
		if(pos>=0)
		pos1=pos1+i;	
		else
		pos=0;	
	}
	
	if (pos>=0)
	{
		printf("\n   _%s COINSIDE CON %s",busqueda,materia[pos1]);
		printf("\n   _%s TIENE %d INCRIPTOS",materia[pos1],vector[pos1]);
	}
	else
	{		
		printf("\n %s NO ESTA INGRESADO",busqueda);
	} 
	
    printf("\n\n");  
    system("PAUSE");  
}
