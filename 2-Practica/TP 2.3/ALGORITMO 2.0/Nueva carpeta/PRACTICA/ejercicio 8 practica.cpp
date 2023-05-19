#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>

main ()
{
	int n,nc;
	
	printf("\ningresar cantidad de numeros: ");
	scanf("%d",&n);
	
	printf("\n\t-------------------------------------------------------------------\n");
	
	for (int i=0 ; i<=n ; i=i+1)
	{
		printf("\n\nningrese un numero de tres cifras: ");
		scanf("%d",&nc);
		
		if (nc>=100 and nc<=1000)
		{
			printf("\nel numero ingresado es de tres cifras");
		}
		else
		{
			printf("\npor favor ingrese un numero de tres cifras\n");
		}
	}
	
	system("pause");
}
