#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//int ;
float dr,x,y;

main()
{

printf("INGRESE LA CAPACIDAD DEL DISCO RIGIDO QUE SE NECESITA COPIAR(GB): ");
printf("\n");
scanf("%f",&dr);
printf("\n");

x=dr*1024;//gb=>mb
y=x/700;//cantidad de cd's

printf("LA CANTIDAD DE CD'S QUE SE NECESITARAN SON: ");
printf("\n");
printf("%.1f",y);
printf("\n");


system("pause");
}

