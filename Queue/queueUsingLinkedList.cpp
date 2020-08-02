#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *link;
};

Node *head = NULL;
Node *rear = NULL;

//Queue (FIFO - first in first out)
void enQueue(int i);

bool isEmpty();

void deQueue();

int getFront();

void printQueue();

bool isFull();

int main() {
    enQueue(5);
    printQueue();
    enQueue(3);
    printQueue();
    deQueue();
    printQueue();
    enQueue(4);
    printQueue();
    enQueue(6);
    printQueue();
    deQueue();
    printQueue();
    enQueue(7);
    printQueue();
    deQueue();
    printQueue();
    enQueue(77);
    printQueue();
    deQueue();
    printQueue();
    enQueue(8);
    printQueue();
    deQueue();
    printQueue();

    return 0;
}

void printQueue() {
    if (!isEmpty()) {
        Node *node = head;
        do {
            printf("%d ", node->data);
            node = node->link;
        } while (node != NULL);
        printf("\n");

    }
}

int getFront() {
    return isEmpty() ? -1 : head->data;
}

bool isEmpty() {
    return head == NULL;
}

void deQueue() {
    if (isEmpty()) return;
    Node *temp = head;
    if (head == rear) head = rear = NULL;
    else head = head->link;
    free(temp);
}

void enQueue(int i) {
    Node *node = new Node();
    if (head == NULL) head = node;
    else rear->link = node;
    node->data = i;
    node->link = NULL;
    rear = node;
}
