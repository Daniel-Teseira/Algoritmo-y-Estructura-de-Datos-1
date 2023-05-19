#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<calculos.h>

int suma(int a,int b,int &r1)
{
	r1=a+b;
return r1;
}

int resta(int a,int b,int &r2)
{
	r2=a-b;
return r2;
}

int mul(int a,int b,int &r3)
{
	r3=a*b;
return r3;
}

float div(float a,float b,float &r4)
{
	if(b==0)
	{
		printf("NO SE PUEDE CALCULAR LA DIVICION");
	}
	else
	{
		r4=a/b;
	}
return r4;
}










