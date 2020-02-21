/*
the command line arguments
*/

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int thick =0;
    char *delivery = "";
    char ch;
    while ((ch = getopt(argc, argv, "d:t"))!=EOF)
    {
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1;
            break;
        
        default:
            fprintf(stderr, "Unknow argument: %s\n", optarg);
            return 1;
        }
    }

    argc -= optind;
    argv += optind;
    if (thick)
        puts("Thick crust!");
    if (delivery[0])
    {
        printf("To be deliveried: %s\n", delivery);
    }
    puts("Ingredients!");
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }

    return 0;    
}