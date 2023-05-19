#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<time.h>


struct registro
{
       int leg,edad;
       char apeynom[50];
};

struct nodo
{
       registro emp;
       nodo *sig;
};

 
void inicializar(nodo *&frente,nodo *&fondo)
{
     frente=NULL;
     fondo=NULL;
}

void insertar(nodo *&frente, nodo *&fondo,registro x)
{
     nodo *p;     
     p=new nodo;     
     if (p!=NULL)
     {
           p->emp=x;
           p->sig=NULL;
           if (frente==NULL)
                 frente=p;
           else
                 fondo->sig=p;
           fondo=p;
     }  
     else
     printf("ERROR - PILA LLENA");
}

int borrar(nodo *&frente,nodo *&fondo)
{     
    if (frente!=NULL)
	{
		nodo *p;
		int x;
        p=frente;
        x=frente->emp.leg;
        frente=frente->sig;
        delete p;
        if (frente==NULL)
            fondo=NULL;
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
	nodo *frente,*fondo,*p;
    int i=0,k,y;
    registro x;
    
    inicializar(frente,fondo);
    do{
        printf("\t\t  BIENVENIDO\n");
        printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) AGREGAR EMPLEADO/S");        
		printf("\n\t 2) MOSTRAR INFORMACION DE LA PILA");
		printf("\n\t 3) BORRAR EL PRIMER ELEMENTO");
		printf("\n\t 4) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
            case 1:
                    do
                    {  
                        printf("ELIGIO 'AGREGAR EMPLEADO/S'\n");
						k=1;/*                       
                        printf("\nDESEA AGREGAR UN EMPLEADO?");
                        printf("\nSI=1 o NO=0: ");*/
                        //scanf("%d",&k);
                        while(k==1)
                        {
                            printf("\nEMPLEADO %d",i);
                            printf("\n\tINGRESE EDAD: ");
                            scanf("%d",&x.edad);
                            printf("\tINGRESE LEGAJO: ");
                            scanf("%d",&x.leg);  
                            printf("\tINGRESE APELLIDO Y NOMBRE: ");
                            _flushall();
                            gets(x.apeynom);    
                            insertar(frente,fondo,x);
                            i++;
                            printf("==============================================");
                            printf("\n\tDECEA AGREGAR UN EMPLEADO MAS?\t");
                            printf("\n\tSI=1 o NO=0: ");
                            scanf("%d",&k);
                            printf("==============================================\n");
                        }
                    } while (k!=0 && k!=1); 
					         
                    printf("==============================================\n");
					printf("\n");
					system("pause");
					system("cls");
                    break;
            case 2:
                    p=frente;
					while (p!=NULL)
                    {
                        printf("EDAD: %d\n",p->emp.edad);
                        printf("LEGAJO: %d\n\n",p->emp.leg);
                        printf("APELLIDO Y NOMBRE: %s\n\n",p->emp.apeynom);
                        p=p->sig;
                    }                    
                    printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;

            case 3: printf("\n\nSE BORRA EL VALOR: %d\n\n",borrar(frente,fondo));    
                    p=frente;                                       
                    printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");                   		
					break;
            case 4: 
					break;
            default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
            		
        } 
    }while(y<4);    
    
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}
