#include <iostream>

/**
 * A data structure is a way to store and organize data
 * in a computer, so that it can be used efficiently.
 */
struct Node {
    int data;
    Node *next;
};

void printList(Node *node);

Node *insertFirst(Node *head, int x);

void insertLast(int x);

void insert(int x, int i);

void deleteFrom(int n);

void reverseList();

void reverse(Node *prevNode, Node *node, Node *nextNode);

void reverse(Node *node);

//for head
Node *head;

int main() {
    head = NULL;//empty list
//        head = insertFirst(head, x);
//        insertLast(x);
    insert(3, 0);//3
    insert(2, 1);//3 2
    insert(6, 0);//6 3 2
    insert(4, 2);//6 3 4 2
    insert(6, 3);//6 3 4 6 2
    insert(1, 1);//6 1 3 4 6 2
    insert(10, 4);//6 1 3 4 10 6 2
    insert(110, 0);//110 6 1 3 4 10 6 2
    printList(head);
//    reverseList();
//    reverse(NULL, head, head->next);
    reverse(head);
    printList(head);
    /*int n = -2;
    while (n != -1) {
        std::cout << "delete at: ";
        std::cin >> n;
        deleteFrom(n);
        printList(head);
    }*/
    return 0;
}

void reverse(Node *node) {
    if (node->next == NULL) {
        head = node;
        return;
    }
    reverse(node->next);
    Node *nextNode = node->next;
    nextNode->next = node;
    node->next = NULL;

}

void reverse(Node *prevNode, Node *node, Node *nextNode) {
    if (node == NULL) {
        head = prevNode;
        printList(head);
        return;
    }
    nextNode = node->next;
    node->next = prevNode;
    prevNode = node;
    node = nextNode;
    reverse(prevNode, node, nextNode);
//    std::cout << prevNode->data << " ";
}

void reverseList() {
    Node *prevNode = NULL;
    Node *node = head;
    Node *nextNode;
    while (node != NULL) {
        nextNode = node->next;
        node->next = prevNode;
        prevNode = node;
        node = nextNode;
    }
    head = prevNode;
    printList(head);
}

void deleteFrom(int n) {
    Node *node = head;
    if (n == 0) {
        head = head->next;
        free(node);
        return;
    }
    while (--n) node = node->next;
    //'node' is the previous node of deleting node
    Node *deletingNode = node->next;
    node->next = deletingNode->next;
    free(deletingNode);
}

void insert(int x, int i) {
    //assuming there is a valid index
    if (i == 0) {
        head = insertFirst(head, x);
        return;
    }
    Node *node = new Node();
    Node *temp = head;
    while (--i) {
        temp = temp->next;
    }
    node->data = x;
    node->next = temp->next;
    temp->next = node;

}

void insertLast(int x) {
    Node *node = new Node();
    node->data = x;
    node->next = NULL;
    if (head == NULL) head = node;//empty list
    else {
        Node *prevNode = head;
        while (prevNode->next != NULL) prevNode = prevNode->next;
        prevNode->next = node;
    }
}

Node *insertFirst(Node *head, int x) {
    Node *node = new Node();//memory allocation for new node
    node->next = head;
    node->data = x;
    return node;


}

void printList(Node *head) {
    std::cout << "List is : ";
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}
