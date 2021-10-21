//
//  main.c
//  list
//
//  Created by Mac on 2019/11/25.
//  Copyright © 2019 Mac. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void print_list(const List *list){
//    ListElmt *element;
//    int *data, i;
    fprintf(stdout, "-> List size is %d\n", list_size(list));
}

int main(int argc, const char * argv[]) {
    // insert code here...
    List            list;
    ListElmt        *element;
    
    int *data, i;
    list_init(&list, free);
    
    element = list_head(&list);
    i=10;
    data = (int *)malloc(sizeof(int));
    *data = i;
    list_ins_next(&list,NULL,data);
    
    print_list(&list);
    printf("Hello, World google!\n");
    return 0;
}
