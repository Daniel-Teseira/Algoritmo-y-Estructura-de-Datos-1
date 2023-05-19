#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>
#include<ctime> // o tambien
#include<time.h>

struct Fecha
{
	int dia, mes, anio;
};

struct turnos  //registro turnos
{
	int MatriculaVeterinario;
	int DNI_Dueno;
	char DetalleAtencion[380];
	Fecha fecha;
};

struct mascotas //registros mascotas
{
	char ApeNom [60];
	char Domicilio[60];
	int DNI_Dueno;
	char Localidad[60];
	Fecha fecha;
	float Peso;
	char Telefono[25];
};

struct usuario             //estructura de carga de usuario
{
    char usuario[10];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    char apeynom[60];
};


struct veterinario          //estructura de carga de veterinario
{
    char usuario[10];
    char apeynom[60];       //requisito para iniciar sesion
    char contrasena[33];    //requisito para iniciar sesion
    int matricula;
    int dni;
    char telefono[25];    
};


main()
{
	turnos reg;
	usuario usu;
	//mascotas reg;
	turnos reg1;
	setlocale(LC_CTYPE,"Spanish");
	FILE *Archivo_Turnos;
	FILE *Archivo_Mascotas;
	/*
	
    Archivo_Mascotas=fopen("Mascotas.dat","r+b");
    
    printf("\nLECTURA DEL ARCHIVO MASCOTAS\n"); 
    fread(&reg,sizeof(mascotas),1,Archivo_Mascotas);
    while(!feof(Archivo_Mascotas))
    {           
    	printf("\n APELLIDO Y NOMBRE= %s",reg.ApeNom);
    	printf("\n DOMICILIO= %s",reg.Domicilio);
    	printf("\n DNI= %d",reg.DNI_Dueno);
    	printf("\n LOCALIDAD= %s",reg.Localidad);
    	printf("\n FECHA= %d/%d/%d",reg.fecha.dia,reg.fecha.mes,reg.fecha.anio);
    	printf("\n PESO= %.2f",reg.Peso);
    	printf("\n TELEFONO= %s",reg.Telefono);
    	printf("\n\n");
        fread(&reg,sizeof(mascotas),1,Archivo_Mascotas); 
    }
    fclose(Archivo_Mascotas);
    //system("pause");
    
    Archivo_Turnos=fopen("Turnos.dat","rb");
    if(Archivo_Turnos==NULL)
	{
		printf("\nERROR DE APERTURA DE ARCHIVO!");
		printf("\n");
		system("pause");
		exit(1);	
	}
	system("pause");	
    printf("\nLECTURA DEL ARCHIVO TURNOS");  
    fread(&reg1,sizeof(turnos),1,Archivo_Turnos);
    while(!feof(Archivo_Turnos))
    {           
    	printf("\n MATRICULA= %s",reg1.MatriculaVeterinario);
    	printf("\n DNI= %d",reg1.DNI_Dueno);
    	printf("\n DETALLE DE ATENCION= %s",reg1.DetalleAtencion);
    	printf("\n FECHA= %d/%d/%d",reg1.fecha.dia,reg1.fecha.mes,reg1.fecha.anio);
    	printf("\n\n");
        fread(&reg1,sizeof(turnos),1,Archivo_Turnos);
    }
    fclose(Archivo_Turnos); 
	*/
	
	/*
	int contador=0;
	FILE *Archivo_Usuario;
	Archivo_Usuario=fopen("Usuarios.dat","rb"); 
	
	fread (&usu, sizeof(usuario),1,Archivo_Usuario);
	while(!feof(Archivo_Usuario))
	{
		puts(usu.apeynom);
		puts(usu.contrasena);
		puts(usu.usuario);
		//contador++;		
		fread (&usu, sizeof(usuario),1,Archivo_Usuario);
	}
	fclose(Archivo_Usuario); 
*/
/*
	veterinario vet;
	FILE *Archivo_Veterinario;
	Archivo_Veterinario=fopen("Veterinarios.dat","rb"); 
	
	fread (&vet, sizeof(veterinario),1,Archivo_Veterinario);
	while(!feof(Archivo_Veterinario))
	{
		printf("\n\n");
		puts(vet.usuario);
		puts(vet.apeynom);
		puts(vet.contrasena);		
		printf("MATRICULA= %d",vet.matricula);		
		fread (&vet, sizeof(veterinario),1,Archivo_Veterinario);
	}
	fclose(Archivo_Veterinario);
	*/ 
	
	FILE *arch_Turnos;
	arch_Turnos= fopen ("Turnos.dat","rb");
	
	fread(&reg, sizeof(turnos),1, arch_Turnos);
	while(!feof (arch_Turnos))
	{
        printf("\n matricula= %d",reg.MatriculaVeterinario);
        printf("\n dni= %d",reg.DNI_Dueno);
        puts(reg.DetalleAtencion);
		fread(&reg, sizeof(turnos),1, arch_Turnos);
	}
	fclose(arch_Turnos);	
	
printf("\n\n");/*
scanf("",);
_flushall();
gets();
puts();*/
system("pause");
}

