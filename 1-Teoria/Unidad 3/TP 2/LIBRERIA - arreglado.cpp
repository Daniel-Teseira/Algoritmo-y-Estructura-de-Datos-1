#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int contador(int x,int y,int &cp,int &cm5,int &cm6,float &pp,float &pm5,float &pm6);

main()
{
	int x,y,z,cp,cm5,cm6;
	float pp,pm5,pm6;
	
	printf("INGRESE LA CANTIDAD DE NUMEROS: ");
	scanf("%d",&x);
	
	for(z=0;z<x;z=z++)
	{
		
		printf("INGRESE EL NUMERO: ");
		scanf("%d",&y);
		contador(x,y,cp,cm5,cm6,pp,pm5,pm6);
	}
	
	
	printf("\nCANTIDAD DE VALORES PARES: %d",cp);
	printf("\nCANTIDAD DE VALORES MULTIPLOS DE 5: %d",cm5);
	printf("\nCANTIDAD DE VALORES MULTIPLOS DE 6: %d",cm6);
	printf("\nPORCENTAJE DE VALORES PARES: %.2f",pp);
	printf("\nPORCENTAJE DE VALORES MULTIPLODE 5: %.2f",pm5);
	printf("\nPORCENTAJE DE VALORES MULTIPLODE 6: %.2f",pm6);
	printf("\n");

system("pause");
}

int contador(int x,int y,int &cp,int &cm5,int &cm6,float &pp,float &pm5,float &pm6)
{
	int p,m5,m6,z;
	int p1=0;
	int ccm5=0;
	int ccm6=0;
	int ccp=0;	
	
	for(z=0;z<x;z=z++)
	{
		p=(y%2);
		if(p==0)
			{
			ccp=ccp+1;			
			}
					
		m5=(y%5);
		if(m5==0)
			{
			ccm5=ccm5+1;				
			}
			
		m6=(y%6);				
		if(m6==0)
			{
			ccm6=ccm6+1;					
			}	
	}
	
	cp=ccp;
	cm6=ccm6;
	cm5=ccm5;			
	pp=(cp*100)/x;
	pm5=(cm5*100)/x;
	pm6=(cm6*100)/x;
			
	return cp,cm5,cm6,pp,pm5,pm6;	
}






