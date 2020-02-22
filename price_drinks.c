/*
demonstrations about variadic function
*/

#include <stdio.h>
#include <stdarg.h>

enum drinks {
    CHANH, TAC, CAM, XOAI
};

double price (enum drinks d){
    switch (d)
    {
    case CHANH:
        return 6.9;
    case TAC:
        return 6.4;
    case CAM:
        return 13.7;
    case XOAI:
        return 12.3;

    }

    return 0;
}

double total(int argc, ...){
    va_list va;
    va_start(va, argc);
    double total = 0;
    for (int i = 0; i < argc; i++)
    {
        enum drinks d = va_arg(va, enum drinks);
        total = total + price(d);
    }
    
    va_end(va);

    return total;
}

int main(void){
    printf("Total Price: %0.2f\n", total(3, CHANH, CAM, XOAI));
    return 0;
}