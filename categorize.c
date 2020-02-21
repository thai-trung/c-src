/*
using data stream in c
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc != 3)
    {
        fprintf(stderr, "You need to give 3 arguments!\n");
        return 1;
    }
    
    FILE *in;
    char line[80];
    if (!(in = fopen("spooky.csv", "r")))
    {
        fprintf(stderr, "Cannot find the file.\n");
        return 1;
    }

    FILE *out = fopen(argv[2], "w");
    while (fscanf(in, "%79[^\n]\n", line)==1)
    {
        if (strstr(line, argv[1]))
        {
            fprintf(out, "%s\n", line);
        }
        
    }
    fclose(in);
    fclose(out);
    return 0;  
}