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

//vytvorenie nahodneho cyklickeho dvojsmerneho zoznamu
CTWL* ctwl_create_random_bimodal(unsigned int size) {
    if (size < 3) {
        printf("Chyba: Velkost zoznamu musi byt aspon 3\n");
        return NULL;
    }

    CTWL* ctwl = (CTWL*)malloc(sizeof(CTWL));
    if (ctwl == NULL) {
        printf("Chyba: Nepodarilo sa alokovat pamat pre zoznam\n");
        return NULL;
    }
    
}
