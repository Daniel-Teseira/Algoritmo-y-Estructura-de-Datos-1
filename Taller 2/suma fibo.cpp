#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int fibo(int n,int &r);
main()
{
	int n,r;
	printf("INGRESE UN VALOR: ");
	scanf("%d",&n);
	
	
	if(n>=0)
	{		
		fibo(n,r);
		printf("LA SUMA ES: %d",r);		
	}
	else
	{
		printf("\nEL NUMERO INGRESADO NO ES VALIDO\n\n");
	}

system("pause")	;
}

int fibo(int n,int &r)
{
	 //int s;
	 if (n==0)
	 {
		r=0;
	 }
	 else
	 {
	  //r=fibo(n-2,r)+fibo(n-1,r);
	  r=(n-1)+(n-2);	  
	 }
	 
return r;
}











