//
//  fact.c
//  cStudy
//
//  Created by Mac on 2019/11/23.
//  Copyright © 2019 Mac. All rights reserved.
//

#include "fact.h"
/* fact */
int fact(int n){
    if(n<0){
        return 0;
    }else if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}

int facttail(int n, int a){
    if(n < 0){
        return 0;
    }else if(n == 0){
        return 1;
    }else if(n == 1){
        return a;
    }else{
        return facttail(n-1, n*a);
    }
}
