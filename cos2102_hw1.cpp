#include <iostream>
#include <string>
using namespace std;

class Point {
public:
    float x, y;
    string name;
    Point();
    Point(float x, float y, string name);
    ~Point();

    void setX(float x);
    void setY(float y);
    void setName(string name);

    float getX();
    float getY();
    string getName();

    void show();
};
Point::Point() {
    x = 0.0;
    y = 0.0;
    name = "default";
    cout << "Default constructor" << name << endl;
}
Point::Point(float x, float y, string name) : x(x), y(y), name(name) {
    cout << "Overloaded constructor" << name << endl;
}
Point::~Point() {
    cout << "Destructor" << name << endl;
}
void Point::setX(float x) {
    this->x = x;
}
void Point::setY(float y) {
    this->y = y;
}
void Point::setName(string name) {
    this->name = name;
}
float Point::getX() {
    return x;
}
float Point::getY() {
    return y;
}
string Point::getName() {
    return name;
}
void Point::show() {
    cout << "Point " << name << ": (" << x << ", " << y << ")" << endl;
}
int main() {
    Point defaultPoint;
    defaultPoint.show();
    Point myPoint(2.0, 3.0, "myPoint");
    myPoint.show();
    myPoint.setX(5.0);
    myPoint.setY(6.0);
    myPoint.setName("newPoint");
    myPoint.show();

    cout << "X of myPoint:" << myPoint.getX() << endl;
    cout << "Y of myPoint:" << myPoint.getY() << endl;
    cout << "Name of myPoint:" << myPoint.getName() << endl;

    return 0;
}
