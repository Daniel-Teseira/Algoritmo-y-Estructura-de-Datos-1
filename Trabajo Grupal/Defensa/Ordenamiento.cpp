#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<f.ordenamiento.h>

//CARGA DEL VECTOR
void vector(int n,int v[100]);

//ORDENAMIENTO POR BURBUJA
int burbuja(int n,int v1[100],int &num);

//COPIA DEL VECTOR ORIGINAL
void copia(int v[100],int n,int v1[100]);

//MUESTRA DE VECTOR 
void muestra(int n,int v[100]);

//ORDENAMIENTO POR BARAJA
void baraja(int n,int v2[100]);

//ORDENAMIENTO SELECCION
void seleccion(int v[100],int n);

//ORDENAMIENTO QUICKSORT
int dividir(int v[100],int inicio, int final);
 
// Función recursiva para hacer el ordenamiento
void quicksort(int v[100],int inicio,int final);

//OEDENAMIENTO MERGESORT
void merge(int izq[100],int nIzq,int der[100],int nDer,int v[100]);

//ORDENAMIENTO MERGESORT
void msort(int v[100],int n);

main()
{
	int i,v[100],n,v1[100],inicio,final,x,y,num;
	
    printf("\tSELECCIONE UNA OPCION");
	printf("\n***********************************************"); 
	printf("\n*\t 1) SI DECEA CARGAR EL VECTOR         *");
    printf("\n*\t 2) PARA SALIR                        *");
    printf("\n***********************************************");
    printf("\nOPCION: ");
	scanf("%d",&y);
	
	switch(y)
	{
		case 1:
				do
				{			
					system("cls");
					printf("INGRESE LA CANTIDAD DE COMPONENTES QUE TENDRA EL VECTOR: ");
					scanf("%d",&n);
					vector(n,v);
					system("pause");																
					system("cls");
					do{	
						printf("\t\t  SELECCIONE UNA OPCION\n");
						printf("**************************************************************");	
						printf("\n*  METODOS DE ORDENAMIENTOS:                                 *");
						printf("\n*\t 1) ORDENAMIENTO POR METODO DE BURBUJA               *");
						printf("\n*\t 2) ORDENAMIENTO POR METODO DE INSERCION O BARAJA    *");
						printf("\n*\t 3) ORDENAMIENTO POR METODO DE SELECCION O SENCILLO  *");
						printf("\n*\t 4) ORDENAMIENTO POR METODO DE QUICKSORT             *");
						printf("\n*\t 5) ORDENAMIENTO POR METODO DE MEZCLA O MERGESORT    *");	
						printf("\n*  OPCIONES:                                                 *");
						printf("\n*\t 6) MOSTRAR EL VECTOR ORIGINAL                       *");
						printf("\n*\t 7) SALIR DEL PROGRAMA                               *");
						printf("\n*\t 8) PARA VOLVER A CARGAR UN VECTOR                   *");
						printf("\n**************************************************************");
						printf("\n OPCION: ");
						scanf("%d",&x);						
						
							switch (x)
							{
								case 1: printf("\nVECTOR ORDENADO POR METODO DE BURBUJA\n\n");
										copia(v,n,v1);
										burbuja(n,v1,num);
										muestra(n,v1);
										printf("\n");
										system("pause");
										system("cls");																
										break;
								
								case 2: printf("\nVECTOR ORDENADO POR METODO DE INSERCION O BARAJA\n\n");
										copia(v,n,v1);
										baraja(n,v1);
										muestra(n,v1);
										printf("\n");
										system("pause");
										system("cls");
										break;
								
								case 3:	printf("\nVECTOR ORDENADO POR METODO DE SELECCION O SENCILLO\n\n");
										copia(v,n,v1);
										seleccion(v1,n);
										muestra(n,v1);
										printf("\n");
										system("pause");
										system("cls");
										break;
										
								case 4: printf("\nVECTOR ORDENADO POR METODO DE QUICKSORT\n\n");
										copia(v,n,v1);
										quicksort(v1,0,n-1);
										muestra(n,v1);
										printf("\n");
										system("pause");
										system("cls");		
										break;
								
								case 5:	printf("\nVECTOR ORDENADO POR METODO DE MERGESORT\n\n");
										copia(v,n,v1);
										msort(v1,n);
										muestra(n,v1);		
										
										printf("\n");
										system("pause");
										system("cls");
										break;
								
								case 6: printf("\nEL VECTOR ORIGINAL ES:\n\n");
										muestra(n,v);
										printf("\n");
										system("pause");
										system("cls");
										break;
								
								case 7:	
										break;
							
								case 8:
										break;
								
								default: printf("EL NUMERO INGRESADO NO CORRESPONDE A LAS OPCIONES\n");	
							}
							
					}while (x<7);
				}while (x==8);
		break;
		
		case 2:
		break;
		
		default: printf("INGRESE EL NUMERO CORRESPONDIENTE");
			
	}
	system("pause");
}








