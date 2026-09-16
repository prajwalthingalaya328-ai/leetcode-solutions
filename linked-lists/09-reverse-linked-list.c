#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseList(struct Node* head) {
    struct Node* previous = NULL;
    struct Node* current = head;

    while (current != NULL) {
        struct Node* next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Test Case 1
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    head = reverseList(head);

    printf("Test Case 1: ");
    printList(head);

    // Test Case 2 - Edge Case
    struct Node* single = malloc(sizeof(struct Node));

    single->data = 5;
    single->next = NULL;

    single = reverseList(single);

    printf("Test Case 2: ");
    printList(single);

    free(head->next->next);
    free(head->next);
    free(head);
    free(single);

    return 0;
}