#include "headerA4.h"

int main() {
    
    //variables used in this function
    tweet *head = NULL;
    tweet *node = NULL;
    tweet *tail = NULL;
    tweet *staticNode1 = NULL;
    staticNode1 = malloc(sizeof(tweet));
    tweet *staticNode2 = NULL;
    staticNode2 = malloc(sizeof(tweet));
    tweet *staticNode3 = NULL;
    staticNode3 = malloc(sizeof(tweet));
    tweet *checkEmpty = NULL;
    tweet* temp = NULL;
    int result;
    result = 0;
    
    //Start of testing
    printf("Beginning A4 program testing...\n");
    printf("Creating initial queue list...\n");
    
    //Asking to add 5 elements to the queue
    for (int i = 0; i < 5; i++)
    {
        node = createTweet(head);
        enqueue(&head, &tail, node);
    }
    
    printf("\n");
    printf("Verifying queue contents via printQueue\n");
    printQueue(head);

    //Program will proceed after pressing enter key
    printf("\n");
    while (getchar() != '\n')
        ;
    getchar();

    //Enqueue function testing
    printf("Testing [Enqueue] function\n");
    printf("Iteration [1]: [Node]: 1000: Created by Aethur: Windblade!\n\n");

    //Static node is declared
    staticNode1->id = 1000;
    strcpy(staticNode1->user, "Aethur");
    strcpy(staticNode1->text, "Windblade!");
    staticNode1->next = NULL;
    
    enqueue(&head, &tail, staticNode1);
    printf("\nAfter enqueue, queue looks like\n");
    printQueue(head);

    printf("\n");
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("\nIteration [2]: [Node]: 5000: Created by Lumine: Starfall!\n");
    staticNode2->id = 5000;
    strcpy(staticNode2->user, "Lumine");
    strcpy(staticNode2->text, "Starfall!");
    staticNode2->next = NULL;
    
    enqueue(&head, &tail, staticNode2);
    printf("\nAfter enqueue, queue looks like\n");
    printQueue(head);

    printf("\n");
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("\nIteration [3]: [Node]: 3000: Created by Paimon: How about we explore the area ahead of us later?\n");
    staticNode3->id = 3000;
    strcpy(staticNode3->user, "Paimon");
    strcpy(staticNode3->text, "How about we explore the area ahead of us later?");
    staticNode3->next = NULL;
    
    enqueue(&head, &tail, staticNode3);
    printf("\nAfter enqueue, queue looks like\n");
    printQueue(head);

    printf("\n");
    while (getchar() != '\n')
        ;
    getchar();
    
    //Dequeue Function Testing
    printf("\nTesting [Dequeue] function\n");
    printf("Iteration [1]\n");
    dequeue(&head, &tail);
    printf("\nAfter dequeue, queue looks like\n");
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("Iteration [2]\n");
    dequeue(&head, &tail);
    printf("\nAfter dequeue, queue looks like\n");
    printQueue(head);
    
    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("Iteration [3]\n");
    dequeue(&head, &tail);
    printf("\nAfter dequeue, queue looks like\n");
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    //isEmpty function Testing
    printf("Testing [isEmpty] function\n");
    printf("Testing with list, expecting: isEmpty\n");
    result = isEmpty(head);
    if (result == 1)
    {
       printf("SUCCESS: empty list declared as empty\n");
    }
    else
    {
        printf("SUCCESS: list is not empty\n");
    }
    
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    printf("Testing with list after two dequeues, expecting: isEmpty\n");
    
    result = isEmpty(head);
    
    if (result == 1)
    {
        printf("SUCCESS: empty list declared as empty\n");
    }
    else
    {
        printf("SUCCESS: list is not empty\n");
    }
    
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("Testing with empty queue, expecting: isEmpty\n");
    
    result = isEmpty(checkEmpty);
    
    if (result == 1)
    {
        printf("SUCCESS: empty list declared as empty\n");
    }
    else
    {
        printf("SUCCESS: list is not empty\n");
    }
    
    printf("Using printQueue to verify queue contents\n");
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    //Testing SortID function
    printf("Testing [printQueue] function\n");
    printf("printQueue was used through the verification process already...\n");
    
    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    printf("Testing [ascendSortID] function\n");
    sortID(&head, &tail);
    printQueue(head);

    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    //Testing sortUsername function
    printf("\nTesting [ascendSortUsername] function\n");
    sortUsername(&head, &tail);
    printQueue(head);
    
    printf("\n");
    fflush(stdin);
    while (getchar() != '\n')
        ;
    getchar();
    
    //Testing reverseQueue function
    printf("\nTesting [reverseQueue] function\n");
    reverse(&head, &tail);
    printQueue(head);
    
    printf("Complete program testing\n");

    
    while (head != NULL)
    {
        temp = head;
        head = temp->next;
        free(temp);
    }

    return 0;
}
