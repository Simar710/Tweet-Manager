#include "headerA3.h"
#include <ctype.h>

//to find the tweet using keyword
int searchTweetsByKeyword(tweet* tweetList){
    
    if (tweetList == NULL)
    {
        printf("List is Empty.\n");
        return 0;
    }
    else
    {
        tweet * temp;
        temp = tweetList;
        
        int check;
        check = 0;
        int j;
        j = 0;
        
        int i = 0;
        char * checkpoint = NULL;
        char sentence[141];
        char keyword[141];
        char duplicate[141];
        
        printf("Enter a keyword to search: ");
        scanf("%s", keyword);
        
        if(strlen(keyword) == 0)    //to check if keyword is empty
        {
            printf("Length of keyword = 0. Please some keyword\n.");
            return 0;
        }
        
        strcpy (duplicate, keyword);
        
        for ( i = 0; i < strlen(keyword); i++)
        {
            keyword[i] = tolower(keyword[i]);   //convert keyword to lowecase
        }
        
        while (temp != NULL)    //iterate till the list ends
        {
            for ( j = 0; j < strlen(temp->text); j++)
            {
                    sentence[j] = tolower (temp->text[j]);  //convert sentence to lowercase
            }
            
            if(i < j)       //compare the length of keyword with tweet
            {
                checkpoint = strstr(sentence, keyword);
                
                if (checkpoint)
                {
                    printf("Match found for '%s': %s wrote: \"%s\"\n", duplicate, temp->user, tweetList->text);
                    check = 1;
                }
            }
            
            temp = temp->next;
            tweetList = tweetList->next;
        }
        
        if (check == 0)
        {
            return 0;   //if no tweet found
        }
        else
        {
            return 1;
        }
    }
}
