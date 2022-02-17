#include "headerA3.h"

//print tweet from the list
void displayTweets(tweet* tweetList){
    
    if (tweetList == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        while (tweetList != NULL)
        {
            printf("%d: Created by %s: %s\n", tweetList->id, tweetList->user, tweetList->text);
            tweetList = tweetList->next;
        }
    }
}
