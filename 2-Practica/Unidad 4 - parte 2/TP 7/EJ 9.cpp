#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct datos
{
	int cod;
	char des[25];
	int stock;
	float precio;	
};

main()
{
	int y,i=0,n,j,buscar,b,auxcod,auxstock,n1=0,aux1;
	datos v[25];
	char aux[25];
	float auxprecio;
	
	do{
		printf("\t\t  SELECCIONE UNA OPCION\n");
		printf("**************************************************************");	
		printf("\n\t 1) CARGAR ARTICULOS");
		printf("\n\t 2) ELIMINAR UN ARTICULO");
		printf("\n\t 3) LISTADO DE LOS ARTICULOS (alfabetico)");
		printf("\n\t 4) LISTADO DE LOS ARTICULOS (cantidad de stock)");
		printf("\n\t 5) SALIR");	
		printf("\n**************************************************************");
		printf("\n OPCION: ");
		scanf("%d",&y);
		switch(y)
		{
			case 1:	printf("\n\t CARGAR ARTICULOS");
					printf("\n\t INGRESE LA CANTIDAD A CARGAR: ");
					scanf("%d",&n); 
					n1=n1+n;
					
					for(i;i<n1;i++)
					{
						printf("\n%d=> INGRESE LOS DATOS DEL ARTICULO: \n",i+1);
						printf("  _CODIGO(5 digitos): ");
						scanf("%d",&v[i].cod);				
						printf("  _DESCRIPCION DEL ARTICULO: ");
						_flushall();
						gets(v[i].des);
						strupr(v[i].des);
						printf("  _CANTIDAD DE STOCK: ");
						scanf("%d",&v[i].stock);
						printf("  _PRECIO UNITARIO: ");
						scanf("%f",&v[i].precio);						
					}
					
					i=i+n-1;
					printf("\n");
					system("pause");
					system("cls");
					break;
										
			case 2:	if(i!=0)
					{
						printf("\n\tELIMINAR UN ARTICULO");
						printf("\n\tINGRESE UN CODIGO A BUSCAR: ");
						scanf("%d",&buscar);
						for(j=0;j<n1;j++)
						{
							if(buscar==v[j].cod)
							{
								aux1=j;
								printf("\nEL ARTICULO SI ESTA, SE ENCUENTRA EN LA POSICION: %d",aux1);	
							}
							else
							{
								printf("\nEL CODIGO INGRESADO ES INCORRECTO\n");
							}
						}
						if(aux1==0&&n1==1)
						{
							i=0;
							n1=0;
							printf("\nARTICULO ELIMINADO CON EXITO\n");
						}
						if(aux1>=0)
						{						
							n1--;
							i--;
							for(j=aux1;j<n1;j++)
							{
								v[j].cod=v[j+1].cod;
								strcpy(v[j].des,v[j+1].des);
								//v[j].des=v[j+1].des;
								v[j].stock=v[j+1].stock;
								v[j].precio=v[j+1].precio;
							
							}
						}
					}
					else
					printf("\nNO SE CARGO NINGUN PRODUCTO\n");
					printf("\n");
					system("pause");
					system("cls");		
					break;
					
			case 3:	if(i!=0)
					{
						printf("LISTADO DE LOS ARTICULOS (alfabetico)");
						do
					    {
					        b=0;
					        for (j=0;j<n1-1;j++)
					        {
					            if(strcmp(v[j].des,v[j+1].des)>0)
					            {
					                //ORDENAMIENTO DESCRIPCION
									strcpy(aux,v[j].des);
					                strcpy(v[j].des,v[j+1].des);
					                strcpy(v[j+1].des,aux);
					                //ORDENAMIENTO CODIGO
					                auxcod=v[j].cod;
					                v[j].cod=v[j+1].cod;
					                v[j+1].cod=auxcod;
					                //ORDENAMIENTO STOCK
					                auxstock=v[j].stock;
					                v[j].stock=v[j+1].stock;
					                v[j+1].stock=auxstock;
					                //ORDENAMIENTO PRECIO
					                auxprecio=v[j].precio;
					                v[j].precio=v[j+1].precio;
					                v[j+1].precio=auxprecio;
					                
					                b=1;
					            }
					        }         
					    }
					    while (b==1);
					    
					    for(j=0;j<n1;j++)
					    {
					    	printf("\n%d=> ARTICULO: \n",j+1);
							printf("\n  _CODIGO: %d",v[j].cod);			
							printf("\n  _DESCRIPCION DEL ARTICULO: %s",v[j].des);
							printf("\n  _CANTIDAD DE STOCK: %d",v[j].stock);
							printf("\n  _PRECIO UNITARIO: %.2f",v[j].precio);
					    }
					}
					else
					printf("\nNO SE CARGO NINGUN PRODUCTO\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 4:	
					if(i!=0)
					{
						printf("LISTADO DE LOS ARTICULOS (cantidad de stock)");
						do
					    {
					        b=0;
					        for (j=0;j<n1-1;j++)
					        {
					            if(v[j].stock<v[j+1].stock)
					            {
					                //ORDENAMIENTO DESCRIPCION
									strcpy(aux,v[j].des);
					                strcpy(v[j].des,v[j+1].des);
					                strcpy(v[j+1].des,aux);
					                //ORDENAMIENTO CODIGO
					                auxcod=v[j].cod;
					                v[j].cod=v[j+1].cod;
					                v[j+1].cod=auxcod;
					                //ORDENAMIENTO STOCK
					                auxstock=v[j].stock;
					                v[j].stock=v[j+1].stock;
					                v[j+1].stock=auxstock;
					                //ORDENAMIENTO PRECIO
					                auxprecio=v[j].precio;
					                v[j].precio=v[j+1].precio;
					                v[j+1].precio=auxprecio;
					                
					                b=1;
					            }
					        }         
					    }
					    while (b==1);
					    
					    for(j=0;j<n1;j++)
					    {
					    	printf("\n%d=> ARTICULO: ",j+1);
							printf("\n  _CODIGO: %d",v[j].cod);			
							printf("\n  _DESCRIPCION DEL ARTICULO: %s",v[j].des);
							printf("\n  _CANTIDAD DE STOCK: %d",v[j].stock);
							printf("\n  _PRECIO UNITARIO: %.2f",v[j].precio);
					    }
					}
					else
					printf("\nNO SE CARGO NINGUN PRODUCTO\n");
					printf("\n");
					system("pause");
					system("cls");
					break;
					
			case 5: 
					break;	
			default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");
				
		}
		
	}while(y<5);
	
	
	
	

printf("\n\n");
/*
scanf("",);
_flushall();
gets();
puts();
*/
system("pause");
}

