/*
demonstration about pointer function
*/

#include <stdio.h>
#include <string.h>

char *ADS[] = {
    "William: SBM GSOH likes sports, TV, dining",
    "Matt: SWM NS likes art, movies, theater",
    "Luis: SLM ND likes books, theater, art",
    "Mike: DWM DS likes trucks, theater, bieber",
    "Peter: SAM likes chess, working out and art",
    "Josh: SJM likes sports, movies and theater",
    "Jed: DBM likes theater, books and dining"
    };

int sports_no_bieber(char *s){
    return strstr(s, "sports") && !strstr(s, "bieber");
}

void find(int *(match)(char *)){
    puts("Search for");
    puts("================================");
    for (int i = 0; i < 7; i++)
    {
        if (match(ADS[i]))
        {
            printf("%s\n", ADS[i]);
        }
    }
    puts("================================");
    
}

int main(void){
    find(sports_no_bieber);
    return 0;
}