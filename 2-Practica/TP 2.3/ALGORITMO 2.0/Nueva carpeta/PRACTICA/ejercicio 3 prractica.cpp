#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>

main()
{
	int a,b;
	float h;
	
	printf("\ningrese un valor de a: ");
	scanf("%d",&a);
	
	printf("\ningrese un valor de b: ");
	scanf("%d",&b);
	
	if (a>0 and b>0)
	{
		h= sqrt(a*a+b*b);
		printf("\nla distancia entre a y b es de: %f\n\n",h);
		
	}
	else 
	{
		printf("\nporfavor ingrese numeros positivos");
	}

	system ("pause");
}
