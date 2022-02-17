#include "headerA3.h"

int main() {
    
    int choice;
    choice = 0;
    
    tweet *tweetList = NULL;
    tweet *node = NULL;
    
    node = malloc(sizeof(tweet));
    
    //print the menu
    printf("1. Create a new tweet\n");
    printf("2. Display tweets\n");
    printf("3. Search a tweet (by keyword)\n");
    printf("4. Find how many words are \"stop words\"\n");
    printf("5. Delete the nth tweet\n");
    printf("6. Save a tweet to a file\n");
    printf("7. Load tweets from a file\n");
    printf("8. Exit\n");
    
    printf("Choose a menu option: ");
    scanf("%d", &choice);
    
    //print list until exit (8) is chosen by the user
    while (choice != 8)
    {
        if (choice == 1)
        {
            node = createTweet(tweetList);
            addNodeToList(&tweetList, node);
            printf("\n");
        }
        else if (choice == 2)
        {
            displayTweets(tweetList);
            printf("\n");
        }
        else if (choice == 3)
        {
            searchTweetsByKeyword(tweetList);
            printf("\n");
        }
        else if (choice == 4)
        {
            countStopWords(tweetList);
            printf("\n");
        }
        else if (choice == 5)
        {
            deleteTweet(&tweetList);
            printf("\n");
        }
        else if (choice == 6)
        {
            saveTweetsToFile(tweetList);
            printf("\n");
        }
        else if (choice == 7)
        {
            loadTweetsFromFile(&tweetList);
            printf("\n");
        }
        else if (choice == 8)
        {
            return 0;
        }
        else
        {
            printf("Error: Please Enter Between 1-8\n");
        }
        
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet (by keyword)\n");
        printf("4. Find how many words are \"stop words\"\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Save a tweet to a file\n");
        printf("7. Load tweets from a file\n");
        printf("8. Exit\n");
        
        printf("Choose a menu option: ");
        scanf("%d", &choice);
    }
    free(node);
    return 0;
}
