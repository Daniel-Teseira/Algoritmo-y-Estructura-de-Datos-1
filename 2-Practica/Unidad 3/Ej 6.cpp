#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

//COMPILA PERO NO SALE LO Q ME PIDE

int horas(int x,int &h);
int minutos(int x,int &m);
int segundos(int x,int &s);

main()
{
	int x,h,m,s;
	printf ("ingrese la cantidad de dias: ");
	scanf ("%d",&x);
	if(x>100)
	{
		horas(x,h);		
		printf("\nEQUIVALENCIA EN HORAS ES: %d",h);
		minutos(x,m);		
		printf("\nEQUIVALENCIA EN MINUTOS: %d",m);
		segundos(x,s);
		printf("\nEQUIVALENCIA EN SEGUNDOS: %d\n",s);		
	}	
	system ("\npause");
}

int horas(int x,int &h)
{
	h=x*24;	
	return h;
}

int minutos(int x,int &m)
{
	m=x*1440;	
	return m;
}

int segundos(int x,int &s)
{
	s=x*86400;	
	return s;
}
