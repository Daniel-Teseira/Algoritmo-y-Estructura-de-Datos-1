#include <stdio.h>
#include <stdlib.h>
#include <ctime>

main() 
{ 
	int i,nro,N,nro_azar; 
  	srand(time(0)); //para que el parametro no sea siempre el mismo
  	//printf("\t %d",time(0));
  	printf("\nIngrese la cantidad de nros que quiere generar: ");
  	scanf("%d",&N);
  	printf("\n\n");
	for(i=0;i<N;i++)
	{ 
		nro_azar=1+rand()%10;
		printf("\t %d",nro_azar); //Sumando el 1 hace que vaya del 1 al 10 y no del 0 al 9

	}
	printf("\n\n");
	system("pause");
}

