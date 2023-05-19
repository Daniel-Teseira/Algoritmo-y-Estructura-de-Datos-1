#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

main()
{
     int i,j,k;
    imprimearreglo();
	//baraja 
    for (i=1; i<10; i++) { 
        j=i; 
            while (j>=0 && arreglo[j]<arreglo[j-1]) { 
                k=arreglo[j]; 
                arreglo[j]=arreglo[j-1]; 
                arreglo[j-1]=k; 
                j--; 
            } 
    } 



	system("pause");
}
// metodo de burbuja
int menor(int n,int v[100],int &num)
{
	int b=0,i,c,aux;
	
	do
	{
		b=0;
		for (i=0;i<n-1;i++)
		{
			if (v[i]<v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				b=1;
			}
		}
	}
	while (b==1);
	
		for (i=0;i<n;i++)
	{
		printf("\n v[%d]= %d\n\n",i,v[i]);
	}
	
	num=v[n-1];
		
return num;
}
//fin de metodo de burbuja


//metodo por baraja
void SortArray (int array[],int first,int last)
{
    int i,j,p,t;
    i= first;
    j= last;
    p= array[(first+last)/2];

    do { 
        // se hace la partición del arreglo
        while (array[i]<p) i++; 
        while (p<array[j]) j--;
        if (i<=j)
		 {// se intercambian los elementos i-esimo y j-esimo del arreglo
                t= array[i]; 
                array[i]= array[j]; 
                array[j]= t; 
                i++; j--;
        }
    } while (i<=j); 
    if (first<j) SortArray(array,first,j); 
    if (i<last) SortArray(array,i,last); 
}  
//fin del metodo por baraja

//metodo de seleccion
void ordenarArreglo(int * const arreglo, const int tamanio)
	{
		int minimo; //almacena el subíndice del valor minimo
		for(int i = 0; i < tamanio; i++ )//recorre todo el arreglo desde la posición inicial hasta el final
		{
			minimo = i; //se asume que el subíndice del valor mínimo es el primer valor
			for( int j = i + 1; j < tamanio; j++)//recorre el arreglo desde una posición siguiente al inicio
			{
				if( arreglo[j] < arreglo[minimo])
				minimo = j; //el minimo subíndice es j
 
			intercambiar( &arreglo[i] , &arreglo[minimo] ); //intercambio de valores del arreglo
 
			}
		}
 
 
 
	}
 
 
	/*
		void intercambiar: Intercambia los valores de entrada a través de apuntadores
		constantes a datos no constantes
	*/
	void intercambiar( int * const aPtr, int * const bPtr)
	{
 
		int aux = *aPtr;//uso de un auxiliar para el intercambio de los valores
		*aPtr = *bPtr;
		*bPtr = aux;
	}
// fin metodo de seleccion

//metodo quickshort
int dividir(int *array, int inicio, int final) {
    int izquierda;
    int derecha;
    int pivote;
    int temp;
 
    pivote = array[inicio];
    izquierda = inicio;
    derecha = final;
 
    // Mientras no se cruzen los índices
    while (izquierda < derecha) {
        while (array[derecha] > pivote) {
            derecha--;
        }
 
        while ((izquierda < derecha) && (array[izquierda] <= pivote)) {
            izquierda++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (izquierda < derecha) {
            temp = array[izquierda];
            array[izquierda] = array[derecha];
            array[derecha] = temp;
        }
    }
 
    // Cuando los indices se han cruzado, ponemos el pivote en el lugar que le corresponde
    temp = array[derecha];
    array[derecha] = array[inicio];
    array[inicio] = temp;
 
    // Return para aplicar la nueva ubicacion del pivote
    return derecha;
}
 
// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int inicio, int final)
{
    int pivote;
 
    if (inicio < final) {
        pivote = dividir(array, inicio, final);
 
        // Ordeno la lista de los menores
        quicksort(array, inicio, pivote - 1);
 
        // Ordeno la lista de los mayores
        quicksort(array, pivote + 1, final);
    }
}
//fin metodo quickshort 



