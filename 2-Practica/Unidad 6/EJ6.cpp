#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<time.h>

struct registro
{
    int numaten;
    char problema[2],numcel[20];
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
        x=frente->emp.numaten;
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
    int i=0,k,y,t=0,comp,z;
    float prom;
    registro x;
    
    inicializar(frente,fondo);
    do{
    	system("color 09");
        printf("\t\t  BIENVENIDO\n");
        printf("**************************************************************");	
		printf("\nSELECCIONE UNA OPCION");
		printf("\n\t 1) CARGAR DATO/S");        
		printf("\n\t 2) MOSTRAR EL PROXIMO CLIENTE A ATENDER Y BORRARLO");
		printf("\n\t 3) PORCENTAJE QUE ESTA POR PROBLEMAS TECNICOS");
		printf("\n\t 4) MOSTRAR DATOS CARGADOS");
		printf("\n\t 5) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
            case 1:	system("color 02");
                    do
                    {  
                        printf("ELIGIO 'CARGAR DATO/S'\n");
						k=1;
						/*                       
                        printf("\nDESEA AGREGAR UN EMPLEADO?");
                        printf("\nSI=1 o NO=0: ");*/
                        //scanf("%d",&k);
                        while(k==1)
                        {
                            printf("\nCLIENTE %d",i+1);
                            printf("\n\tINGRESE N° DE ATENCION: ");
                            scanf("%d",&x.numaten);
                            printf("\tINGRESE N° DE CELULAR: ");
                            _flushall();
                            gets(x.numcel);
                            //scanf("%d",&x.numcel);
							//printf("\nN°=%s",x.numcel);  
                            printf("\tINGRESE EL TIPO DE ATENCION ");
                            printf("\n\t(F=Facturación, C=Compra, T=Técnico): ");
                            _flushall();
                            gets(x.problema);
							strupr(x.problema);
							comp=strcmp(x.problema,"T");
							if(comp==0)
							t++; 
							printf("\nT= %d\n",t); 
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
                    
            case 2: system("color 0E");
					printf("ELIGIO 'MOSTRAR EL PROXIMO CLIENTE A ATENDER Y BORRARLO'\n");                   
					printf("\n\nPROXIMO CLIENTE A ATENDER: %d\n\n",borrar(frente,fondo));                   
                    printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");		
					break;

            case 3: printf("ELIGIO 'PORCENTAJE QUE ESTA POR PROBLEMAS TECNICOS'\n"); 
					prom=(t*100)/i; 
					printf("\nPORCENTAJE DE CLIENTES CON PROBLEMAS TECNICOS ES: %.2f",prom);                             
					
                    printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");                   		
					break;
					
            case 4: printf("ELIGIO 'MOSTRAR DATOS CARGADOS'\n");
            		p=frente;					                   
					z=1;
					while (p!=NULL)
                    {
                    	printf("\nCLIENTE %d",z);
                        printf("\n\tN° DE ATENCION: %d",p->emp.numaten);
                        printf("\n\tN° DE CELULAR: %s",p->emp.numcel);  
                        printf("\n\tTIPO DE ATENCION: %s",p->emp.problema);
                    	printf("\n\t(F=Facturación, C=Compra, T=Técnico): ");							
                        p=p->sig;
                        printf("\n\n");
                        z++;
                    } 
                    if(p==NULL)
                    {
	                    system("cls");
	                    printf("\n==============================================\n");	
						system("color 40");
						printf("\n\tLA COLA ESTA VACIA\n");
                	}
                    printf("\n==============================================\n");					
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5: 
					break;
            default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
            		
        } 
    }while(y<5);    
    
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

