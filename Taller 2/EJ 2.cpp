#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<calculos.h>

int suma(int a,int b,int &r1);
int resta(int a,int b,int &r2);
int mul(int a,int b,int &r3);
float div(float a,float b,float &r4);

main()
{
    int a,b,r1,r2,r3;
    float r4;
 	
	printf("INGRESE EL PRIMER VALOR: ");
	scanf("%d",&a);
	printf("INGRESE EL SEGUNDO VALOR: ");
	scanf("%d",&b);
	
	suma(a,b,r1);
	printf("\nLA SUMA DE LOS VALORES ES: %d\n",r1);
	
	resta(a,b,r2);
	printf("LA RESTA DE LOS VALORES ES: %d\n",r2);
	
	mul(a,b,r3);
	printf("LA MULTIPLICACION DE LOS VALORES ES: %d\n",r3);
	
	div(a,b,r4);
	if(b>0)
	{
		printf("LA DIVICION DE LOS VALORES ES: %.2f\n",r4);
	}
	
	
	system("pause");
}





