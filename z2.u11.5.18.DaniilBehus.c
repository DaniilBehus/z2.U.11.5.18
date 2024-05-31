#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Uzol zoznamu
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Cyklicky dvojmerny zoznam
typedef struct CyclicTwoWayList {
    Node* head;
} CTWL;


// Vytvorenie novåho uzla
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

//Vytvorenie nahodneho cyklickeho dvojsmerneho zoznamu
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
    
    
    // Inicializacia generatora nahodnych cisel
    srand(time(NULL));

    ctwl->head = createNode(rand() % 100); // Pociatocna hodnota prveho uzla

    Node* current = ctwl->head;
    int i;
    for (i = 1; i < size; i++) {
        current->next = createNode(rand() % 100); // Generovanie dalsieho uzla s nahodnou hodnotou
        current = current->next;
    }
    // Spojenie posledneho uzla s prvym pre vytvorenie cyklickosti
    current->next = ctwl->head;

    return ctwl;
}


// Funkcia na vypis hodnot prvkov zoznamu
void printList(CTWL* ctwl) {
    if (ctwl == NULL || ctwl->head == NULL) {
        printf("Zoznam je prazdny\n");
        return;
    }

    printf("Hodnoty prvkov zoznamu:\n");
    Node* current = ctwl->head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != ctwl->head);
    printf("\n");
}



int main() {
    unsigned int size = 5; // Velkost zoznamu
    CTWL* ctwl = ctwl_create_random_bimodal(size);

    if (ctwl != NULL) {
        printf("Uspesne vytvoreny cyklicky dvojsmerny zoznam.\n");
        printList(ctwl); // Vypisat hodnoty prvkov zoznamu
    } else {
        printf("Nepodarilo sa vytvorit cyklicky dvojsmerny zoznam.\n");
    }

    return 0;
}
