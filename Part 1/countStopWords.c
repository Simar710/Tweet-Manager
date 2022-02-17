#include "headerA3.h"
//To count the stop words
void countStopWords(tweet * tweetList){
   
    if (tweetList == NULL)
    {
        printf("No use of counting stop words. List is empty.\n");
    }
    else
    {
        int count;
        count = 0;
        
        int tweetCount;
        tweetCount = 0;
        
        tweet * temp;
        temp = tweetList;
        
        char delimeters[7] = ", .!?;:";     //necessary delimeters
        
        char * token;
        
        while (temp != NULL)
        {
            token = strtok(temp->text, delimeters);     //divide the tweet into separate words
                
            while (token != NULL){
                if (strcmp(token, "a") == 0 || strcmp(token, "an") == 0 || strcmp(token, "and") == 0 || strcmp(token, "are") == 0 || strcmp(token, "as") == 0 || strcmp(token, "at") == 0 || strcmp(token, "be") == 0 || strcmp(token, "by") == 0 || strcmp(token, "for") == 0 || strcmp(token, "from") == 0 || strcmp(token, "has") == 0 || strcmp(token, "he") == 0 || strcmp(token, "in") == 0 || strcmp(token, "is") == 0 || strcmp(token, "it") == 0 || strcmp(token, "its") == 0 || strcmp(token, "of") == 0 || strcmp(token, "on") == 0 || strcmp(token, "that") == 0 || strcmp(token, "the") == 0 || strcmp(token, "to") == 0 || strcmp(token, "was") == 0 || strcmp(token, "were") == 0 || strcmp(token, "will") == 0 || strcmp(token, "with") == 0)
                {
                    count++;    //increament count if any stop word is found
                }
                token = strtok (NULL, delimeters);
            }
            tweetCount++;
            temp = temp->next;
        }
        printf("Across %d tweets, %d stop words were found.\n", tweetCount, count);

    }
}
