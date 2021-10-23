#include <stdio.h>
#include <stdlib.h>
#include "../lib.h"
#define MAXLINE 100

int main(){
    double sum;
    char line[MAXLINE];
    
    sum = 0;
    while(myGetline(line,MAXLINE) > 0)
        printf("\t %g\n",sum+=myAtof(line));
    return 0;
}