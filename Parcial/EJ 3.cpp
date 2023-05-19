#include <stdio.h>

void cargarElementos(int B[100], int N);

bool buscarValor(int B[100], int N, int valorBuscar);

void sumaParesImpares(int B[100],int N, int &pares, int &impares);

main(){

int N=5, valorBuscar=0;

bool siEsta = false;

int pares = 0, impares=0;

int B[N];

cargarElementos(B,N);

printf("\n\n Ingrese el valor que de desea buscar.. ");

scanf("%d",&valorBuscar);

if ( buscarValor(B,N, valorBuscar)){

printf("\n\nEl valor Buscado SI SE ENCUENTRA REGISTRADO....");

}else{

printf("\n\nEl valor buscado NO SE ENCUENTRA REGISTRADO....");

}

sumaParesImpares(B,N,pares,impares);

printf("\n\nLa suma de los Pares es: %d", pares);

printf("\nLa suma de los Impares es: %d", impares);

}


/*-----------------------------------*/
void cargarElementos(int B[100], int N){

int x;

for(int i = 0; i < N;i++)
{
printf("\n\nIngrese el valor de la celda %d: ", i);

scanf("%d", &x);

if(x>=1 && x<=100)
B[i]=x;

else{
printf("\n\n El valor ingresado no es un valor permitido...... Ingrese nuevamente\n");
i=i-1;

}

}

}

/*----------------------------------------*/

bool buscarValor(int B[], int N, int valorBuscar)
{
	bool band = false;
	
	for(int i=0; i< N; i++){
	
	if(B[i]==valorBuscar)
	
	band = true;
	
	}
	
	return band;

}

/*---------------------------------------*/
void sumaParesImpares(int B[100],int N, int &pares, int &impares)
{	
	for(int i=0; i<N; i++){
	
	if(B[i]%2==0)
		pares=pares + B[i];
	
	else	
		impares = impares + B[i];
	
	}
}
