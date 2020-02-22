/*
demonstration Pointer function
*/

#include <stdio.h>
#include <stdlib.h>

int compare_scores(const void *score_a, const void *score_b){
    int a = * (int *)score_a;
    int b = * (int *)score_b;

    return a-b;
}

int main(void){
    int scores[] = {65, 71, 13, 56, 198, 14, 84};
    qsort (scores, 7, sizeof(int), compare_scores);
    puts("Order Scores:");
    for (int i = 0; i < 7; i++)
    {
        printf("%i\t", scores[i]);
    }

    puts("");
    
    return 0;
}