#include "headerA4.h"

//function to ask user to create the node
tweet * createTweet( tweet * tweetList){
    
    tweet * head;
    head = tweetList;

    tweet *newNode;
    newNode = malloc(sizeof(tweet));
    
    int sumOfAscii;
    sumOfAscii = 0;
    
    int userid;
    userid = 0;
    
    int len1;
    len1 = 0;
    
    int len2;
    len2 = 0;
    
    int check;
    check = 1;
    
    //check if memory is allocated or not
    if (newNode == NULL)
    {
        printf("Memory not allocated\n");
        return NULL;
    }
    else
    {
        if (tweetList == NULL)      //check: list is empty or not
        {
            printf("List is empty. Let's add some data to it\n");
        }
            
        printf("Enter a username: ");
        scanf("%s", newNode->user);
        
        len1 = strlen(newNode->user);
        
        
        if (len1 == 0)      //if no username provided terminate the program
        {
            printf("User id can't be empty\n");
            return NULL;
        }
        
        if (len1 > 51)      //if length of username exceeds the limit, terminate the program
        {
            printf("Length of user id excceds the limit\n");
            return NULL;
        }
        
        printf("Enter a tweet: ");
        getchar();
        scanf("%[^\n]*c", newNode->text);
        
        len2 = strlen(newNode->text);
        
        if (len2 > 141)     //if length of tweet exceeds the limit, terminate the program
        {
            printf("Length of tweet excceds the limit\n");
            return NULL;
        }
        
        if (len2 == 0)      //if no tweet provided terminate the program
        {
            printf("Tweet text can't be empty\n");
            return NULL;
        }
        
        newNode->next = NULL;       //assign the node with null value
        
        //calculate sum of assci values of username
        for (int i = 0; i < len1; i++)
        {
            sumOfAscii = sumOfAscii + newNode->user[i];
        }
        //calculate the user id
        userid = sumOfAscii + len2;
       
        
        if (head == NULL)
        {
            newNode->id = userid;
        }
        else
        {
            while (check != 0)
            {
                while (head != NULL)    //iterate through list again and again to find same id
                {
                    if (userid == head->id)
                    {
                        userid = userid + (1 + (rand() % 999));
                        head = tweetList;   //go to start of the list
                        check = 1;
                        break;      //break the loop if match found
                    }
                    else
                    {
                        check = 0;
                        head = head->next;
                    }
                    
                }
            }
            
        }
        
        //assign the ID calculated to the id in the list
        newNode->id = userid;
        printf("Your computer generated id = %d\n", newNode->id);
        
        return newNode;
        }
}
