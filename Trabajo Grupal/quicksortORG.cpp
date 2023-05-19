#include <iostream>
#include <cstdio>
#include <cstdlib>
 
 
using namespace std;
 
 
// Función para dividir el arreglo obtenido aleatoriamente  y hacer los intercambios
 
int dividir(int *array, int inicio, int final) {
    int izquierda;
    int derecha;
    int pivote;
    int temp;
 
    pivote = array[inicio];
    izquierda = inicio;
    derecha = final;
 
    // Mientras no se cruzen los índices
    while (izquierda < derecha) 
	{
        while (array[derecha] > pivote) {
            derecha--;
        }
 
        while ((izquierda < derecha) && (array[izquierda] <= pivote)) 
		{
            izquierda++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (izquierda < derecha) {
            temp = array[izquierda];
            array[izquierda] = array[derecha];
            array[derecha] = temp;
        }
    }
 
    // Cuando los indices se han cruzado, ponemos el pivote en el lugar que le corresponde
    temp = array[derecha];
    array[derecha] = array[inicio];
    array[inicio] = temp;
 
    // Return para aplicar la nueva ubicacion del pivote
    return derecha;
}
 
// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int inicio, int final)
{
    int pivote;
 
    if (inicio < final) 
	{
        pivote = dividir(array, inicio, final);
 
        // Ordeno la lista de los menores
        quicksort(array, inicio, pivote - 1);
 
        // Ordeno la lista de los mayores
        quicksort(array, pivote + 1, final);
    }
}
 
 
int main()
{
    int const MAX = 200; // el valor se puede modificar, con menor numero se repetirán con mas 
                                         //  frecuencia .
    int arraySize;
 
 
    cout << "Ingresa tamano: " << endl;
    cin >> arraySize;
 
    int a[200]; // el valor se puede modificar, es la cantidad de números a generar.
 
    // Para generar enteros aleatorios usamos rand()
    for (int i = 0; i < arraySize; i++) 
	{
        a[i] = rand() % MAX;
    }
 
    cout << "Array antes de ordenarse: " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << a[i] << " ";
    }
 
    cout << endl << endl;
 
    quicksort(a, 0, arraySize - 1);
 
 
    cout << "Array ordenado " << endl;
    for (int i = 0; i < arraySize; i++ ){
        cout << a[i] << "-";
    }
 
    cout << endl << endl;
 
    system("Pause"); //Para cuando se ejecute la consola no cierre.
 
    return 0;
}








