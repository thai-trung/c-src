/*
copy string in c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char s[5];
    printf("s=");
    scanf("%4s", s);
    char *t = malloc(strlen(s)+1);
    strcpy(t, s);
    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf ("%s\n",t);

    return 0;
}