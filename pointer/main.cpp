#include <iostream>
#include <stdlib.h>//for using malloc

void setValue(int *pInt, int *pInt1);

int main() {
    //pointer is used to access heap memory or accessing the resources
    //programme can't access the data outside main function or stack
    //so it use pointer which indirectly use the data (using address of data)
    //is used for parameter passing

    int num = 10;//data variable
    int *p; //address variable --- in c++ it is called pointer

    p = &num; //p is pointing to the address of num; so address are the same

    *p = 100; //*p means dereference
    std::cout << &num << std::endl;
    std::cout << p << std::endl;

    //to get memory in heap
    p = (int *) (malloc(5 * sizeof(int))); //for C
    p = new int[5]; //for c++ | isn't it so cool ('.')

    //------------     referencing     --------------//
    //referencing  is a nickname given to a variable
    //must be initialize when declared
    int value = 10;
    int &ref = value;//variable 'value' is itself called 'ref';

    ref++;//11 and value is also 11
    //so 'ref' is another name of 'value'
    //pointer++ increases address but ref++ increases value

    //------------ structure using pointer --------------//
    struct Rectangle {
        int length;
        int breadth;
    };

    Rectangle rectangle;

    Rectangle *pointer = &rectangle;

    (*pointer).breadth = 10;//using pointer to accessing 'rectangle'
    pointer->length = 200;//accessing rectangle using pointer | should use this approach

    //-------creating a structure in heap------//
    Rectangle *rectPointer;
    rectPointer = new Rectangle;
    rectPointer->length = 10;
    rectPointer->breadth = 5;

    //changing the value itself using function and pointer
    int a = 1, b = 2;
    setValue(&a, &b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}

void setValue(int *pInt, int *pInt1) {
    *pInt = 10;
    *pInt1 = 10;
}
