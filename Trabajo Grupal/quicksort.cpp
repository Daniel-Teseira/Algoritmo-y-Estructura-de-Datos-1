#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//CARGA DEL VECTOR
void vector(int a,int v[100])
{
	for (int i=0;i<a;i++)
	{
		printf("INGRESE EL (%d) NUMERO: ",i);
		scanf("%d",&v[i]);
	}
}

//MUESTRA DE VECTOR ORIGINAL
void muestra(int a,int v[100])
{
	int i;
	printf("\nMUESTRA DEL VECTOR");
	for (i=0;i<a;i++)
	{
		printf("\n v[%d]= %d\n",i,v[i]);
	}
}

//ORDENAMIENTO QUICKSORT
int dividir(int v[100],int inicio, int final) 
{
    int izquierda,derecha,pivote,temp;
    
    pivote=v[inicio];
    izquierda=inicio;
    derecha=final;
    
    // Mientras no se cruzen los índices
    while (izquierda<derecha)
	 {
        while (v[derecha]>pivote)
		{
            derecha--;
        }
 
        while ((izquierda<derecha)&&(v[izquierda]<=pivote))
		{
            izquierda++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (izquierda<derecha)
		{
            temp=v[izquierda];
            v[izquierda]=v[derecha];
            v[derecha]=temp;
        }
    }
 
    // Cuando los indices se han cruzado, ponemos el pivote en el lugar que le corresponde
    temp=v[derecha];
    v[derecha]=v[inicio];
    v[inicio]=temp;
 
    // Return para aplicar la nueva ubicacion del pivote
    return derecha;
}
 
// Función recursiva para hacer el ordenamiento
void quicksort(int v[100],int inicio,int final)
{
    int pivote;
 
    if (inicio<final) 
	{
        pivote=dividir(v,inicio,final);
		 
        // Ordeno la lista de los menores
        quicksort(v,inicio,pivote - 1); 
        
        // Ordeno la lista de los mayores
        quicksort(v,pivote+1,final);
    }
    
}

//ORDENAMIENTO SELECCION
void seleccion(int v[100],int n)
	{
		int minimo,j,i,aux;											//almacena el subíndice del valor minimo
		for(i=0;i<n;i++ )									//recorre todo el arreglo desde la posición inicial hasta el final
		{
			minimo=i;											//se asume que el subíndice del valor mínimo es el primer valor
			for(j=i+1;j<n;j++)									//recorre el arreglo desde una posición siguiente al inicio
			{
				if( v[j]<v[minimo])
				{
				minimo=j;				//el minimo subíndice es j 
				aux=v[i];				//uso de un auxiliar para el intercambio de los valores
				v[i]=v[minimo];
				v[minimo]=aux;
				}				 
			}
		} 
	}

//merge
void merge(int izq[100],int nIzq,int der[100],int nDer,int v[100])
{
	int i=0,j=0,k=0;
	while((i<nIzq) && (j<nDer))
	{
		if(izq[i]<=der[j])
		{
			v[k]=izq[i];
			i++;
		}
		else
		{
			v[k]=der[j];
			j++;
		}
		k++;
	}
	
	while(i<nIzq)
	{
	  v[k]=izq[i];
	  i++;
	  k++;
	}
	while(j<nDer)
	{
	  v[k]=der[j];
	  j++;
	  k++;
	}
}

//ORDENAMIENTO MERGESORT
void msort(int v[100],int n)
{
	int izq[100],der[100],mitad;
	
	if(n==1){return;}
	mitad=n/2;
	//int izq[100]=new int[mitad];
	//int der[100]=new int[n-mitad];
	for(int i=0;i<mitad;i++)
	{
		izq[i] = v[i];
	}
	for(int i=mitad;i<n;i++)
	{
		der[i-mitad]=v[i];
	}
	msort(izq,mitad);
	msort(der,n-mitad);
	merge(izq,mitad,der,n-mitad,v);
}

main()
{
    int i,j,v[100],n,b[100];
    printf("INGRESE LA CANTIDAD DE COMPONENTES QUE TENDRA EL VECTOR: ");
	scanf("%d",&n);
	
	vector(n,v);
	printf("MUESTRA DEL VECTOR ORIGINAL:");
	muestra(n,v);
	/*
	quicksort(v,0,n-1);
	printf("MUESTRA DEL VECTOR POR METODO DE ORDENAMIENTO QUICKSORT:");
	muestra(n,v);
	
	seleccion(v,n);
	printf("MUESTRA DEL VECTOR POR METODO DE ORDENAMIENTO DE SELECCION");
	muestra(n,v);
	*/
	msort(v,n);
	printf("MUESTRA DEL VECTOR POR METODO DE ORDENAMIENTO DE MERGESORT");
	muestra(n,v);
	
	system("pause");
}







