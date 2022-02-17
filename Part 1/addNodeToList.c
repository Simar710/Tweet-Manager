#include "headerA3.h"

// Function to add node to the linked list
void addNodeToList(tweet**tweetList,tweet * node){
    
    if ((*tweetList) == NULL)
    {   //if list is empty
        *tweetList = node;
    }
    else
    {
        tweet *addNode = *tweetList;
        //go to the end of the present list
        while (addNode -> next != NULL)
        {
            addNode = addNode->next;
        }
        addNode->next = node;
    }
}
