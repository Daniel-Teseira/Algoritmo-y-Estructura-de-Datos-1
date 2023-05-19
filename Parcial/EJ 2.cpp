#include <stdio.h>
#include <stdlib.h>

bool esDecimal(float num);

void mayorValor(float num, float &may);

float menorValor(float num, float men);

main()
{
	float numIng, sumaDecimales=0, sumaEnteros=0;
	
	printf("Ingrese un valor: ");	
	scanf("%f", &numIng);
	
	float may = numIng;	
	float men = numIng;
		
	while( numIng !=0)
	{	
		if(esDecimal(numIng))
		{		
			sumaDecimales = sumaDecimales + numIng;		
		}else
		{		
			sumaEnteros = sumaEnteros + numIng;		
		}
		
		mayorValor(numIng, may);
		men = menorValor(numIng, men);
		
		printf("Ingrese un valor: ");		
		scanf("%f",&numIng);
		
	}
	
	system("CLS");
	
	printf("===================================");	
	printf("\n Listados de los Resultados");	
	printf("\n===================================");	
	printf("\nEl mayor valor ingresador es %f",may);	
	printf("\nEl menor valor ingresado es %f",men);	
	printf("\n===================================");	
	printf("\nLa suma de numeros sin decimales es %.0f", sumaEnteros);	
	printf("\nLa suma de numeros Con decimales es %.2f", sumaDecimales);
}

 

/*----------------------------------------*/

bool esDecimal(float num)
{

int ent=num;
return true;

}

 

/*----------------------------------------*/

void mayorValor(float num, float &may){

if(num>=may)
may=num;

} 

/*----------------------------------------*/

float menorValor(float num, float men){

if(num<=men)

men=num;

return men
;

}
