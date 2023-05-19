#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

void multiplo(int x,int &mul1,int &mul2,int &mul3,int &mul4,int &mul5,int &mul6,int &mul7,int &mul8,int &mul9,int &mul10);
void submultiplo(int x,int &sm1,int &sm2,int &sm3,int &sm4,int &sm5,int &sm6,int &sm7,int &sm8,int &sm9,int &sm10);

main()
{
int x,mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10;
int sm1,sm2,sm3,sm4,sm5,sm6,sm7,sm8,sm9,sm10;

	printf("INGRESE UN NUMERO MAYOR A 0: ");
	scanf("%d",&x);
	
	multiplo(x,mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10);
	submultiplo(x,sm1,sm2,sm3,sm4,sm5,sm6,sm7,sm8,sm9,sm10);
	if (x>0)
		{
			
			printf("\nLOS 10 PRIMEROS MULTIPLOS NATURALES SON: \n\n");
			printf(" 1)%d",mul1);
			printf(" 2)%d",mul2);
			printf(" 3)%d",mul3);
			printf(" 4)%d",mul4);
			printf(" 5)%d",mul5);
			printf(" 6)%d",mul6);
			printf(" 7)%d",mul7);
			printf(" 8)%d",mul8);
			printf(" 9)%d",mul9);
			printf(" 10)%d",mul10);				
			printf("\n\n");
			
			printf("\nLOS 10 PRIMEROS SUBMULTIPLOS NATURALES EXISTENTES SON: \n\n");
			if(sm1!=0)
			{
				printf(" %d",sm1);
			}
			if(sm2!=0)
			{
				printf(" %d",sm2);	
			}
			if(sm3!=0)
			{
				printf(" %d",sm3);
			}
			
			if(sm4!=0)
			{
				printf(" %d",sm4);
			}
			if(sm5!=0)
			{
				printf(" %d",sm5);
			}
			if(sm6!=0)
			{
				printf(" %d",sm6);
			}
			if(sm7!=0)
			{
				printf(" %d",sm7);
			}
			if(sm8!=0)
			{
				printf(" %d",sm8);
			}
			if(sm9!=0)
			{
				printf(" %d",sm9);
			}
			if(sm10!=0)
			{
				printf(" %d",sm10);	
			}
			printf("\n\n");
		}
	else
	{
		printf("\nEL NUMERO INGRESADO NO ES MAYOR A 0\n");
	}
system("pause");
}

void multiplo(int x,int &mul1,int &mul2,int &mul3,int &mul4,int &mul5,int &mul6,int &mul7,int &mul8,int &mul9,int &mul10)
{
	mul1=1*x;
	mul2=2*x;
	mul3=3*x;
	mul4=4*x;
	mul5=5*x;
	mul6=6*x;
	mul7=7*x;
	mul8=8*x;
	mul9=9*x;
	mul10=10*x;	
}

void submultiplo(int x,int &sm1,int &sm2,int &sm3,int &sm4,int &sm5,int &sm6,int &sm7,int &sm8,int &sm9,int &sm10)
{
	float sm11,sm22,sm33,sm44,sm55,sm66,sm77,sm88,sm99,sm110;
	
	sm11=x%1;
	if(sm11==0)
	{
		sm1=x/1;
	}
	else
	{
		sm1=0;
	}
	
	sm22=x%2;
	if(sm22==0)
	{
		sm2=x/2;
	}
	else
	{
		sm2=0;
	}
	
	sm33=x%3;
	if(sm33==0)
	{
		sm3=x/3;
	}
	else
	{
		sm3=0;
	}
	
	sm44=x%4;
	if(sm44==0)
	{
		sm4=x/4;
	}
	else
	{
		sm4=0;
	}
	
	sm55=x%5;
	if(sm55==0)
	{
		sm5=x/5;
	}
	else
	{
		sm5=0;
	}
	
	sm66=x%6;
	if(sm66==0)
	{
		sm6=x/6;
	}
	else
	{
		sm6=0;
	}
	
	sm77=x%7;
	if(sm77==0)
	{
		sm7=x/7;
	}
	else
	{
		sm7=0;
	}
	
	sm88=x%8;
	if(sm88==0)
	{
		sm8=x/8;
	}
	else
	{
		sm8=0;
	}
	
	sm99=x%9;
	if(sm99==0)
	{
		sm9=x/9;
	}
	else
	{
		sm9=0;
	}
	
	sm110=x%10;
	if(sm10==0)
	{
		sm10=x/10;
	}
	else
	{
		sm10=0;
	}
}

