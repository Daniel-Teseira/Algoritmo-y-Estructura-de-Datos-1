#include <iostream>
#include "conio.h"
#include <stdlib.h>
#include <cstring>


using namespace std;

struct Registro{
   char codigo[10];
   double importe;
   Registro * next;
};

Registro *Frente;
Registro *Fin;

void insertarCola( Registro *& frente, Registro *&fin, char codigo[10], double importe);
int colaVacia(Registro *nodo);
void mostrarCola( Registro *& frente, Registro *&fin);
void EliminarCola( Registro *& frente, Registro *&fin, char codigo[10], int importe);
void menu();

void  mostrarCola( Registro *& frente, Registro *&fin){

    Registro *auxiliar;

     if(Frente != NULL){

        auxiliar = Frente;
        while(auxiliar != Fin){

           cout<<"------------------------------------------------------\n";
           cout<<"Codigo  : "<<auxiliar->codigo<<endl;
           cout<<"Importe : "<<auxiliar->importe<<endl;
            auxiliar = auxiliar->next;
        }
          cout<<"------------------------------------------------------\n";
          cout<<"Codigo  : "<<Fin->codigo<<endl;
          cout<<"Importe : "<<Fin->importe<<endl;

     } else {
         cout<<"\nLa Cola Esta Vacia !!!\n"<<endl;
     }
}

void menu(){
    int opcion, bandera = 0;
    int otro;
    char codigo[10] ;
    double importe;
   do{

        cout <<"=========================================================================\n";
        cout <<"=====================Trabajo Practico 9 - Problema 5 =================\n";
        cout <<"=========================================================================\n";
        cout <<"===================== MENU DE OPCIONES ================================\n";
        cout <<"1. Agregar Elemento\n";
        cout <<"2. Mostrar Cola\n";
        cout <<"3. Eliminar Elemento de la Cola \n";
        cout <<"4. Salir\n";
        cout <<"^\nOpcion : ";
        cin>>opcion;

           switch(opcion){

               case 1:  {
                            while( bandera == 0){

                             printf("\nIngrese El codigo : ");
                             scanf("%s",codigo);
                              cout<<"\nIngrese el Importe  : ";
                             cin>>importe;
                             cout<<"---------------------------------------------------------------\n\n";

                                insertarCola(Frente, Fin, codigo, importe);

                             cout<<"\n Desea Ingresar otro ?[1 = SI :: 0 = NO] : ";
                             cin>>otro;

                           if (otro == 0){
                                bandera = 1;
                             }

                        }
                        cout<<"\n";
                        system("pause");
                        break;

                case 2: mostrarCola(Frente, Fin);
                        cout<<"\n";
                        system("pause");
                        break;

                case 3: {
                          EliminarCola(Frente,Fin, codigo, importe);
                        }
                        cout<<"\n";
                        system("pause");
                        break;


               }

           }
                system("cls");
         } while (opcion != 4);


}

void EliminarCola( Registro *& frente, Registro *&fin, char codigo[10], int importe){

     if(frente != NULL){
              strcpy(codigo, frente->codigo);
                Registro *auxiliar = frente;

              if(frente == fin){
                frente = NULL;
                fin = NULL;
            } else {
                frente = frente->next;
            }
            delete auxiliar;
            cout<<"\n\nSe Elimino el codigo : "<<codigo<<endl;
    }else{

              cout<<"\nLa Cola Esta Vacia !!!\n"<<endl;

    }
}

int colaVacia(Registro *nodo){
    return (nodo == NULL)? 0 : 1;
}
void insertarCola( Registro *& frente, Registro *&fin, char codigo[10], double importe){

    Registro *newRegistro =  new Registro();

    strcpy(newRegistro->codigo, codigo);
    newRegistro->importe = importe;

    newRegistro->next = NULL;

    if(colaVacia(frente) == 0){

        frente = newRegistro;
    } else {
        fin->next = newRegistro;
    }
    fin = newRegistro;

    cout<<"Elemento Insertado "<<codigo<<" con exito";
}

int main()
{
    menu();
    getch();
    return 0;
}
