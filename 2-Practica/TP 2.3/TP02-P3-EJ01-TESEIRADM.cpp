#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int ef,tf;
float np,pnp,nf1,pef,ptf,nf;

main()
{

printf("INGRESE LA NOTA PROMEDIO DE LOS 2 PARCIALES:");
printf("\n");
scanf("%f",&np);//nota parciales
printf("\n");

printf("INGRESE LA NOTA DE SU EXAMEN INTEGRADOR: ");
printf("\n");
scanf("%d",&ef);//examen final
printf("\n");

printf("INGRESE LA NOTA DE SU TRABAJO FINAL: ");
printf("\n");
scanf("%d",&tf);//trabajo final
printf("\n");

pnp=(np*50)/10;
pef=(ef*30)/10;
ptf=(tf*20)/10;
nf=pnp+pef+ptf;
nf1=nf/10;


printf("\nLA NOTA FINAL ES: ");
printf("\n");
printf("%.2f",nf1);
printf("\n");




system("pause");
}

