#include<stdlib.h>
#include <stdio.h>
#include <conio.h>

//void mayor (a,b,c); //devuelve el mayor de 3
//int menos (a,b,c); //devuelve el menor de 3
//int promedio(a,b,c); //promedio de valores
//int producto ();
//int division;
//int sumar;
//int restar;

void MAX (int mayor)
{
   int n1,n2,n3;
   
   if ( n1 > n2 )
   {

        if ( n1 > n3 )
        {
            mayor = n1;
        }
        else
        {
            mayor = n3;
        }
    }

    else
    {

        if ( n2 > n3 )
        {
            mayor = n2;
        }
        else
        {
            mayor = n3;
        }
    
		}

    printf( "\n   %d es el mayor.", mayor );
   
}


main ()
{
	int n1, n2, n3,mayor;

    printf( "\n   Introduzca el primer n%cmero (entero): ");
    scanf( "%d", &n1 );
    printf( "\n   Introduzca el segundo n%cmero (entero): ");
    scanf( "%d", &n2 );
    printf( "\n   Introduzca el tercer n%cmero (entero): ");
    scanf( "%d", &n3 );
    
    MAX(mayor);

system ("pause");
}
