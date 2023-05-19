#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<time.h>

struct registro
{
       int lineas;
       char nombre[60];
};

struct nodo
{
       registro info;
       nodo *sig;
};

 
void inicializar(nodo *&frente)
{
     frente=NULL;
}

void insertar(nodo *&frente,registro x)
{
     nodo *p;
     
     p=new nodo;
     
     if (p!=NULL)
     {
           p->info=x;
           p->sig=frente;
           frente=p;
     }  
     else
            printf("ERROR - no hay memoria suficiente.......");
}

int borrar(nodo *&frente)
{
     
    if (frente!=NULL)
    {
		int x;
        x=frente->info.lineas;
    	frente=frente->sig;
        return x;
    }
    else
    {
            printf("ERROR - PILA VACIA");
            return 0;
    }
}
	

main()
{
	setlocale(LC_CTYPE,"Spanish");
    nodo *frente,*p;
    int i,n;
    registro x;
	/*    
    FILE *arch;
    arch=fopen("empleados.dat","w+b");*/
    inicializar(frente);
    printf("IINGRESE LA CANTIDAD DE PROGRAMAS A CARGAR: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("\n");
        printf("CANTIDAD DE LINEAS: ");
        scanf("%d",&x.lineas);
        _flushall();
        printf("NOMBRE DEL PROGRAMA: ");
        gets(x.nombre);
		insertar(frente,x);        
    }   
    
    printf("\n\nSE BORRA EL PROGRAMA DE (%d) LINEAS\n\n", borrar(frente));
    
    p=frente;
    while (p!=NULL)
    {
    	
		printf("\nCANTIDAD DE LINEAS: %d",p->info.lineas);
	    printf("\nNOMBRE DEL PROGRAMA: %s",p->info.nombre);
		p=p->sig;
		printf("\n");
    }
    
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

