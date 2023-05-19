#include<stdio.h>
#include<windows.h>

void leer(int m1, int n1, float a1[50][50]);
float total(int m1, int n1, float a1[50][50]);

main()
{
	int i,j,n,m,suc,dep;
	float a[50][50],mt,sf,mayf,sc,mayd,v[50];
	
	printf("ingrese la cantidad de filas: ");
	scanf("%d",&m);
	
	printf("ingrese la cantidad de columnas: ");
	scanf("%d",&n);
	
	//primer punto
	leer(m,n,a);
	
	
	//segundo punto - trabajar por sucursal - fila
	for(i=0;i<m;i++)
	{
		//inicializar
		v[i]=0;
		for(j=0;j<n;j++)
		{
			v[i]=v[i]+a[i][j];
		}
	}
	
	mayf=0;suc=0;
	for(i=0;i<m;i++)
	{
		if (v[i]>mayf)
		{
			mayf=v[i];
			suc=i;
		}
	}
	printf("\nSucursal con mayor venta %d - Monto:%.2f\n",suc,mayf);
	
	
	//tercer punto - trabajar por deporte - columna
	mayd=0;dep=0;
	for(j=0;j<n;j++)
	{
		//inicializar
		sc=0;
		for(i=0;i<m;i++)
		{
			sc=sc+a[i][j];
		}
		if (sc>mayd)
		{
			mayd=sc;
			dep=j;
		}
	}
	printf("\nDeporte con mayor venta %d - Monto:%.2f\n",dep,mayd);
		
	//cuatro punto
	mt=total(m,n,a);
	printf("\nMonto total:%.2f",mt);
}

void leer(int m1, int n1, float a1[50][50])
{
	int i,j;
	
	//primero ciclo de i --> por filas
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a1[i][j]);
		}
	}
}
	
float total(int m1, int n1, float a1[50][50])
{
	int i,j;
	float s;
	
	//inicializar antes de los ciclos
	s=0;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			s=s+a1[i][j];
		}
	}
	return s;
}
