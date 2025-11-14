#include <stdio.h>
#include <stdlib.h>
int main(){
 /*counting chars*/
 double nc;
 for (nc = 0; getchar() != EOF; ++nc){
     printf("%.0f\n", nc);
 }
 return 0;
 }