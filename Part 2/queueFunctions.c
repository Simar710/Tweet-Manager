#include "headerA4.h"

//Enqueue function: adds element to the end of queue
void enqueue (tweet ** head, tweet ** tail, tweet * node)
{
    if ((*head) == NULL)    //if queue is empty then node is added to start
    {
        *head = node;
        *tail = *head;
    }
    else
    {
        (*tail)->next = node;
        *tail = node;
    }
}

//dequeue: to remove an element from the front of queue
void dequeue (tweet ** head, tweet ** tail)
{
    tweet* temp = NULL;
    if (*head == NULL)  //check if queue is empty or not
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        temp = *head;
        *head = (*head) -> next;        //move the head to second element
        
        if (*head == NULL)
        {
            *tail = NULL;
        }
        
        free(temp);
        
    }
}

// check whether queue is empty or not
int isEmpty (tweet * head)
{
    if (head == NULL)   //if list is empty 1 is returned
    {
        return 1;
    }
    else
    {
        return 0;       //if list is not empty 0 is returned
    }
}

//function to print the queue
void printQueue (tweet * head)
{
    if (head == NULL)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("%d: Created by %s: %s\n", head->id, head->user, head->text);
            head = head->next;
        }
    }
}

