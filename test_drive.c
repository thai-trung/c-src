//implement sorting function in C

#include <stdio.h>
#include <stdlib.h>

int compare_score(const void *score_a, const void *score_b){
    int a = * (int *)score_a;
    int b = * (int *)score_b;
    return a-b;
}

int main(void)
{
    int scores[] = {131, 19, 157, 84, 172, 144, 96};
    qsort(scores, 7, sizeof(int), compare_score);
    puts("Order scores:");
    for (int i = 0; i < 7; i++)
    {
        printf("%i\t", scores[i]);
    }
    puts("");
    
    return 0;
}
