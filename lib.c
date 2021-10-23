#include "lib.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int myGetline(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

double myAtof(char s[])
{
    int i, sign;
    double value, power;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (value = 0.0; i<= strlen(s); i++)
    {
        if(isdigit(s[i]))
            value = 10.0 * value + (s[i] - '0');
    }
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        value = 10.0 * value + (s[i] - '0');
        power *= 10;
    }
    return sign * value / power;
    // return value;
}
