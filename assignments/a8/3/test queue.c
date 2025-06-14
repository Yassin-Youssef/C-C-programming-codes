
/*
CH-230-A
testqueue.c a8_P3
yassin youssef
yyoussef@constructor.university
*/
/**
 * @file testqueue.c
 */

#include <stdio.h>

#include "queue.h"

int main() 
{
	Queue line;
	Item temp = 0;
	char ch;
	
	initialize_queue(&line);
	
	while (((ch = getchar()) != EOF) && (ch != 'q'))
	{
		switch (ch)	{
			case 'a':
				printf("add int: ");
				scanf("%d", &temp);
				if (!queue_is_full(&line))
				{
					printf("Putting %d into queue\n", temp);
					enqueue(temp, &line);
				}
				else
					puts("Queue is full");
				break;

			case 'd':
				if (queue_is_empty(&line))
					puts("Nothing to delete!");
				else
				{
					dequeue(&temp, &line);
					printf("Removing %d from queue\n", temp);
				}
				break;
			case 'p':{/*new case for printing*/
			    printf("content of queue: ");
			    printq(&line);/*calling of function*/
			}
			default:
				printf("%d items in queue\n", queue_item_count(&line));
				puts("Type a to add, d to delete, q to quit, p to print");
		}
	}	
	puts("Bye.");
	return 0;
}