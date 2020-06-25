#include <iostream>

int main() {
//structure is making our own data type
//making
    struct Rectangle {
        int length;
        int breadth;
    };
//declaration of my variable
    struct Rectangle rect{};//int taking 2 bytes so rect taking 4 bytes
//initializing
    rect.length = 10;
    rect.breadth = 5;

//declaration and initializing simultaneously
    struct Rectangle rectangle{10, 5};

//examples
    struct Student {
        int roll;
        char name[20];
        char dept[10];
        char address[50];
    };

    Student sakib{1, "sakib", "CSE", "IUT,Gazipur"};
    std::cout << sakib.roll << std::endl;
    std::cout << sakib.name << std::endl;
    std::cout << sakib.dept << std::endl;
    std::cout << sakib.address << std::endl;

    //structure array
    Student student[]{
            {0, "sakib", "CSE", "IUT,Gazipur"},
            {1, "rana", "CSE", "IUT,Gazipur"},
            {2, "saib", "CSE", "IUT,Gazipur"},
            {3, "faziha", "CSE", "IUT,Gazipur"},
            {4, "fitrun", "CSE", "IUT,Gazipur"}
    };
    for (Student aStudent:student) {
        std::cout << aStudent.roll << std::endl;
        std::cout << aStudent.name << std::endl;
        std::cout << aStudent.dept << std::endl;
        std::cout << aStudent.address << std::endl;

    }
    return 0;
}
















