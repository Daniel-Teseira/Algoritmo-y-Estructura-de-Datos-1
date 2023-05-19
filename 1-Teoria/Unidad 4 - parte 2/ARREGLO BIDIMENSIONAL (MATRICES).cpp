#include<stdio.h>

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
	float s=0;
	
	for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
           s=s+a1[i][j];
        }
    }
return s;    
}

main()
{
    int i,j,n,m,suc,dep;
    float a[50][50],mt,sf,mayf,sc,mayd;
    
    printf("INGRESE LA CANTIDAD DE FILAS: ");
    scanf("%d",&m);    
	printf("INGRESE LA CANTIDAD DE COLUMNAS: ");
    scanf("%d",&n);
    
    //PRIMER PUNTO
    leer(m,n,a);
    //SEGUNDO PUNTO
    mayf=0;suc=0;
    for(i=0;i<m;i++)
    {
        sf=0;
		for(j=0;j<n;j++)
        {
           sf=sf+a[i][j];
        }
        if(sf>mayf)
        {
        	mayf=sf;
        	suc=i;
        }
    }
    printf("\nLA SUCURSAL CON MAYOR VENTAS ES %d - MONTO: %.2f",suc=suc+1,mayf);
    
    //TERCER PUNTO
    mayd=0;dep=0;
    for(j=0;j<n;j++)
    {
        sc=0;
		for(i=0;i<n;i++)
        {
           sc=sc+a[i][j];
        }
        if(sc>mayd)
        {
        	mayd=sc;
        	dep=j;
        }
    }
    printf("\nEL DEPORTE CON MAYOR VENTAS ES %d - MONTO: %.2f",dep=dep+1,mayd);
    
    //CUARTO PUNTO
    mt=total(m,n,a);
    
    printf("\nEL MONTO TOTAL: %.2f", mt);
}

 


