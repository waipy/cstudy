#include <stdio.h>
#include <string.h>
#include "lib.h"
#define MAXLINES 5000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
int writelines(char *lineptr[], int nlines);
int qsort(char *lineptr[],int left, int right);

main(){
    int nlines;
    if(nlines = readlines(lineptr,MAXLINES)){
        qsort(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
    }else{
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000

int readlines(char *lineptr[], int maxlines){
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while((len = myGetline(line,MAXLEN)) > 0){
        if(nlines >= maxlines || p = alloc(len) ==NULL)
            return -1;
        else{
            line[len-1] = '\0';
            strcpy(p,line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines){
    int i;
    for(i = 0; i<nlines; i++){
        printf("%s\n",lineptr[i]);
    }
}

void qsort(char *v[], int left, int right){
    int i,last;
    void swap(char *v[], int i, int j);
    if(left >= right)
        return;
    swap(v,left,(left+right)/2);
    last = left;
    
}