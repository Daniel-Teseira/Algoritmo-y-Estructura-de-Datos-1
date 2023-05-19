#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>

//Realizar un programa que efectúe diversas operaciones con matrices. La selección
// de cada operación se debe hacer mediante un conjunto de opciones organizados en un 
//menú que permita elegir: a ) suma de matrices de 2x3; b) resta de matrices de 2x2; 
//c) multiplicación de una matriz de 2x3 por un escalar; d) multiplicación de dos matrices.
// Utilizar Switch-Case para confeccionar el menú.

main()
{ 
	//definimos las variables
	 
	int matriz[2][3],i,j, producto_escalar[2][3], escalar, matriz2[2][3], suma[2][3];
	int m1[2][2], m2[2][2], resta[2][2];
	int f1,f2,c1,c2;
	int opcion;
	
	//menú principal
	do
	{
		system("cls");
		printf("\t\tHola, bienvenido a la calculadora de matrices");
		printf("\n=============================================================================\n");
		printf("=\tOPCION 1) -- SUMA DE MATRICES DE 2X3                                =\n");
		printf("=\tOPCION 2) -- RESTA DE MATRICES DE 2X2                               =\n");
		printf("=\tOPCION 3) -- MULTIPLICACION DE UNA MATRIZ DE 2X3 POR UN ESCALAR     =\n");
		printf("=\tOPCION 4) -- MULTIPLICACION DE DOS MATRICES                         =\n");
		printf("=\tOPCION 5) -- PARA SALIR                                             =\n");
		printf("=============================================================================\n");
		printf("INGRESE LA OPCION: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				{		  				  
					printf("\nPor favor ingrese los valores de la 1° matriz 2x3\n");
				    for(i=0;i<2;i++)
					{//filas
				    	for(j=0;j<3;j++)
						{//columnas
				        	printf("ELEMENTO (%d, %d) = ",i,j);
				       		scanf("%d",&matriz[i][j]);
				       	}
				    }			    
			    	printf("Por favor ingrese los valores de la 2° matriz 2x3\n");
			    	for(i=0;i<2;i++)
					{//filas
						for(j=0;j<3;j++)
						{//columnas
					    	printf("ELEMENTO (%d, %d) = ",i,j);
					       	scanf("%d",&matriz2[i][j]);
					       	suma[i][j]=matriz[i][j]+matriz2[i][j];
						}
			    	}
			    	//imprime el valor de la matriz
			    	printf("\nla suma de las matrices es: \n");
			    	for(i=0; i<2; i++)
					{
			      		printf("\n\n");
			      		for(j=0; j<3; j++)
						{
			        		printf("\t%d\t", suma[i][j]);
			      		}
			    	}
			    	printf("\n\n");
					system ("pause");
					system("cls");		
			    }
		    	break;
		  
		  case 2:
				{		 
			    	printf("\nPor favor ingrese los valores de la 1° matriz 2x2\n");
				    for(i=0; i<2; i++)
					{//filas
				    	for (j=0; j<2; j++)
						{//columnas
				       		printf("ELEMENTO (%d, %d) = ", i, j);
				       		scanf("%d", &m1[i][j]);
				       	}
				    }
				    printf("Por favor ingrese los valores de la 2° matriz 2x2\n");
				    for(i=0; i<2; i++)
					{//filas
				       for (j=0; j<2; j++)
					   {//columnas
					       printf("ELEMENTO (%d, %d) = ", i, j);
					       scanf("%d", &m2[i][j]);
					       resta[i][j]=m1[i][j]-m2[i][j];
				       }
				    }
			    	//imprime el valor de la matriz
				    printf("\nla resta de las matrices es: \n");
				    for(i=0; i<2; i++)
					{
				       printf("\n\n");
				       for(j=0; j<3; j++)
					   {
				         printf("\t%d\t", resta[i][j]);
				       }
				    }
				    printf("\n\n");
					system ("pause");
					system("cls");
				}				
			    break;
						  
		  case 3:
				{		  				  
					//pedimos los valores
				    printf("\nPor favor ingresar un escalar para multiplicarlo por la matriz.\n");
				    scanf("%d",&escalar);
				    printf("\nPor favor ingresar los valores de la matriz .\n");
				    for(i=0;i<2;i++)
					{//filas
				       for(j=0;j<3;j++)
					   {//columnas
				         printf("ELEMENTO (%d, %d) = ", i, j);
				         scanf("%d", &matriz[i][j]);
				         producto_escalar[i][j]=escalar*matriz[i][j];//realiza el producto
				       }
				    }
				    //imprime el valor de la matriz
				    printf("\nel producto de las matrices es: \n");
				    for(i=0; i<2; i++)
					{
				       printf("\n\n");
				       for(j=0; j<3; j++)
					   {
				         printf("\t%d\t", producto_escalar[i][j]);
				       }
				    }
				    printf("\n\n");
					system ("pause");
					system("cls");
				}				
			    break;		  
		
		  case 4:
		  		{		  	  			
					printf("\nPor favor ingresar el numero de filas de la matriz n° 1: ");
					scanf("%d",&f1);
					printf("Por favor ingresar el numero de columnas de la matriz n° 1: ");
					scanf("%d",&c1);
					printf("Por favor ingresar el numero de filas de la matriz n° 2: ");
					scanf("%d",&f2);
					printf("Por favor ingresar el numero de columnas de la matriz n° 2: ");
					scanf("%d",&c2);
					int prodmat[f1][c2],mp1[f1][c1],mp2[f2][c2];
					if(c1==f2)
					{
						printf("\nPor favor ingresar los valores de la matriz 1.\n");
						for(i=0; i<f1; i++)
						{//filas
							for (j=0; j<c1; j++)
							{//columnas
								printf("ELEMENTO (%d, %d) = ", i, j);
								scanf("%d", &mp1[i][j]);
							}
						}
						printf("\nPor favor ingresar los valores de la matriz 2.\n");
						for(i=0; i<f2; i++)
						{//filas
							for (j=0; j<c2; j++)
							{//columnas
								printf("ELEMENTO (%d, %d) = ", i, j);
								scanf("%d", &mp2[i][j]);
							}
						}
										     
						//EN EL CASO DE QUE LOS SUBINDICES IGUALES SEAN 2
						if(c1==2 && f2==2)
						{
							for(i=0; i<f1; i++)
							{//filas
								for (j=0; j<c2; j++)
								{//columnas
									prodmat[i][j]= (mp1[i][0]*mp2[0][j]) + (mp1[i][1]*mp2[1][j]) ;
								}
							}					    
							//imprime el valor de la matriz
							printf("\nel producto de las matrices es: \n");
							for(i=0; i<f1; i++)
							{
								printf("\n\n");
								for(j=0; j<c2; j++)
								{
									printf("\t%d\t", prodmat[i][j]);
								}
							}	
						}
						
						//EN EL CASO DE QUE LOS SUBINDICES IGUALES SEAN 3
						if(c1==3 && f2==3)
						{
							for(i=0; i<f1; i++)
							{//filas
							for (j=0; j<c2; j++)
								{//columnas
									prodmat[i][j]= (mp1[i][0]*mp2[0][j]) + (mp1[i][1]*mp2[1][j]) + (mp1[i][2]*mp2[2][j]);
								}
							}						    
							//imprime el valor de la matriz
							printf("\nel producto de las matrices es: \n");
							for(i=0; i<f1; i++)
							{
								printf("\n\n");
								for(j=0; j<c2; j++)
								{
									printf("\t%d\t", prodmat[i][j]);
								}
							}	
						}
						
						//EN EL CASO DE QUE LOS SUBINDICES IGUALES SEAN 4
						if(c1==4 && f2==4)
						{
							for(i=0; i<f1; i++)
							{//filas
							for (j=0; j<c2; j++)
								{//columnas
									prodmat[i][j]= (mp1[i][0]*mp2[0][j]) + (mp1[i][1]*mp2[1][j]) + (mp1[i][2]*mp2[2][j]) + (mp1[i][3]*mp2[3][j]);
								}
							}						    
							//imprime el valor de la matriz
							printf("\nel producto de las matrices es: \n");
							for(i=0; i<f1; i++)
							{
								printf("\n\n");
								for(j=0; j<c2; j++)
								{
									printf("\t%d\t", prodmat[i][j]);
								}
							}	
						}
						
						//EN EL CASO DE QUE LOS SUBINDICES IGUALES SEAN 5
						if(c1==5 && f2==5)
						{
							for(i=0; i<f1; i++)
							{//filas
							for (j=0; j<c2; j++)
								{//columnas
									prodmat[i][j]= (mp1[i][0]*mp2[0][j]) + (mp1[i][1]*mp2[1][j]) + (mp1[i][2]*mp2[2][j]) + (mp1[i][3]*mp2[3][j]) + (mp1[i][4]*mp2[4][j]);
								}
							}						    
							//imprime el valor de la matriz
							printf("\nel producto de las matrices es: \n");
							for(i=0; i<f1; i++)
							{
								printf("\n\n");
								for(j=0; j<c2; j++)
								{
									printf("\t%d\t", prodmat[i][j]);
								}
							}	
						}										    
					}
					else
					{
						printf("**ERROR**\nEl numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda matriz\n");
					}
					printf("\n\n");
					system ("pause");
					system("cls");				
				}				
				break;
			case 5:
				{					
					printf("\n========== Gracias por utilizar nuestros servicio ===========\n");
    				printf("\n\n");
					system ("pause");
					system("cls");
				}
				break;    
			default:
				{							   			
			   			printf("\n========== Error. Ha ingresado una opcion incorrecta ===========\n");
			   			printf("\n\n");
						system ("pause");
						system("cls");
				}
		   		break;		 
		}
	}while(opcion!=5);
printf("\n\n");
system ("pause");	
}


