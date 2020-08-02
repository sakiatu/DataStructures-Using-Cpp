#include<iostream>

#define max 10

using namespace std;

int a[max];
int front = -1, rear = -1;

//Queue (FIFO - first in first out)
void enQueue(int i);

bool isEmpty();

void deQueue();

int getFront();

void printQueue();

bool isFull();

int main() {
    enQueue(5);
    enQueue(5);
    enQueue(5);
    printQueue();

    return 0;
}

void printQueue() {
    if (!isEmpty()) {
        int i = front;
        do {
            printf("%d ", a[i]);
            i = ++i % max;
        } while (i != front);
        printf("\n");

    }
}

int getFront() {
    return a[front];
}

bool isEmpty() {
    return front == -1 && rear == -1;
}

void deQueue() {
    if (isEmpty()) printf("Queue is empty");
    else if (rear == front) front = rear = -1;
    else front = ++front % max;
}

void enQueue(int i) {
    if (isFull()) return;
    if (isEmpty()) front = 0;
    rear = (rear + 1) % max;
    a[rear] = i;
}

bool isFull() {
    return front == (rear + 1) % max;
}
