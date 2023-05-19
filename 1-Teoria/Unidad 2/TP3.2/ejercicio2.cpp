#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int x,y,s,n,z;

main()
{
s=0;

printf("INGRESE LA CANTIDAD DE COORDENADAS: ");
printf("\n");
scanf("%d",&n);

for(z=0;z<n;z=z+1)
	{
		printf("\n");
		printf("INGRESE EL VALOR DE X: ");
		printf("\n");
		scanf("%d",&x);
		printf("\n");
		
		printf("INGRESE EL VALOR DE Y: ");
		printf("\n");
		scanf("%d",&y);
		printf("\n");
		
		if (x>=-3 and y<3 and x<=3 and y>=-3)
			{
				printf ("\nEL PUNTO SE ENCUENTRA DENTRO DEL CUADRADO");
				printf("\n");
			}	
	
			else 
				{ 
					printf ("\nEL PUNTO SE ENCUENTRA FUERA DEL CUADRADO");
					printf("\n");
					s=s+1;
				}
		
		
	
	}

printf("\n");		
printf("LA CANTIDAD DE PUNTOS FUERA DEL CUADRADO SON: ");
printf("%d",s);
printf("\n");

system("pause");
}

