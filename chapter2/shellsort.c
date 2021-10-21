#include <stdio.h>
#include <string.h>
void shellsort(int v[], int n){
    int gap, i, j, temp;

    for(gap=n/2;gap>0;gap /=2)
        for(i = gap; i< n; i++){
            for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
}

int main(){
    int nums[] = {5,8,10,99,1,0,4,6};
    shellsort(nums,8);
    int i;
    for(i=0;i<8;i++){
        printf("%d,",nums[i]);
    }
}