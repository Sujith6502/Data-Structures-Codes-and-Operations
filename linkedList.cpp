#include "stdio.h"
#include "stdlib.h"

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void bubbleSort() {
    struct Node* i;
    struct Node* j;
    int temp;

    for (i = head; i->next != NULL; i = i->next) {
        printf("%d\n", i->data);
        for (j = head; j->next != NULL; j = j->next) {
            if (j->data > j->next->data) {
                printf("Greater\n");
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}

bool linearSearch(int key) {

    struct Node* temp = head;
    while (temp->next != NULL) {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }

    return temp->data == key;
}

void insertAtEnd(int value) {

    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main() {
    int n, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the value: ");
        scanf("%d", &value);
        insertAtEnd(value);
    }

    printf("Elements in linked list: ");
    struct Node* temp = head;
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

    printf("Enter element to search: ");
    scanf("%d", &value);

    if (linearSearch(value)) {
        printf("Element exists!");
    } else {
        printf("Element does not exist!");
    }

    printf("\nElements after sorting: ");
    temp = head;
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);

    return 0;
}
