#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()
    {
        length = 10, breadth = 5;
    }

    Rectangle(int length, int breadth);

    int getArea();

    int getPerimeter();

    void setLength(int length)
    {
        this->length = length;
    }

    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }

    ~Rectangle();
};

Rectangle::Rectangle(int length, int breadth)
{
    this->length = length;
    this->breadth = breadth;
}

int Rectangle::getArea()
{
    return length * breadth;
}

int Rectangle::getPerimeter()
{
    return 2 * length * breadth;
}

Rectangle::~Rectangle()
{
//when object destroyed then this will called
}

int main()
{
    Rectangle rectangle;
    std::cout << rectangle.getArea() << std::endl;
    return 0;
}
