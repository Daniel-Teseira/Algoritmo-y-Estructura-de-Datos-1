#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct nodo
{
   float dato;
   nodo *next;
};

// variables globales
 nodo *Lista = NULL;
 float dato;


void eliminarElemento(nodo *Lista, float elemento)
{
 	nodo *auxiliar;
 	nodo *anterior;

 	anterior=NULL;

	if(Lista!=NULL)
	{
		auxiliar = Lista;
    	while((auxiliar!=NULL)&&(auxiliar->dato!=elemento))
		{
        	anterior = auxiliar;
        	auxiliar = auxiliar->next;
    	}

    	if(auxiliar == NULL)
		{
        	cout<<"El Elemento no se encontro en la lista !!!";
    	}
		
		if(anterior == NULL)
		{
      		Lista = Lista->next;
      		delete auxiliar;
    	}
		else
		{
      		anterior->next = auxiliar->next;
      		delete auxiliar;
    	}
 	}
 }

void buscarElemento(nodo *Lista,float elemento)
{
   nodo *actual=new nodo();
   int bandera=0;

   actual=Lista;

   while((actual!=NULL)&&(actual->dato <= elemento))
   {
       if( actual->dato == elemento)
	   {
            bandera = 1;
       }
       actual = actual->next;
   }

   if ( bandera == 1)
   {
       cout<<"El Elemento "<<elemento<<" SI esta en la lista";
   } 
   else
   {
       cout<<"El Elemento "<<elemento<<" NO esta en la lista";
   }
}

void verLista(nodo *Lista)
{
   nodo *actual = new nodo();
   actual = Lista;

   while(actual != NULL)
   {
    	cout<<" [ "<<actual->dato<<" ]\n ";
    	actual = actual->next;
   }
}

void insertLista(nodo *&Lista,float elemento)
{
	nodo* newnodo=new nodo();
  	newnodo->dato=elemento;

  	nodo *aux1=Lista;
  	nodo *aux2;

  	while((aux1!=NULL)&&(aux1->dato < elemento))
  	{
    	aux2=aux1;
       	aux1=aux1->next;
  	}
	//en la primera vez entra en el if, luego else.
  	if (Lista==aux1)
  	{
    	Lista=newnodo;
  	}	 
  	else 
  	{
    	aux2->next=newnodo;
  	}
  	newnodo->next=aux1;
  	cout << "\tEl elemento "<< elemento << " Se inserto correctamente !!!\n";
}




main()
{
    int opcion, bandera = 0;
    double elemento ;
	
	//nodo *frente,*fodo;
	
	do
	{
        cout <<"=========================================================================\n";
        cout <<"\t\t\tTrabajo Practico 9 - Problema 1\t\t\t\n";
        cout <<"=========================================================================\n";
        //cout <<"===================== MENU DE OPCIONES ================================\n";
        cout <<"1) INSERTAR\n";
        cout <<"2) LISTAR\n";
        cout <<"3) BUSCAR ELEMENTO\n";
        cout <<"4) ELIMINAR ELEMENTO\n";
        cout <<"5) SALIR\n";
        cout <<"\nOPCION: ";
        cin>>opcion;

           switch(opcion)
		   {

			case 1:  
					while(bandera==0)
					{
						cout << "Ingrese el valor para guardar en la lista [0 = Salir] : ";
                        cin>>dato;
                        if (dato!=0)
						{
	                       	insertLista(Lista,dato);
                        } 
						else
						{
                            bandera=1;
                        }
           			}
                    cout<<"\n";
                    system("pause");
                    break;

            case 2: verLista(Lista);
                    cout<<"\n";
                    system("pause");
                    break;

            case 3: 
                	cout<<"Ingrese el elemento a Buscar : ";
                    cin>>elemento;
                    buscarElemento(Lista, elemento);
                        
                    cout<<"\n";
                    system("pause");
                    break;
			case 4: 
                    cout<<"Ingrese el elemento a Eliminar : ";
                    cin>>elemento;
                    eliminarElemento(Lista, elemento);
                    cout<<"\n";
                    system("pause");
                    break;
            default:
            		break;
           }
           system("cls");
	} while (opcion != 5);
}

