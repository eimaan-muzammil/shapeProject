#include <iostream>

class Shape {
protected:
    int length;
    int width;
    int height;
    int radius;

public:
    Shape(int length = 0, int width = 0, int height = 0, int radius = 0) : length{length}, width{width}, height{height}, radius{radius} { }
    virtual void calculateArea() = 0;
    virtual void display() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int length = 0, int width = 0) : Shape(length, width) {}
   
    void calculateArea() override {
        int area = length * width;
        std::cout << "Area of Rectangle: " << area << std::endl;
    }

    void display() override {
        std::cout << "Rectangle - Length: " << length << ", Width: " << width << std::endl;
    }
};

class Triangle : public Shape {
public:
    
    Triangle(int length = 0, int width = 0, int height = 0) : Shape(length, width, height) {}
    
    void calculateArea() override {
        float s = (length + width + height);
        std::cout << "Area of Triangle: " << s << std::endl;
    }

    void display() override {
        std::cout << "Triangle - Length: " << length << ", Width: " << width << ", Height: " << height << std::endl;
    }
};

class Circle : public Shape {
public:
    Circle(int radius = 0) : Shape(radius) {}
    
    void calculateArea() override {
        float area = 3.14 * radius * radius;
        std::cout << "Area of Circle: " << area << std::endl;
    }

    void display() override {
        std::cout << "Circle - Radius: " << radius << std::endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(3, 4, 5);
    Circle cir(7);

    std::cout << "Rectangle: ";
    rect.display();
    rect.calculateArea();

    std::cout << "Triangle: ";
    tri.display();
    tri.calculateArea();

    std::cout << "Circle: ";
    cir.display();
    cir.calculateArea();

    return 0;
}
