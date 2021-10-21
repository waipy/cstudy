#include <stdio.h>
int power();
main(){
    printf("power (2,5) is %d",power(2,5));
}

int power(int base,int time){
    int result,i;
    result  = i = 1;
    for(;i<=time;i++){
        result = result * base;
    }
    return result;
}