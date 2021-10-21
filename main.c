//
//  main.c
//  cStudy
//
//  Created by Mac on 2019/11/22.
//  Copyright © 2019 Mac. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "fact.h"
#include "list.h"
#include <stdlib.h>
#ifndef MAX_CPU
#define MAX_CPU 30 /* Max CPU cycles in seconds */
#endif

void print_list(const List *list)
{
    //    ListElmt *element;
    //    int *data, i;
    fprintf(stdout, "-> List size is %d\n", list_size(list));
}
static char *zRoot = 0;
static char *zLogFile = 0;
static int mxAge = 120;       /* Cache-control max-age */
static int maxCpu = MAX_CPU;  /* Maximum CPU time per process */
static int useHttps = 0;      /* True to use HTTPS: instead of HTTP: */
static char *zHttp = "http";  /* http or https */
static char *zRemoteAddr = 0; /* IP address of the request */
static int standalone = 0;    /* Run as a standalone server (no inetd) */
static int ipv6Only = 0;      /* Use IPv6 only */
static int ipv4Only = 0;      /* Use IPv4 only */
static int useTimeout = 1;       /* True to use times */
int hello()
{
    // insert code here...
    List list;
    ListElmt *element;

    int *data, i;
    list_init(&list, free);

    element = list_head(&list);
    i = 10;
    data = (int *)malloc(sizeof(int));
    *data = i;
    list_ins_next(&list, NULL, data);

    print_list(&list);
    printf("Hello, World google!\n");
    return 0;
}
/*
** Tell the client that the server malfunctioned.
*/
static void Malfunction(int linenum, const char *zFormat, ...){
  exit(0);
}

int count(char **a){

}

int main(int argc, const char **argv)
{
    int i;                  /* Loop counter */
    char *zPermUser = 0;    /* Run daemon with this user's permissions */
    const char *zPort = 0;  /* Implement an HTTP server process */
    int useChrootJail = 1;  /* True to use a change-root jail */
    struct passwd *pwd = 0; /* Information about the user */

    // insert code here...
    printf("Hello, World!\n");
    printf("fact 5 = ");
    printf("%d \n", fact(5));
    printf("argv address %p",argv);
    printf("argv size is %lu \n",sizeof(*argv));
    //    printf("facttail 5 = ");
    //    printf("%d \n",facttail(5,1));
    int isTrue = 0;
    isTrue = argv[1][0]=='-';
    printf("if argv[1] is %s \n", argv[1]);
    printf("if argv[2] is %s \n", argv[2]);
    printf("if argv[7] is %s \n", argv[7]);

    // return hello();
}
