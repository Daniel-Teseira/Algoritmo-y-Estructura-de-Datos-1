#include <stdio.h>

int main() {
int f=1;
int cont;
int a[3]= {0,0,0};
for(cont = 1; cont <= 3; cont++)
{
a[cont]= f;
f += a[cont];
}
printf("%d", f);
return 0;
}











