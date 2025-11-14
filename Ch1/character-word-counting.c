#include <stdio.h>

int main(){
 /*counting chars
 double nc;
 for (nc = 0; getchar() != EOF; ++nc){
     printf("%.0f\n", nc);
 }
     
 */
 /*counting lines*/
 int c, nl;
 nl = 0;
 while ((c = getchar()) != EOF){
     if (c == '\n')
         ++nl;
 }
 printf("%d\n", nl);
 return 0;
 }