#include <stdio.h>
void qsort(int *a,int left,int right);
void swap(int *a, int *b);
void printf_r(int *num);

void chage(int num[],int left, int right){
    num[5] = 0;
}
int main(int argc, char * argu[]){
    int a[] = {10,3,5,6,99,22,1,1020,5};
    // int *pp = a;
    // int temp;
    // temp = *(pp+8);
    // *(pp+8) = *(pp+0);
    // *(pp+0) = temp;
    qsort(a,0,8);
    printf_r(a);
    return 0;
}
void printf_r(int *num){
    for(int i = 0;i<=8;i++){
        printf("%d \n",*(num+i));
    }
}

void swap(int * a,int * b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}


void qsort(int num[],int left, int right){
    // printf_r(num);
    int i,last;
    if(left>=right){
        return;
    }
    int middle = (left+right)/2;
    swap(num+left,num+middle);
    last = left;
    for(i=left+1;i<=right;i++){
        if(*(num+left) >= *(num+i))
            swap(num+i,num+last);
    } 
    swap(num+left,num+last);
    qsort(num,left,last-1);
    qsort(num,last+1,right);
}