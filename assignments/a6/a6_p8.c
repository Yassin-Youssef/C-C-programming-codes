/*
CH-230-A
a6_p8.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
struct list {
    int info;
    struct list* next;
};/*the structure of the list*/

struct list* push_front(struct list* my_list, int value) {
    struct list *newel;
    newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel; 
}/*the pushingng character to front function while memory allocating*/

struct list* push_back(struct list* my_list, int value) {
    struct list *cursor, *newel;
    cursor =  my_list;
    newel = (struct list*)malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL) {
        return newel;
    }
    while(cursor->next != NULL){
        cursor = cursor->next;
    }
    cursor->next = newel; 
    return my_list;
}/*the pushing back function with memory allocating as well*/

void remove_first(struct list** my_list) {
    struct list* temp = *my_list;
    *my_list = (*my_list)->next;
    free(temp);
}/*the function for removing first number*/

void print_list(struct list* my_list) {
    while (my_list != NULL) {
        printf("%d ", my_list->info);
        my_list = my_list->next;
    }
    printf("\n");
}/*printing the list*/

void dispose_list(struct list * my_list){
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free(my_list);
        my_list = nextelem;
    }
}/*disposing of the list as in its memory*/

int main() {
    struct list* my_list;
    char c;
    int num;
    /*declaring of variables and the list*/
    while (1) {/*start of while loop until it breaks*/
        printf("Enter  a or b or r or p or q\n");
        scanf(" %c", &c);/*scanning of command for function*/
        switch (c) {/*start of the switch and its cases*/
            case 'a':{
                scanf("%d", &num);
                my_list = push_back(my_list, num);
                break;
            }/*first case of push back*/
            
            case 'b':{
                scanf("%d", &num);
                my_list = push_front(my_list, num);
                break;
            }/*second case of push front*/
            
            case 'r':{
                remove_first(&my_list);
                break;
            }
            /*third case of removing the first character*/
            
            case 'p':{
                printf("\n");
                print_list(my_list);
                printf("\n");
                break;
            }/*fourth case of printing and 2 new line characters to show list clearly*/
            
            case 'q':{
                dispose_list(my_list);
                return 0;
            }/*last case of ending code and freeing memory*/
        
            default:{
                printf("invalid command");
            }/*incase any different characters entered*/
        }
    }

    return 0;
}


