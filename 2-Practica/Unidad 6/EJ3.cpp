#include <iostream>
#include "conio.h"
#include <stdlib.h>
#include <cstring>


using namespace std;

struct Paciente{
   char nombre[50];
   char telefono[10];
   int edad;
   Paciente * next;
};

Paciente *Pila = NULL;


void Pila_Push( Paciente *&Pila, char nombre[50], char telefono[10], int edad);
void Pila_Pop( Paciente *&Pila, char nombre[50], char telefono[10], int edad);
void Pila_Mostrar( Paciente *&Pila);
int Pila_Buscar ( Paciente *&Pila );
void menu();


void Pila_Push( Paciente *&Pila, char nombre[50], char telefono[10], int edad){

    Paciente *newPaciente = new Paciente();

    strcpy( newPaciente->nombre, nombre);
    strcpy( newPaciente->telefono, telefono);
    newPaciente->edad = edad;

    newPaciente->next = Pila;
    Pila = newPaciente;
    cout<<"\n\nEl Paciente "<<nombre<<" se agrego con exito !!!\n\n";
}

void Pila_Pop( Paciente *&Pila, char nombre[50], char telefono[10], int edad){

     Paciente *auxiliar = new Paciente();

     strcpy( nombre,auxiliar->nombre);
     strcpy( telefono,auxiliar->telefono);
     edad = auxiliar->edad;

     Pila = auxiliar->next;
     delete auxiliar;
}


void Pila_Mostrar( Paciente *&Pila ){
     Paciente *auxiliar = Pila;

     if (Pila != NULL){

        while (auxiliar != NULL){
            cout<<"------------------------------------------------\n";
            cout<<"Nombre : "<<auxiliar->nombre<<"\n";
            cout<<"Telefono : "<<auxiliar->telefono<<"\n";
            cout<<"edad : "<<auxiliar->edad<<"\n";
            cout<<"------------------------------------------------\n\n";
            auxiliar = auxiliar->next;
        }
     } else {
         cout<<"\n\nNo hay pacientes en el Sistema\n\n";
     }
}

int Pila_Buscar ( Paciente *&Pila){

  int edadMayor = 0;
  Paciente *auxiliar = Pila;
  Paciente *anterior;

  if(Pila == NULL){

      cout<<"No hay pacientes en el sistema";
      return 0;
  }
    edadMayor = auxiliar->edad;
    anterior = auxiliar;
    auxiliar = auxiliar->next;

  while(auxiliar != NULL){

     if(anterior->edad < auxiliar->edad){
        edadMayor = auxiliar->edad;
     }
    anterior = auxiliar;
    auxiliar = auxiliar->next;
  }
  return edadMayor;
}

void menu(){
    int opcion, bandera = 0, mayor;
    int otro;
    char Nombre[50] ;
    char Telefono[10];
    int edad = 0;
   do{

        cout <<"=========================================================================\n";
        cout <<"=====================Trabajo Practico 9 - Problema 3 =================\n";
        cout <<"=========================================================================\n";
        cout <<"===================== MENU DE OPCIONES ================================\n";
        cout <<"1. Agregar Pacientes\n";
        cout <<"2. Mostrar Pacientes\n";
        cout <<"3. Ver Paciente de Mayor Edad \n";
        cout <<"4. Salir\n";
        cout <<"^\nOpcion : ";
        cin>>opcion;

           switch(opcion){

               case 1:  {
                            while( bandera == 0){

                             printf("\nIngrese El Nombre del Paciente : ");
                             scanf("%s",Nombre);
                             printf("\nIngrese El Telefono del Paciente : ");
                             scanf("%s",Telefono);
                             cout<<"\nIngrese La Edad del Paciente  : ";
                             cin>>edad;
                             cout<<"---------------------------------------------------------------\n\n";

                                Pila_Push(Pila, Nombre,Telefono,edad);

                             cout<<"\n Desea Ingresar otro Paciente [1 = SI :: 0 = NO] : ";
                             cin>>otro;

                           if (otro == 0){
                                bandera = 1;
                             }

                        }
                        cout<<"\n";
                        system("pause");
                        break;

                case 2: Pila_Mostrar(Pila);
                        cout<<"\n";
                        system("pause");
                        break;

                case 3: {
                          mayor = Pila_Buscar(Pila);
                          cout<<"El Paciente Mayor tiene "<< mayor <<" años";
                        }
                        cout<<"\n";
                        system("pause");
                        break;


               }

           }
                system("cls");
         } while (opcion != 4);


}

int main()
{
   menu();
   getch();
   return 0;
}
