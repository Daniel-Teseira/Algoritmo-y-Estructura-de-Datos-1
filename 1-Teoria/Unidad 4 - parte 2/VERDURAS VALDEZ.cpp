#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct registro {
int id;
char verdura[100];
char fecha[100];
float calorias;
};

main() {
char src[30], found[30];
int n;
int pos;
printf("Indique el numero de verduras: ");
scanf("%d", &n);
registro reg[n];
for(int i = 0; i < n; i++) {
system("cls");
printf("Verdura numero %d\n\n", i+1);
printf("Indique el ID de la verdura: ");
scanf("%d", &reg[i].id);
printf("Ingrese el nombre de la verdura: ");
_flushall();
gets(reg[i].verdura);
printf("Indique la fecha de cosecha de la verdura(dd/mm/aa): ");
_flushall();
gets(reg[i].fecha);
printf("Indique las calorias de la verdura: ");
scanf("%f", &reg[i].calorias);
}
system("cls");
do {
printf("Escriba el nombre de la verdura de la cual desea obtener datos o 0 para salir: ");
_flushall();
gets(src);
if(src[0] != '0') {
for(int i = 0; i < n; i++) {
if(strcmp(strupr(src),strupr(reg[i].verdura)) == 0) pos = i;
}
printf("Verdura numero %d\n\n", pos+1);
printf("ID de la verdura: %d\n", reg[pos].id);
printf("Nombre de la verdura: ");
puts(reg[pos].verdura);
printf("Fecha de cosecha: ");
puts(reg[pos].fecha);
printf("Calorias de la verdura: %.2f", reg[pos].calorias);
printf("\n\n\n\n");
system("pause");
}
} while(src[0] != '0');
system("cls");
printf("Fin del programa\n\n\n");
system("pause");
}
