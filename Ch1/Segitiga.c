#include<stdlib.h>
#include<math.h>
#include <stdio.h>
int main(){
    double a,b;
    printf("Masukkan Nilai A : ");
    scanf("%1f", &a);
    printf("Masukkan Nilai B: ");
    scanf("%1f", &b);

    double c = sqrt(pow(a,2) + pow(b,2));
    printf("%1f", &c);
    return 0;
}