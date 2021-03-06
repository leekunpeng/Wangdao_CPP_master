#include <iostream>

#define PI 3.141592654
using std::endl;
using std::cin;
using std::cout;

class Circle
{
public:
    Circle()
    : _radius(0)
    {}
    Circle(double r)
    : _radius(r)
    {}

    double getArea()
    {
        return _radius * _radius * PI;
    }
    double getPerimeter()
    {
        return 2 * PI * _radius;
    }

    void show()
    {
        cout<<_radius<<' '<<getPerimeter()<<' '<<getArea();
    }

private:
    double _radius;
};

int main()
{
    Circle x;
    x = 4;
    x.show();
    cout<<endl;
    return 0;
}