#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>

main()
{
	//setlocale(LC_CTYPE,"Spanish");
	int matriz[2][2], i,j;
	printf("*********************************************************");
	printf("\n*\tPor favor ingresar los valores de la matriz\t*\n");
	printf("*********************************************************");
	for(i=0; i<2; i++)
	{
	  for (j=0; j<2; j++)
	  {
	    printf("\nELEMENTO (%d,%d)= ",i,j);
		scanf("%d", &matriz[i][j]);
	  }
	}
	system("cls");
	printf("la matriz es: \n");
	for(i=0; i<2; i++)
	{
		printf("\n");
	  for(j=0; j<2; j++)
	  {
	    printf("\t%d\t", matriz[i][j]);	    
	  }
	}

return 0;

printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

