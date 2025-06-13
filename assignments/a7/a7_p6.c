/*
CH-230-A
a7_p6.c
yassin youssef
yyousef@constructor.university
*/
#include <stdio.h>
/* defining the struct*/
struct person {
    char name[30];
    int age;
};
/*function for swapping two person structures */
void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}
/*bubble sort function for sorting both by name and by age*/ 
void bubble(struct person arr[], int n, int sortname) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            int needSwap = 0;
            if (sortname) {
                /* Sorting by name */
                for (int k = 0; arr[j].name[k] != '\0' || arr[j + 1].name[k] != '\0'; k++) {
                    if (arr[j].name[k] < arr[j + 1].name[k]) {
                        needSwap = 0;/*if no swap needed*/
                        break;
                    } else if (arr[j].name[k] > arr[j + 1].name[k]) {
                        needSwap = 1; /*if swap needed*/
                        break;
                    }
                }
                /*if names are same they are sorted by age*/
                if (needSwap == 0 && arr[j].age > arr[j + 1].age) {
                    needSwap = 1; /*swap if equal*/                }
            } else {
                /* Sorting by age */
                if (arr[j].age > arr[j + 1].age) {
                    needSwap = 1; /*swap needed*/
                } else if (arr[j].age == arr[j + 1].age) {
                    /*comparing by name if age is same*/
                    for (int k = 0; arr[j].name[k] != '\0' || arr[j + 1].name[k] != '\0'; k++) {
                        if (arr[j].name[k] < arr[j + 1].name[k]) {
                            needSwap = 0;/*no swap needed*/
                            break;
                        } else if (arr[j].name[k] > arr[j + 1].name[k]) {
                            needSwap = 1;/*swap needed*/
                            break;
                        }
                    }
                }
            }
            if (needSwap) {
                swap(&arr[j], &arr[j + 1]);/*perform the swap*/
                swapped = 1;/*shows that swap occured for next line in code here*/
            }
        }
        /*makes sure swap occured if not array is sorted*/
        if (!swapped) {
            break;
        }
    }
}
/* Function for printing the list of names and ages */
void print(struct person arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", arr[i].name, arr[i].age);/*print name and age*/
    }
}
int main() {
    int n;
    printf("enter number of people to be entered\n");
    scanf("%d", &n); /* scanning the number of persons */
    struct person people[n]; /* Array of person structures */
    /*reading the name and age of each person*/
    for (int i = 0; i < n; i++) {
        printf("enter name and age of person\n");
        scanf("%s", people[i].name);
        scanf("%d", &people[i].age);
    }
    /* Sort by name */
    printf("\nordering by name\n");
    bubble(people, n, 1);/*pass one for swapping by names*/
    print(people, n);/*calling print function*/
    /* Sort by age */
    printf("\nordering by age\n");
    bubble(people, n, 0);/*pass 0 for swapping of ages*/
    print(people, n);/*calling print function*/
    return 0;
}
