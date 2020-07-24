#include <iostream>

template<class T>
class Rectangle {
private:
    T length;
    T breadth;
public:
    Rectangle(T length, T breadth);

    T getArea();

    T getPerimeter();

};

template<class T>
Rectangle<T>::Rectangle(T length, T breadth) {
    this->length = length;
    this->breadth = breadth;
}

template<class T>
T Rectangle<T>::getArea() {
    return length * breadth;
}

template<class T>
T Rectangle<T>::getPerimeter() {
    return 2 * length * breadth;
}

int main() {
    Rectangle<double> rectangle(3.4, 5.7);
    std::cout << rectangle.getArea() << std::endl;
    std::cout << rectangle.getPerimeter() << std::endl;
    return 0;
}
