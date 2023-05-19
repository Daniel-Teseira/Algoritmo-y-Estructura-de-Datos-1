#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void CalMayMen(int &May,int &Men);
void AreaCuad(int May,int &SupCua);
void AreaCilin(int Men,float &SupCil);

main()
{
	int May,Men;
	int SupCua;
	float SupCil;	
	
	CalMayMen(May,Men);
	AreaCilin(Men,SupCil);
	AreaCuad(May,SupCua);
	printf("\n");			
	system ("pause");	
}

void CalMayMen(int &May,int &Men)
{

  int num,i;
  for(i=0;i<2;i++)
  {
  	printf("INGRESE EL PRIMER NUMERO: ");
  	scanf("%d",&num);  	
  	if (i==0)
  	{
  		May=num;
  		Men=num;
	 }
	  else
	 {
	 	if(num>May) May=num;
	 	if(num<Men) Men=num;
	} 
  }
  
  printf("EL NUMERO MAYOR ES: %d\n\nEL NUMERO MENOR ES: %d",May,Men);
  
}

void AreaCuad(int May,int &SupCua)
{
	SupCua=May*May;
	printf("\n\nEL AREA CUADRADA ES: %d",SupCua);
}

void AreaCilin(int Men,float &SupCil)
{
	SupCil=(3.14*Men*Men);
	printf("\n\nEL AREA DEL CIRCULO ES: %.2f",SupCil);
}
