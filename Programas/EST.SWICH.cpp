# include <stdio.h>
int A, B, X, C;
main()
{
	printf("INGRESE EL VALOR DE A:");
	scanf ("%d",&A);
	printf("INGRESE EL VALOR DE B:");
	scanf ("%d",&B);
	printf("INGRESE EL VALOR DE X (1) SUMAR (2) RESTAR (3) MULTIPLICAR:");
	scanf ("%d",&X);
	switch (X)
{
case 1 : C = A + B;
printf("RESULTADO: %d",C);
break;
case 2 : C = A - B;
printf("RESULTADO: %d",C);
break;
case 3 : C = A * B;
printf("RESULTADO: %d",C);
break;
default : printf("No hay operaciones a realizar");
}
}
