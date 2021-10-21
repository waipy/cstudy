#include <stdio.h>

main(){
    int fathr, celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    fathr = lower;
    while(fathr <= upper){
        celsius = 5*(fathr-32) /9;
        printf("%3d\t%6d\n",fathr,celsius);
        fathr = fathr + step;
    }
}