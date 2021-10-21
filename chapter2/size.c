#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int myAtoi();
/* atoi: convert s to integer; version 2 */
int myAtoi(char s[])
{
    int i, n, sign;
    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') /* skip sign */
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}
int main()
{
    size_t len;
    int a = 0;
    long double c = 3.5;
    long int b = 55;
    char *str = 0;
    char *tem = 0;
    tem = "int size is %lu, long int size %lu";
    len = strlen(tem) + 2;
    str = malloc(len);
    sprintf(str, tem, sizeof(a), sizeof(c));
    printf("double size is %lu \n", sizeof(c));

    printf("\'%s\' size is %lu \n", str, strlen(str));
    // while (*str)
    // {
    //     printf("%c\n", *str);
    //     str++;
    // }
    char *s = "when I as young s 2 3 4 5!";
    printf("%d \n", atoi(str));
    return 0;
}

