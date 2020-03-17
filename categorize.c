//implement file stream
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc != 3)
    {
        fprintf(stderr, "You need give 3 arguments!\n");
        return 1;
    }

    FILE *in;
    if (!(in = fopen("spooky.csv", "r")))
    {
        fprintf(stderr, "Cannot find the file!\n");
        return 1;
    }

    FILE *out = fopen(argv[2], "w");
    char line[80];
    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, argv[1]))
        {
            fprintf(out, "%s\n", line);
        }
        
    }

    return 0; 
}