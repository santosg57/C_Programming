#include <stdio.h>

int main(){
   int var = 369;
   int *apun;

   apun = &var;
   printf("hola como estas\n\n");
   printf(" valor de var= %d\n", *apun); 
   return 0;
}

