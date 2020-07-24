#include <iostream>

void swap(int a, int i);

void swapPro(int *pInt, int *pInt1);

void swapProMax(int &a, int &i);

void arrFunc(int *p, int n);

int *getPointer(int i);

struct Rectangle {
    int length;
    int breadth;
};

int area(Rectangle rectangle);

int area1(Rectangle &rectangle);

void changeLength(Rectangle *rectangle);

int main() {
    int a = 100, b = 50;
    swap(a, b);//pass by value
    swapPro(&a, &b);//pass by address---it uses pointer---pointer can hold addresses
    swapProMax(a, b);//pass by reference --- only for c++ --- only use for small functions
    std::cout << a << " " << b << std::endl;

    //array as parameter
    int arr[] = {1, 2, 3, 4, 5};
    arrFunc(arr, sizeof(arr) / sizeof(int));
    //using pointer
    int *pointer;
    pointer = getPointer(5);


    //structure as parameter
    Rectangle rectangle{1, 2};
    std::cout << area(rectangle) << std::endl; //pass by value
    std::cout << area1(rectangle) << std::endl; //pass by reference //check function
    changeLength(&rectangle); //pass by address
    std::cout << rectangle.length << std::endl;
    return 0;
}

void changeLength(Rectangle *rectangle) {
    rectangle->length = 99;
}

int area1(Rectangle &rectangle) {
    rectangle.length = 101;
    return rectangle.length * rectangle.breadth;
}

int area(Rectangle rectangle) {
    rectangle.length = 9;
    return rectangle.length * rectangle.breadth;
}

int *getPointer(int i) {
    int *p;
    p = (int *) (malloc(i * sizeof(int)));
    for (int j = 0; j < i; ++j) {
        p[j] = 10 + j;
    }
    return p;
}

void arrFunc(int *p, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << p[i] << std::endl;
    }
}

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swapPro(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void swapProMax(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

