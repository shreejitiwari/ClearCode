#include <iostream>

using namespace std;

class Polygon {
    protected: int height,
    width;
    public: void set_values(int x, int y) {
        width = x;
        height = y;
    }
    int area() {
        return 0;
    }
};

class Rectangle: public Polygon {
    public: int area() {
        return width * height;
    }
};

class Triangle: public Polygon {
    public: int area() {
        return (width * height / 2);
    }
};

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    // Polygon * ppoly1 = & rect;
    // Polygon * ppoly2 = & trgl;
    // Polygon * ppoly3 = & poly;

    // ppoly1 -> set_values(10, 20);
    // ppoly2 -> set_values(10, 20);
    // ppoly3 -> set_values(10, 20);

    Polygon &r = rect;
    Polygon &tr = trgl;

    // rect.set_values(10,20);
    // trgl.set_values(10,20);

    // cout<<"Area of rectangle = "<<rect.area()<<endl;
    // cout<<"Area of triangle = "<<trgl.area()<<endl;



    r.set_values(10,20);
    tr.set_values(10,20);

    cout<<"Area of rectangle = "<<r.area()<<endl;
    cout<<"Area of triangle = "<<tr.area()<<endl;


    return 0;
    // cout << "Area of Rectangle is: " << ppoly1 -> area() << '\n';
    // cout << "Area of Triangle is: " << ppoly2 -> area() << '\n';
    // cout << "Area of Polygon is: " << ppoly3 -> area() << '\n';


}