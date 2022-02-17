#include "headerA3.h"

//function to delete a tweet of user's choice
void deleteTweet(tweet ** tweetList){
    
    tweet* temp;
    temp = *tweetList;
    
    tweet *nextNode;
    nextNode = *tweetList;
    
    tweet* node;
    node = *tweetList;
    
    int tweetId;
    tweetId = 0;
    
    int choice;
    choice = 0;
    
    int increament;
    increament = 0;
    
    if (*tweetList == NULL)
    {
        printf("List is already empty\n");
    }
    else
    {
        while (temp != NULL)
        {   //count the number of tweets
            increament++;
            temp = temp->next;
        }
        
        if (increament == 0)
        {
            printf("TweetList empty.\n");
            return;
        }
        else if (increament == 1)
        {
            printf("Only %d tweet present\n", increament);
            printf("To delete it: Enter 1\n");
        }
        else
        {
            printf("Currently there are %d tweets.\n", increament);
            printf("Which tweet do you wish to delete - enter a value between 1 and %d: ", increament);
        }

        //ask for user input
        scanf("%d", &choice);
        
        if (choice > increament || choice <= 0)
        {   //check if choice is valid or invalid
            printf("ERROR: print enter between 1 to 5\n");
        }
        else
        {
            nextNode = (*tweetList)->next;
            
            if (choice == 1)
            {   //to delete first node
                *tweetList = node->next;
                tweetId = node->id;
                free (node);
            }
            else if (choice == 2)
            {   //to delete second node
                node->next = nextNode->next;
                tweetId = nextNode->id;
                free(nextNode);
            }
            else
            {
                for (int i = 2; i < choice; i++)
                {
                    if(nextNode->next != NULL)
                    {
                        nextNode = nextNode->next;
                        node = node->next;
                    }
                }
                
                nextNode->next = nextNode->next;
                
                tweetId = nextNode->id;
                free(nextNode);
            }

            if (increament == 2)
            {   //when 1 tweet is left
                printf("Tweet %d deleted. There is now 1 tweet left.\n", tweetId);
            }
            else
            {
                printf("Tweet %d deleted. There are now %d tweets left.\n", tweetId, increament - 1);
            }
        }
    }
}
