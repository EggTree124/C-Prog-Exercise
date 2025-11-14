#include<stdio.h>
#include<stdlib.h>

int main(){
    int c;
    c = getchar();
    printf("%d\n", getchar()!=EOF);

    return 0;
}