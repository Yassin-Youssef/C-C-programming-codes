/*
CH-230-A
queue.c a8_p2
yassin youssef
yyoussef@constructor.university
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if(queue_is_full(pq)){
		return -1;
	}
	Node* newnode = (Node*)malloc(sizeof(Node));
	if(newnode == NULL){
		printf("error ooccured somewhere");
		return -1;
	}
	newnode->item = item;
	newnode->next = NULL;
	if(pq->items == 0){
		pq->front = newnode;
	}else{
		pq->rear->next = newnode;
	}
	pq->rear = newnode;
	pq->items = pq->items+1;
        return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if (queue_is_empty(pq)) {/*if function for if the queue is empty*/
        return -1;
    }
    /*pitem is the waiting variable*/
    *pitem = pq->front->item;
    /*reseting front pointer to next*/
    Node* temp = pq->front;
    pq->front = pq->front->next;
    free(temp);/*freeing memory*/
    if (pq->front == NULL) {
        pq->rear = NULL;
    }/*reseting the front and rear pointer to null if the last ittem removed*/
    pq->items--;/*decrementing*/
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}