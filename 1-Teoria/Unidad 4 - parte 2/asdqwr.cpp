#include <stdio.h>
#include <string.h>

struct ejemplo{
     int A;
     char string [10];
     float B;
};

int main (void) {
    ejemplo X ={5, "string1", 3.4};
    ejemplo Y;
    Y.A=3;
    strcpy (Y.string, "string1");
    Y.B=5.7;
    X=Y;
    printf ("%f\n", X.B);
    //system ("PAUSE");
    return 0;
}
