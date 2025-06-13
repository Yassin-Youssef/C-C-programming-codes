/*
CH-230-A
a7_p2.c
yassin youssef
yyoussef@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
/* defining list as doubly linked*/
typedef struct Node {
    char c;
    struct Node *next;
    struct Node *prev;/*addition of this part makes it doubly linked*/
} Node;
/*creating a newe node*/
Node* createnode(char c) {
    Node *newnode = (Node *)malloc(sizeof(Node));/*memory allocation of new node*/
    if (newnode){
        newnode->c = c;
        newnode->next = NULL;
        newnode->prev = NULL;/*the next and prev are null as nothing is added yet*/
    }
    return newnode;
}
/* function for adding character */
void addcharacter(Node **head, Node **tail, char c) {
    Node *newnode = createnode(c);/*the node and pointer new node is now in the newly created node*/
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }/*checking the memory allocation*/
    if (*head == NULL) { /* List is empty */
        *head = newnode;
        *tail = newnode;/*this if means that if list is empty now newnode entered is the head and tail*/
    } else {
        newnode->next = *head;/*this means that newnode accesed next which is now head*/
        (*head)->prev = newnode;
        *head = newnode;/*and the else means that the newnode is now the head*/
    }
}

/*function for removing character */
void removecharacter(Node **head, Node **tail, char c) {
    Node *current = *head;
    int found = 0;
    while (current != NULL) {
        if (current->c == c) {
            found = 1;
            Node *todelete = current;
            if (current->prev) {
                current->prev->next = current->next;
            }
            if (current->next) {
                current->next->prev = current->prev;
            }
            if (current == *head) {
                *head = current->next;
            }
            if (current == *tail) {
                *tail = current->prev;
            }
            current = current->next;
            free(todelete);
            /*collection of if statemnets to find the adress of the character chosen to remove*/
        } else {
            current = current->next;
        }
    }

    if (!found) {
        printf("the element is not in the list!\n");
    }
}

/*function to print normally*/
void printnormal(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%c ", current->c);
        current = current->next;/*since it is current->next it prints normally*/
    }
    printf("\n");
}
/*function for printing list in reverse */
void printreverse(Node *tail) {
    Node *current = tail;
    while (current != NULL) {
        printf("%c ", current->c);
        current = current->prev;/*and here since its to prev it prints in reverse*/
    }
    printf("\n");
}
/*emptying and freeing memory*/
void empty(Node **head, Node **tail) {
    Node *current = *head;
    while (current != NULL) {
        Node *todelete = current;
        current = current->next;
        free(todelete);
    }
    *head = NULL;
    *tail = NULL;
}/*this freeing array and emptying list*/

int main() {
    Node *head = NULL; /*the head at start*/
    Node *tail = NULL; /*the tail at start*/
    /*both are null since still empty*/
    int n;
    char c;

    while (1) {
        printf("enter command 1,2,3,4,5\n");
        scanf("%d", &n);
        switch (n) {
            case 1:{
                printf("enter character\n");
                scanf(" %c", &c);
                addcharacter(&head, &tail, c);
                break;
            }
            case 2:{
                printf("enter character you want removed\n");
                scanf(" %c", &c);
                removecharacter(&head, &tail, c);
                break;
            }
            case 3:{
                printnormal(head);
                break;
            }
            case 4:{
                printreverse(tail);
                break;
            }
            case 5:{
                empty(&head, &tail);
                printf("exiting prgram\n");
                return 0;
            }
            default:
                printf("invalid entry\n");
        }
    }
/*the switches for each action and in each case the function is called on so it can be done*/
    return 0;
}
