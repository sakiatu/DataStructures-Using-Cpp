#include <iostream>

struct Node {
    int data;
    Node *prev;
    Node *next;
};

void insertAtHead(int i);

Node *getNewNode(int i);

void printList();

void insertAtTail(int i);

//for head
Node *head;

int main() {
    head = NULL;//empty list

    insertAtTail(33);
    insertAtTail(31);
    insertAtTail(34);
    insertAtTail(36);
    insertAtTail(37);
    insertAtTail(39);
    insertAtHead(0);
    printList();

    return 0;
}

void insertAtTail(int i) {
    Node *node = getNewNode(i);
    if (head == NULL) {
        head = node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void insertAtHead(int i) {
    Node *node = getNewNode(i);
    if (head == NULL) {
        head = node;
        return;
    }
    head->prev = node;
    node->next = head;
    head = node;
}

Node *getNewNode(int i) {
    Node *node = new Node(); //creating node in head; //function ends will not affect node
    node->data = i;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void printList() {
    Node *node = head; //creating node in stack... after the function ends node will be vanished
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
