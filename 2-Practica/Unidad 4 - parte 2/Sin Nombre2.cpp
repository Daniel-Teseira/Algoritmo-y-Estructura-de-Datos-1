/GENERAR Y MOSTRAR UNA MATRIZ MEDIANTE FUNCIONES
#include <stdio.h>
#include <stdlib.h>
#include <ctime> // o tambien #include <time.h>

 

void cargar(int matriz[25][25], int N, int M);
void mostrar(int matriz[25][25], int N, int M);
void calculo(int matriz[25][25], int N, int M);

 

main(){
    int mat[25][25];
    int N,M,numero,f1,c1;
    srand(time(0));
    printf("\n\nIngrese la cantidad de filas y columnas");
    printf("\n\nCantidad de filas: ");
    scanf("%d",&N);
    printf("\n\nCantidad de columnas: ");
    scanf("%d",&M);
    cargar(mat,N,M);
    mostrar(mat,N,M);

 

    printf("\n\nIngrese la fila y columna del elemento a cambiar: ");
    printf("\n\nFila: ");
    scanf("%d",&f1);
    printf("\n\nColumna: ");
    scanf("%d",&c1);
    mat[f1-1][c1-1]=0;
    mostrar(mat,N,M);
    calculo(mat,N,M);
    printf("\n\n");
    system("pause");
}

 

void cargar(int matriz[25][25], int N, int M)    
//CARGA DE LA MATRIZ
{
    int f,c,k=1,numero;
    for(f = 0; f < N; f++)
    {
        for(c = 0; c < M; c++)
        {
           matriz[f][c] = 1 + rand() % (99);
           /*printf("\nIngrese el elemento %d,%d de la matriz: ",f+1,c+1);
           scanf("%d",&numero);
           if (numero<=0)    
                   {
                       printf("\nDebe ingresar un numero positivo!!");
                       c--;
                   }
                   else
                   matriz[f][c]=numero;*/
        }
    }
}

 

void mostrar(int matriz[25][25], int N, int M)    
//VISUALIZAR LA MATRIZ
{
    int f,c,S=0;
    printf("\n\nElementos de la Matriz\n");
    for(f = 0; f < N; f++)
    {
        printf("\n\n");
        for(c = 0; c < M; c++)
        {
            printf("\t%d",matriz[f][c]);
        }
    }
}

 

void calculo(int matriz[25][25], int N, int M)    
//VISUALIZAR LA MATRIZ
{
    int f,fila,c,S,St=0,mayor=matriz[0][0];
    int columna,Sc,mayorC=matriz[0][0];

 

    for(f = 0; f < N; f++)
    {
        S=0;
        for(c = 0; c < M; c++)
        {
        S=S+matriz[f][c];
        St=St+matriz[f][c];
        }
        //printf("\n%d",S);
        if (S>mayor)
        {
            mayor=S;
            fila=f;    
        }
    }
    printf("\n\n");
    //Columnas
    for(c = 0; c < M; c++)
    {
        Sc=0;
        for(f = 0; f < N; f++)
        {
        Sc=Sc+matriz[f][c];
        }
        //printf("\n%d",Sc);
        if (Sc>mayorC)
        {
            mayorC=Sc;
            columna=c;    
        }
        
    }
    
    printf("\n\nTotal de elementos: %d",St);
    printf("\nLa fila con mas elementos es: %d",fila+1);
    printf("\nLa columna con mas elementos es: %d",columna+1);
}
