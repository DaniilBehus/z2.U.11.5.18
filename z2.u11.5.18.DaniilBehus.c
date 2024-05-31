#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Uzol zoznamu
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// cyklicky dvojmerny zoznam
typedef struct CyclicTwoWayList {
    Node* head;
} CTWL;


// Funkcia na vytvorenie novåho uzla
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Chyba: Nepodarilo sa alokovat pamät pre nový uzol\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


