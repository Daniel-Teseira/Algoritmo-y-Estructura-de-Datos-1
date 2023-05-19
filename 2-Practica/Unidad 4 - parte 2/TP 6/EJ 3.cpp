#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
typedef char cadena[25];														

void cargar(cadena materia[30],int vector[25],int n)
{
	
	int i;
	for (i=0;i<n;i++)
    {
    	printf("\n   *MATERIA A CARGAR: %d",i+1);
		printf("\n\t_INGRESE EL NOMRBE DE LA  MATERIA: ");
        _flushall();
        scanf("%s",materia[i]);
        strupr(materia[i]);
        printf("\t_INGRESE LA CANTIDAD DE INSCRIPTOS: ");
        scanf("%d",&vector[i]);       
    }   
}

int mayor(cadena materia[30],int vector[25],int n,int &may,int &lug)
{
	int k;
	for (k=0;k<n;k++)
    {
		if(vector[k]>may)
		{
			may=vector[k];
			lug=k;
			
		}
    }
return may,lug;   
}

int busqueda(cadena materia[30],int vector[25],int n)
{
	char busqueda[25];  
	int i,pos,pos1;
	printf("\n\nC) INGRESE UNA MATERIA A BUSCAR: ");
	scanf("%s",busqueda);
    //puts(busqueda);    
    strupr(busqueda);
    
    for (i=0;i<n;i++)
    {
	    //_flushall();
		pos=strstr(materia[i],busqueda)-materia[i];
		//printf("POSISION ES %d",pos);
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
}


main()  
{ 
    
    cadena materia[30];
    int vector[25];    
    int n,may,incriptos[30],pos1=0,lug;
    printf("BIENVENIDO"); 
    printf("\nA) DEBE INGRESAR LA CANTIDAD DE MATERIAS A CARGAR: ");
    scanf("%d",&n);
    cargar(materia,vector,n);
    mayor(materia,vector,n,may,lug);
    printf("\nB) LA ASIGNATURA CON MAYOR INSCRIPTOS ES %s CON %d ALUMNOS",materia[lug],may);
	busqueda(materia,vector,n);	
    printf("\n\n");  
    system("PAUSE");  
}


