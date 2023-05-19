#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//CARGA DEL VECTOR
void vector(int n,int v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\tINGRESE EL (%d) NUMERO: ",i);
		scanf("%d",&v[i]);
	}
}

//ORDENAMIENTO POR BURBUJA
int burbuja(int n,int v1[100],int &num)
{
	int b=0,i,c,aux;
	do
	{
		b=0;
		for (i=0;i<n-1;i++)
		{
			if (v1[i]>v1[i+1])
			{
				aux=v1[i];
				v1[i]=v1[i+1];
				v1[i+1]=aux;
				b=1;
			}
		}
	}
	while (b==1);
return num;
}

//COPIA DEL VECTOR ORIGINAL
void copia(int v[100],int n,int v1[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		v1[i]=v[i];
	}
}

//MUESTRA DE VECTOR 
void muestra(int n,int v[100])
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("\tv[%d]= %d\n",i,v[i]);
	}
}

//ORDENAMIENTO POR BARAJA
void baraja(int n,int v2[100])
{ 
    int i,j,k;    
    
    for (i=1; i<n; i++) 
	{ 
        j=i; 
            while (j>=0 && v2[j]<v2[j-1])
			{ 
                k=v2[j]; 
                v2[j]=v2[j-1]; 
                v2[j-1]=k; 
                j=j-1; 
            } 
    } 

}

//ORDENAMIENTO SELECCION
void seleccion(int v[100],int n)
{
		int minimo,j,i,aux;							
		for(i=0;i<n;i++ )							
		{
			minimo=i;								
			for(j=i+1;j<n;j++)						
			{
				if( v[j]<v[minimo])
				{
				minimo=j;				
				aux=v[i];				
				v[i]=v[minimo];
				v[minimo]=aux;
				}				 
			}
		} 
}

//ORDENAMIENTO QUICKSORT
int dividir(int v[100],int inicio, int final) 
{
    int izquierda,derecha,pivote,temp;
    
    pivote=v[inicio];
    izquierda=inicio;
    derecha=final;
    
    
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
 
        
        if (izquierda<derecha)
		{
            temp=v[izquierda];
            v[izquierda]=v[derecha];
            v[derecha]=temp;
        }
    }
 
    
    temp=v[derecha];
    v[derecha]=v[inicio];
    v[inicio]=temp;

    return derecha;
}
 
// Función recursiva para hacer el ordenamiento
void quicksort(int v[100],int inicio,int final)
{
    int pivote;
 
    if (inicio<final) 
	{
        pivote=dividir(v,inicio,final);
		quicksort(v,inicio,pivote - 1); 										
    	quicksort(v,pivote+1,final);											
    }    
}

//OEDENAMIENTO MERGESORT
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

