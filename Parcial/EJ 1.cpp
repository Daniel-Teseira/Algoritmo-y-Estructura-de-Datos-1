#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/*-------------------------------------------------*/

void carga(int matriz[10][10] , int filas, int columnas);

void muestra(int matriz[10][10], int filas, int columnas);

void transpuesta(int matriz[10][10], int matrizT[10][10], int filas, int columnas);

main(){

int mat[10][10];

int m, n;

printf("ingrese la cantidad de filas: ");

scanf("%d", &m);

printf("ingrese la cantidad de columnas: ");

scanf("%d", &n);

carga(mat, m, n);


muestra(mat, m, n);

printf("\n");

int t[10][10];       //matriz Transpuesta

transpuesta(mat, t, m, n);

muestra(t, n, m);

}

/*-------------------------------------------------*/

void carga(int matriz[10][10], int filas, int columnas){

srand(time(NULL));

for(int i=0; i<filas; i++){

for (int j=0; j<columnas; j++){


matriz[i][j] = rand()%10;

}

}

}

/*-------------------------------------------------*/

void muestra(int matriz[10][10], int filas, int columnas){

for(int i=0; i<filas; i++){

for (int j=0; j<columnas; j++){

printf("[%d]", matriz[i][j]);

}

printf("\n");

}

}

/*-------------------------------------------------*/

void transpuesta(int matriz[10][10], int matrizT[10][10], int filas, int columnas){

for(int i=0; i<filas; i++){

for (int j=0; j<columnas; j++){

matrizT[j][i] = matriz[i][j]
;

}

}

}

 

