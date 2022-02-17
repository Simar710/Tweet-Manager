a) Name = Simardeep Singh
   username = ssingh75
   Assignment name = Assignment#3: Dynamic Data structure (linked lists) Tweet Manager
   Course Code = CIS2500
   Date: Mar 21, 2021

b) How to Compile?
   Compile using the makefile and type "make" command and hit enter

   How to run?
   Run the program using ./a3

c) Every function's explanation
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

9. main.c

This function displays the menu. It contains while loop, which will continuously iterate until the user chooses to exit using his choice equal to 8.

d)According to me, I don't find any limitation to my programs.

e) In future, if I find any better way to do it, then I'll definitly take them into account. For now, I gave my best.
