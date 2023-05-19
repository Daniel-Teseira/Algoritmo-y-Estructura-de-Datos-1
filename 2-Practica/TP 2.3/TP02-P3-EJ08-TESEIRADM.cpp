#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//int ;
//float ;

main()
{
int n,ntc;
	
printf("INGRESEAR CANTIDAD DE NUMEROS: ");
printf("\n");
scanf("%d",&n);

for (int i=0 ; i<=n ; i=i+1)
{
	printf("\n");
	printf("INGRESE UN NUMERO DE 3 CIFRAS:");
	printf("\n");
	scanf("%d",&ntc);
	printf("\n");

	if (ntc>=100 and ntc<=1000)
		{
			int div1=ntc/100;
			int div2=(ntc%100)/10;
			int div3=(ntc%100)%10;
						
			printf("EL NUMERO DE LA PRIMERA CIFRA ES: %d",div1);
			printf("\nEL NUMERO DE LA SEGUNDA CIFRA ES: %d",div2);
			printf("\nEL NUMERO DE LA TERCERA CIFRA ES: %d",div3);
			printf("\n");
			
		}
		else
		{
			printf("\nPOR FAVOR INGRESE UN NUMERO DE 3 CIFRAS");
			printf("\n");
		}	
}




system("pause");
}

