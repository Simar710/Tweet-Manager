#include "headerA4.h"
#include <stdbool.h>

//sort the queue in ascending order of tweet ids
void sortID (tweet ** head, tweet ** tail)
{
    tweet * node = NULL;
    tweet * prev = NULL;
    tweet *next = NULL;

    bool check;     //variable to exit the loop
    check = true;
    
    //Check whether queue is empty
    if(*head == NULL)
    {
        printf("Empty Queue\n");
        return;
    }
    else
    {
        while (check != false)
        {
            prev = *head;
            node = *head;
            next = (*head)->next;
            
            while (node->id <= next->id)        //iterate through the queue until the next is greater than the previous one
            {
                //move to next node
                prev = node;
                node = next;
                next = next->next;
                //if list ends, exit loop
                if (next == NULL) {
                    break;
                }
            }
            //if no smaller element than head is found till now and list doesn't reach its end
            if ((node == *head) && (next != NULL))
            {
                *head = next;
                node->next = next->next;
                next->next = node;
            }
            //if a smaller element than head is found till now and list doesn't reach its end
            else if (next != NULL)
            {
                prev->next = next;
                node->next = next->next;
                next->next = node;
            }
            //when queue reaches its end or it contains one element
            else if (next == NULL) {
                check = false;
            }
        }
    }
}
//sort according to alphabatical order of user id
void sortUsername (tweet ** head, tweet ** tail)
{
    tweet * node = NULL;
    tweet * prev = NULL;
    tweet *next = NULL;

    bool check;
    check = true;
    
    //Check whether queue is empty
    if(*head == NULL)
    {
        printf("Empty Queue\n");
        return;
    }
    else
    {
        while (check != false)
        {
            prev = *head;
            node = *head;
            next = (*head)->next;
            
            while (strcmp(node->user,next->user) <= 0)  //iterate through the queue until the next is greater than the previous one
            {
              //move to next node
                prev = node;
                node = next;
                next = next->next;
                //if list ends, exit loop
                if (next == NULL) {
                    break;
                }
            }
            //if no smaller element than head is found till now and list doesn't reach its end
            if ((node == *head) && (next != NULL))
            {
                *head = next;
                node->next = next->next;
                next->next = node;
            }
            //if a smaller element than head is found till now and list doesn't reach its end
            else if (next != NULL)
            {
                prev->next = next;
                node->next = next->next;
                next->next = node;
            }
            //when queue reaches its end or it contains one element
            else if (next == NULL) {
                check = false;
            }
        }
    }
}
        
//to reverse the queue
void reverse (tweet ** head, tweet ** tail)
{
    tweet* temp = NULL;
    tweet* current = *head;
    tweet* tempHead = NULL;
    
    if (*head == NULL)      //if queue is empty or not
    {
        printf("Empty Queue\n");
        return;
    }
    else if(*head == * tail)        //only 1 element in the queue
    {
        //swap head and tail
        temp = *head;
        *head = *tail;
        *tail = temp;
    }
    else
    {
        temp = NULL;
        while (current != NULL)
        {
            //Swap the previous and the next address fields of current node
            tempHead = current->next;
            current->next = temp;
            temp = current;
            
            //move the pointer to the next node which is stored in temp
            current = tempHead;
        }
        
        //swap head and tail
        *tail = *head;
        *head = temp;
    }
}
