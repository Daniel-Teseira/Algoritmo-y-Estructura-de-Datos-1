#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void palindromo(int valor, bool &resesultado);

main()
{

	int N,X,c=0,resultado;
	bool res;
	
	printf("INGRESE LA CANTIDAD DE ELEMENTOS: ");
	scanf("%d",&N);	
	while (c<N)
		{
			printf("\nINGRESE EL NUMERO (5 DIGITOS): ");
			scanf("%d",&X);
			if(X>9999 and X<100000)
				{
					palindromo(X,res);
					if(res==true)
						{
							printf("\nEL NUMERO SI ES PALINDROMO");
							printf("\n");
						}
					else
						{
							printf("\nEL NUMERO NO ES PALINDROMO");
							printf("\n");
						}
					c++;
					
				}
			else 
				{
					printf("\nEL NUMERO INGRESADO NO ES DE 5 DIGITOS");
					printf("\n");
				}
				
				
		}
		
printf("\n");
system("pause");

}

void palindromo(int valor, bool &resultado)
{
	int pe,ni=0,res,r;
	pe=valor;

	while(pe!=0)
		{
			r=pe%10;
			pe=pe/10;
			ni=ni*10+r;
		}
			if(ni==valor)
			{
				resultado=true;
			}
			else 
			{
				res=false;
			}
			
}



