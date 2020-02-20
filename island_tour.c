/*
 * Demonstration struct,heap, list link
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
}island;

island *create(char *name){
    island *node = malloc(sizeof(island));
    node->name = name;
    node->opens = "09:00";
    node->closes = "17:00";
    node->next = NULL;

    return node;
}

void display(island *start){
    island *i = start;
    for (; i !=NULL; i=i->next)
        printf("Name: %s. Open: %s-%s\n", i->name, i->opens, i->closes);
}

int main(){
   island daoga = {"Dao Ga", "09:00", "17:00", NULL};
   island daokhi = {"Dao Khi", "09:00", "17:00", NULL};
   island daorua = {"Dao Rua", "09:00", "17:00", NULL};
   island daoyen = {"Dao Yen", "09:00", "17:00", NULL};
   daoga.next = &daokhi;
   daokhi.next = &daorua;
   daorua.next = &daoyen;
   display(&daoga);

   return 0;

}
