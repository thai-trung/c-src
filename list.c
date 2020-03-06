/*
data structure in c
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    
    list[0] = 11;
    list[1] = 12;
    list[2] = 13;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }
    list = tmp;
    tmp[3] = 14;  
    for (int i = 0; i < 6; i++)
    {
        printf("%i\n", * (list+i));
    }
    
}