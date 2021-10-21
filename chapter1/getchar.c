#include <stdio.h>

main(){
    int c;
    c = getchar();
    printf("EOF value is %d \n",EOF);
    while(c !=EOF){
        putchar(c);
        c = getchar();
    }
}