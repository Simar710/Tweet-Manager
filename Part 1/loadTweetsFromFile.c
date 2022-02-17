#include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList){
    
    char filename[] = {};
    
    tweet *newNode = NULL;
    FILE *fptr = NULL;
    
    printf("Enter a filename to load from: ");
    scanf("%s", filename);
    
    //open the file for reading
    fptr = fopen(filename, "r");
    
    if (fptr == NULL)
    {
        printf("Error: No file\n");
    }
    else
    {
        while (!feof(fptr))
        {
            newNode = malloc(sizeof(tweet));
            newNode->next = NULL;
            //adding data from sile to list
            fscanf(fptr, "%d, %[^,],%[^\n]\n", &newNode->id, newNode->user,newNode->text);
            addNodeToList(tweetList, newNode);

            
        }
        
        printf("Tweets loaded from the file\n");

        fclose(fptr);
    }
    
}
