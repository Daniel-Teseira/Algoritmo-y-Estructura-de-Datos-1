#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct fecha
{
	int dia;
	int mes;
	int anio;
};

struct datos
{
	char nom[25];
	char dir[25];
	fecha fechaing;
	fecha fechapro;
	int antmes,antdia,antanio;
};

void prom(datos v[20],int j)
{
	int i,sumdia=0,summes=0,sumanio=0;
	float promdia,prommes,promanio;
	
	for(i=0;i<j;i++)
	{
		sumdia=sumdia+v[i].antdia;
		summes=summes+v[i].antmes;
		sumanio=sumanio+v[i].antanio;
	}
	promdia=sumdia/j;
	prommes=summes/j;
	promanio=sumanio/j;
	printf("\nSUMAS DE DIAS= %d",sumdia);
	printf("\nSUMAS DE MES= %d",summes);
	printf("\nSUMAS DE ANIO= %d",sumanio);
	printf("\nPROMEDIO DE DIA/S=%.2f, MESES=%.2f, ANIO/S=%.2f",promdia,prommes,promanio);
}

main()
{
	datos v[20];
	int i,j=0,x,valor,pos,pos1=0;
	char y[3],busqueda[25];
	
	printf("\t\tBIENVENIDO\n");
	printf("**************************************************************");
	printf("\nINGRESE 'si' SI DESEA AGREGAR UN EMPLEADO, DE LO CONTRARIO 'no': ");	
	_flushall();
	scanf("%s",&y);
	strupr(y);
	x=strcmp(y,"SI");
	while(x==0)
	{	
		printf("\n%d=> INGRESE LOS DATOS DEL EMPLEADO: \n",j+1);		
		printf("  _APELLIDO Y NOMBRE: ");
		_flushall();
		gets(v[j].nom);
		strupr(v[j].nom);
		printf("  _DIRECCION: ");
		_flushall();
		gets(v[j].dir);
		strupr(v[j].dir);
		printf("  _DIA DE INGRESO: ");
		scanf("%d",&v[j].fechaing.dia);
		printf("  _MES DE INGRESO: ");
		scanf("%d",&v[j].fechaing.mes);
		printf("  _ANIO DE INGRESO: ");
		scanf("%d",&v[j].fechaing.anio);
		printf("  _DIA DE PROCESO: ");
		scanf("%d",&v[j].fechapro.dia);
		printf("  _MES DE PROCESO: ");
		scanf("%d",&v[j].fechapro.mes);
		printf("  _ANIO DE PROCESO: ");
		scanf("%d",&v[j].fechapro.anio);
		//ANTIGUEDAD
		v[j].antdia=v[j].fechapro.dia-v[j].fechaing.dia;
		if(v[j].antdia<0)
			v[j].antdia=v[j].antdia*(-1);			
		v[j].antmes=v[j].fechapro.mes-v[j].fechaing.mes;
		if(v[j].antmes<0)
			v[j].antmes=v[j].antmes*(-1);			
		v[j].antanio=v[j].fechapro.anio-v[j].fechaing.anio;		
		printf("\nANTIGUEDAD DEL EMPLEADO %d ES: %d DIA/S, %d MES/ES, %d ANIO/S\n",j+1,v[j].antdia,v[j].antmes,v[j].antanio);
				
		j++;	
		printf("\nINGRESE 'si' SI DESEA AGREGAR UN EMPLEADO, DE LO CONTRARIO 'no: ': ");	
		_flushall();
		gets(y);
		strupr(y);	
		x=strcmp(y,"SI");			
	}
		
	//PUNTO B
	prom(v,j);
	
	//PUNTO C
	printf("\nINGRESE UN APELLIDO Y NOMBRE A BUSCAR: ");	
	_flushall();
	scanf("%s",&busqueda);
	strupr(busqueda);
	for(i=0;i<j;i++)
	{
		pos=strstr(v[i].nom,busqueda)-v[i].nom;
		//printf("POSISION ES %d",pos);
		if(pos>=0)
		{
			pos1=pos1+i;
			printf("POSISION ES %d",pos1);
		}
	}
	
	if (pos>=0)
	{
		printf("\n   _%s COINSIDE CON %s",busqueda,v[pos1].nom);
		printf("\nANTIGUEDAD: ");
		int antdia=v[pos1].fechapro.dia-v[pos1].fechaing.dia;
		if(antdia<0)
			antdia=antdia*(-1);
			
		int antmes=v[pos1].fechapro.mes-v[pos1].fechaing.mes;
		if(antmes<0)
			antmes=antmes*(-1);
			
		int antanio=v[pos1].fechapro.anio-v[pos1].fechaing.anio;
		
		if(antanio==0)
			printf("\nLA ANTIGUEDAD ES DE %d DIAS Y %d MESES",antdia,antmes);
		if(antanio==0 && antmes==0)
			printf("\nLA ANTIGUEDAD ES DE %d DIA/S",antdia);
		if(antanio==0 && antmes==0 && antdia==0)
			printf("\nNO TIENE ANTIGUEDAD");
		if(antanio==0 && antdia==0)
			printf("\nLA ANTIGUEDAD ES DE %d MES/ES",antmes);
		if(antmes==0 && antdia==0)
			printf("\nLA ANTIGUEDAD ES DE %d ANIO/S",antanio);
			printf("\nLA ANTIGUEDAD ES DE %d DIAS Y %d MESES %d ANIOS\n\n",antdia,antmes,antanio);
	}
	else
	{		
		printf("\n %s NO ESTA INGRESADO",busqueda);
	} 
	
	
	//PUNTO D
	system("pause");
	system("cls");
	printf("\nLISTADO DE EMPLEADOS: ");
	for(i=0;i<j;i++)
	{
		printf("\n%d=> DATOS DEL EMPLEADO: ",i+1);		
		printf("\n  _APELLIDO Y NOMBRE: %s",v[i].nom);
		printf("\n  _DIRECCION: %s",v[i].dir);
		printf("\n  _FECHA DE INGRESO: %d/%d/%d",v[i].fechaing.dia,v[i].fechaing.mes,v[i].fechaing.anio);
		printf("\n  _FECHA DE PROCESO: %d/%d/%d",v[i].fechapro.dia,v[i].fechapro.mes,v[i].fechapro.anio);
		int antdia=v[i].fechapro.dia-v[i].fechaing.dia;
		if(antdia<0)
			antdia=antdia*(-1);
		int antmes=v[i].fechapro.mes-v[i].fechaing.mes;
		if(antmes<0)
			antmes=antmes*(-1);
		int antanio=v[i].fechapro.anio-v[i].fechaing.anio;
		if(antanio==0)
			printf("\nLA ANTIGUEDAD ES DE %d DIAS Y %d MESES",antdia,antmes);
		if(antanio==0 && antmes==0)
			printf("\nLA ANTIGUEDAD ES DE %d DIA/S",antdia);
		if(antanio==0 && antmes==0 && antdia==0)
			printf("\nNO TIENE ANTIGUEDAD");
		if(antanio==0 && antdia==0)
			printf("\nLA ANTIGUEDAD ES DE %d MES/ES",antmes);
		if(antmes==0 && antdia==0)
			printf("\nLA ANTIGUEDAD ES DE %d AÑO/S",antanio);
		
		printf("\nLA ANTIGUEDAD ES DE %d DIAS Y %d MESES %d ANIOS",antdia,antmes,antanio);
	}
	
			

printf("\n\n");
/*
scanf("",);
_flushall();
gets();
puts();
*/
system("pause");
}

