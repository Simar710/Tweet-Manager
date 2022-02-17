a) Name = Simardeep Singh
   username = ssingh75
   Assignment name = Assignment#4: Tweet Manager Part 2
   Course Code = CIS2500
   Date: April 7, 2021

b) How to Compile?
   Compile using the makefile and type "make" command and hit enter

   How to run?
   Run the program using ./a4

c) Every function's explanation
1. queueFunctions.c
    This file contains the enqueue, dequeue, isEmpty, printQueue. These functions are self explanatory.
    
2. miscFunctions.c
    This file contains functions which sort the queue in ascending order of their ids, username and reverse the Queue. Sort ID function is done using two nested while loops. Elements of the queue are compare and swaped accordingly. 'check' is the variable used to exit the loop whenever the queue ends. Sorting using usernames is also done in simialr fashion. In reverse function, the address fields of two nodes are swapped with each other and the pointer is moved to next node. At the end of this function, head and tail are interchanged.
    
3. testA4.c
    This is the main file, which contains the test cases to run and test the files. First the user is asked to create five tweets using createTweets function. these are are added sis by side to queue using enqueue function. Then Three sstatic nodes are added to the queue using enqueue. After that three time dequeue function is called to remove the first three elements of the queue. After this isEmpty function is tested three times. printQueue function is used side by side to verify the output. Next tests are of sorting queue using ids and then with username. Last test is to reverse the queue.
4. helper.c
    This file contains creatTweets that allows the user to create a new tweet.
d) I think my program will pass all the tests and I dont think there's any limitation.

e) I'd like to make the code more impact in the future, especially testA4.c. I think loops could have shorten the code a lot, if used.
