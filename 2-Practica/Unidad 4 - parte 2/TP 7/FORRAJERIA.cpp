#include <stdio.h>

 #include <stdlib.h>

 #include <string.h>



struct fecha

 {

 int dia, mes, anio;

 };



struct registro

 {

 int codigo;

 char descripcion[30];

 char marca[15];

 float precio;

 int stock;

 fecha fecha_vto;

 char proveedor[35];

 };



int cargar(registro forra[50],int nuevo_valor);

 void ordenar(int n, registro forra[50]);

 void mostrar(int n, registro forra [50]);

 void buscar(int n, registro forra[50]);

 int menuPrincipal();



main()

 {

 int n=0,x=0, i, nOp;

 registro forrajeria[50];



do

 {

 nOp = menuPrincipal(); //Llama la función que muestra el menú.

 switch(nOp)

 {

 case 1:

 x=n;

 n=cargar(forrajeria,x);


 break;

 case 2:

 if(n>0)

 mostrar(n,forrajeria);

 else

 printf("\nNO SE INGRESARON PRODUCTOS...!");

 printf("\n");

 system("pause");

 break;

 case 3:

 if(n>0)

 buscar(n,forrajeria);

 else

 printf("\nNO SE INGRESARON PRODUCTOS...!");

 printf("\n");

 system("pause");

 break;

 case 4:

 if(n>0)

 ordenar(n,forrajeria);

 else

 printf("\nNO SE INGRESARON PRODUCTOS...!");

 printf("\n");

 system("pause");

 break;

 case 5:

 system("CLS");

 printf("\nF i n d e l P r o g r a m a");

 printf("\n");

 system("pause");

 break;

 default:

 system("CLS");

 printf("Ha ingresado un numero no valido");

 printf("\n");

 system("pause");

 break;

 } //Fin del switch().

 }while(nOp != 5); //Fin del Ciclo Do





 }





 int menuPrincipal()

 {

 int opc=0;

 system("CLS");

 printf("\t*************************************************\n");

 printf("\t** M E N U P R I N C I P A L **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 1-> Cargar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 2-> Mostrar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 3-> Consultar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 4-> Ordenar **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n");

 printf("\t** **\n");

 printf("\t** 5-> SALIR del SISTEMA **\n");

 printf("\t** **\n");

 printf("\t*************************************************\n\n");

 printf(" Seleccione Opcion: ");

 scanf("%d", &opc);

 return opc; //retorna el número de opción seleccionada.

 }



int cargar(registro forra[50],int nuevo_valor)

 {

 system("cls");

 int i=nuevo_valor,cod;

 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);


 while(cod!=0)

 {

 forra[i].codigo=cod;

 _flushall();

 printf("\nIngrese la Descripcion del producto: ");

 gets(forra[i].descripcion);

 printf("\nMarca: ");

 gets(forra[i].marca);

 printf("\nPrecio: ");

 scanf("%f",&forra[i].precio);

 printf("\nCantidad ingresada: ");

 scanf("%d",&forra[i].stock);

 printf("\nFecha de ingreso: ");

 printf("\nDIA: ");

 scanf("%d",&forra[i].fecha_vto.dia);

 printf("\nMES: ");

 scanf("%d",&forra[i].fecha_vto.mes);

 printf("\nANIO: ");

 scanf("%d",&forra[i].fecha_vto.anio);

 _flushall();

 printf("\nProveedor: ");

 gets(forra[i].proveedor);

 i++;

 printf("\nIngrese el codigo del producto: ");

 scanf("%d",&cod);

 }

 return i;

 }





 void mostrar(int n, registro forra [50])

 {



int i;

 system("cls");

 printf("\nLISTADO DE PRODUCTOS\n\n ");

 for(i=0;i<n;i++)

 {

 printf("\nCodigo: %d",forra[i].codigo);

 printf("\nDescripcion: ");

 puts(forra[i].descripcion);

 printf("\nMarca: ");

 puts(forra[i].marca);

 printf("\nPrecio: %.2f",forra[i].precio);

 printf("\nCantidad Disponible: %d",forra[i].stock);

 printf("\nFecha de ingreso: ");

 printf("\nDIA: %d",forra[i].fecha_vto.dia);

 printf("\nMES: %d",forra[i].fecha_vto.mes);

 printf("\nANIO: %d",forra[i].fecha_vto.anio);

 printf("\nProveedor: ");

 puts(forra[i].proveedor);



}



system("pause");

 }



void buscar(int n, registro forra [50])

 {

 int i,consulta,bandera=0;

 system("cls");

 printf("\nIngrese el codigo a consultar: ");

 scanf("%d",&consulta);

 for(i=0;i<n;i++)

 {

 if(consulta==forra[i].codigo)

 {

 printf("\nCodigo: %d",forra[i].codigo);

 printf("\nDescripcion: ");

 puts(forra[i].descripcion);

 printf("\nMarca: ");

 puts(forra[i].marca);

 printf("\nPrecio: %.2f",forra[i].precio);

 printf("\nCantidad Disponible: %d",forra[i].stock);

 printf("\nFecha de ingreso: ");

 printf("\nDIA: %d",forra[i].fecha_vto.dia);

 printf("\nMES: %d",forra[i].fecha_vto.mes);

 printf("\nANIO: %d",forra[i].fecha_vto.anio);

 printf("\nProveedor: ");

 puts(forra[i].proveedor);

 i=n;

 bandera=1;

 }



}

 if(bandera==0)

 {

 printf("\nCODIGO INEXISTENTE...!");

 }

 printf("\n\n");

 system("pause");

 }



void ordenar(int n, registro forra[50])

 {

 bool bandera;

 registro auxiliar[50];

 int i, valor;


 do

 {

 bandera=false;

 for(i=0;i<n-1;i++)

 {

 if(strcmp(forra[i].descripcion,forra[i+1].descripcion)>0)

 {

 auxiliar[i]=forra[i];

 forra[i]=forra[i+1];

 forra[i+1]=auxiliar[i];

 bandera=true;

 }

 }

 }

 while(bandera==true);

 }
