#include<stdio.h>

int main(){

    float fahr, celcius;
    int upper, lower, steps;

    upper = 300;
    lower = 0;
    steps = 20;

    fahr = lower;
    printf("%11s %12s\n", "Fahrenheit", "Celcius");
    /*while(fahr<=upper){
        celcius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%6.0f %17.1f\n", fahr, celcius);
        fahr += steps;
    }*/

    for(fahr = lower; fahr <= upper; fahr += steps){
        printf("%6.0f %17.1f\n", fahr,  5.0 / 9.0 * (fahr - 32.0));
    }

    printf("%s\n", "------------------------------------------");
    printf("%8s %16.10s\n", "Celcius", "Fahrenheit");
    for(celcius = lower; celcius <= 100; celcius += 10){
        printf("%6.0f %17.1f\n", celcius,  (9.0 / 5.0 *(celcius) + (32.0)));
    }

    printf("%s\n", "------------------------------------------");
    printf("%8s %16.10s\n", "Celcius", "Fahrenheit");
    for(celcius = 100; celcius >= lower; celcius -= 10){
        printf("%6.0f %17.1f\n", celcius,  (9.0 / 5.0 *(celcius) + (32.0)));
    }

    return 0;
}