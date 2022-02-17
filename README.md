# Tweet-Manager

This project is divied in two parts. Performs various complex functionalities explained below
# Part 1
1. createTweet.c
In this function, first it is checked whether memory is dynamically allocated to newNode variable or not. If memory allocation is successful then we proceed with the further process. Then it is checked whether the list is empty or not. Then the user is asked to enter the username and the tweet. If the length of username or tweet is equal to zero or exceeds the limit provided in the description, the function is ended with error message. And menu is displayed again. Then, based on the sum of ascci values of characters of username and length of the tweet, user id is calculated. If that user is previously present then new id is calculated by adding numbers from 1 to 999 until unique id is generated.

2. displayTweets.c
This function simply displays the tweet on the screen from the linked list. If the list is empty, then the function is exited and return back to main. Otherwise, while loop iterates continuously until it reaches the end of the file and keeps on printing the result.

3. searchTweetsByKeyword.c
This function begins by taking the keyword from the user, which is checked if its length is 0, then we return back to main. After that keyword is changed to lower case and stored in a variable. Then with while iterate to the end of the loop. In the loop, with each iteration text is converted to lowercase and stored in a variable. Then, using strstr first instance of keyword is found in a tweet and if matched it is being printed. If the search is successful, then return 1 otherwise return 0.

4. deleteTweet.c
First, it is checked whether the list is empty or not. If the list is not empty then the number of tweets in the list are counted. Then the user is asked to enter his choice to delete the tweet. If the choice is 1 then the tweet is directly deleted otherwise two pointers are used. The node which is to be deleted is freed.

5. saveTweetsToFile.c
First, it is checked whether the list is empty or not. If list is not emppty the file is opend for appending the list in file. While loop is used to traverse through the list. With each iteration, the data is transferred to the file in the desired format.

6. loadTweetsFromFilr.c
First file is opened for reading. Then with the while loop, go through the file line by line and add the tweets to list in desired format.

7. countStopWords.c
First, it is checked whether the list is empty or not. If list is not emppty then using some delimeters and token, iterate through the tweets and divide them in words. Side by side check if the word match any stop word. If yes, count the the stop words. The number of tweets are also counted.

8. addNodeToList.c
This functions add the node to the linked list. It is used with createTweet and loadTweetsFromTheFile functions. First it is checked that the list should not be empty. Then, the node is added by reaching at the end of the list.

# Part 2
1. queueFunctions.c
    This file contains the enqueue, dequeue, isEmpty, printQueue. These functions are self explanatory.
    
2. miscFunctions.c
    This file contains functions which sort the queue in ascending order of their ids, username and reverse the Queue. Sort ID function is done using two nested while loops. Elements of the queue are compare and swaped accordingly. 'check' is the variable used to exit the loop whenever the queue ends. Sorting using usernames is also done in simialr fashion. In reverse function, the address fields of two nodes are swapped with each other and the pointer is moved to next node. At the end of this function, head and tail are interchanged.
