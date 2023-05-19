#include<stdio.h>
#include<stdlib.h>

main ()
{
	int N,x,suma=0,i;
			//float
	printf("Ingresar la cantidad de elementos: ");
	scanf("%d",&N);	
	for(i=1;i<=N;i=+1)
	{		printf("\nIngrese el numero: ");
		scanf("%d",&x);
		if(i % 2 !=0) //mod=%
			{
			suma=suma+x;
			}
	}
	printf("\nLa suma de los valores que estan en la posicion impar es: ");
	printf("%d",suma);
	
	system("pause");
	
}
