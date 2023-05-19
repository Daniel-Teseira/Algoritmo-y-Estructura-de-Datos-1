#include <stdio.h>

#include <stdlib.h>

#include <string.h>                     //Librería para manejo de cadena

struct fecha{

int dia,mes,anio;

};

struct vehiculo{

int licenciaTaxi;

char patente[7];

float montoRecaudado;

fecha registro;           //miembro o campo jerárquico

};

void cargarDatos(vehiculo taxisMov[100], int &N);

float montoTotal(vehiculo taxisMov[100], int N);

void modificar(vehiculo taxisMov[100], int N);

main(){

int N=0;

vehiculo taxisMov[100];       //crea un vector cuyo contenido serán registros

cargarDatos(taxisMov, N);

float montoRecaudado = montoTotal(taxisMov, N);

printf("\n\n");

printf("El monto total recaudado por la empresa es: %.2f \n\n", montoRecaudado);

printf("\n\n");

modificar(taxisMov, N);

}

/*--------------------------------------*/

void cargarDatos(vehiculo taxisMov[100], int &N){

printf("Ingrese la Cantidad de Movimientos a Registrar...: ");

scanf("%d", &N);

printf("\n--------------------------------------------------\n");

for(int i=0; i<N; i++){

printf("Ingrese Licencia Taxis....: ");

scanf("%d", &taxisMov[i].licenciaTaxi);

printf("Ingrese Patente del Taxi..: ");

_flushall();              //Limpia el buffer de memoria.

gets(taxisMov[i].patente);       //Recibe por teclado el numero de la patente.

printf("Ingrese Monto recaudado...: ");

scanf("%f", &taxisMov[i].montoRecaudado);

printf("Ingrese Fecha....:\n");

printf("\t Dia....: "); scanf("%d", &taxisMov[i].registro.dia);

printf("\t Mes....: "); scanf("%d", &taxisMov[i].registro.mes);

printf("\t Anio...: "); scanf("%d", &taxisMov[i].registro.anio);

printf("\n--------------------------------------------------\n");

}

}

/*-----------------------------------*/

float montoTotal(vehiculo taxisMov[100], int N){

float totalRec=0.0;

for(int i=0; i<N; i++){

totalRec= totalRec + taxisMov[i].montoRecaudado;

}

return totalRec;

}

/*-----------------------------------*/

void modificar(vehiculo taxisMov[100], int N){

char patente[7];

bool bandEncontrado = false;

printf("Ingrese el numero de Patente a buscar...: ");

_flushall();

gets(patente);

for(int i= 0; i<N; i++){

if(strcmp(taxisMov[i].patente,patente)==0){        //Si los números de patente son iguales solicita el nuevo monto.

printf("EL monto de la patente ingresada es %.2f Ingresar el nuevo monto: ",taxisMov[i].montoRecaudado);

scanf("%f", &taxisMov[i].montoRecaudado);

bandEncontrado = true;

break;

}

}

if(bandEncontrado){

printf("El cambio de recaudacion se realizo satisfactoriamente....");

}else{

printf("La patente buscada no Fue encontrada........");

}

printf("\n\n");

system("PAUSE");

}
