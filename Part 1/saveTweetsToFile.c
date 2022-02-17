#include "headerA3.h"

//  save tweets to file

void saveTweetsToFile(tweet* tweetList){
    
    tweet* temp;
    temp = tweetList;
    
    char file[50];
    
    if (temp == NULL)   //check if list is empty
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("Enter the filename where you would like to store your tweets: ");
        scanf("%s", file);
        
        FILE * fptr;
        fptr = fopen(file, "a");
        
        if (fptr == NULL)
        {
            printf("Error: file not found\n");
        }
        else
        {
            while(temp != NULL)
            {
                fprintf(fptr, "%d, %s, %s\n", temp->id, temp->user, temp->text);    //writing list elements to file
                temp = temp->next;
            }
        }
        
        printf("Successfully saved\n");
        fclose(fptr);   //close the file
    }
}
