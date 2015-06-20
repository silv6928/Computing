//Encapsulation (information or memory hiding)
//Object-Oriented Programming
// -Isolation of sections of code as much as possible so that errors and bugs can be easily located
// erros and bugs in one section will not propagate to others. To allow and encourage reuse of code.
//simplify the programmers task and reduce the memory load.
// 

//Inheritance is a mechanism for allowing code reuse in a controlled and efficient manner
// a subclass can have more than one parent class
// a subset inherits all the behvaior of the class , except those parts that it must modify to handle its particular problem
// the base class and its subclasses form a hierarchy with the class at the top and the subclasses below.
// furthermore, each of the subclasses may, themselves be base classes for their own subclasses, and so on, to form as deep
// a hierarchy as may be necessary for a particular application



#include <iostream>
using namespace std;

class Point {
protected:
	double _x;
	double _y;
public:
	Point(); // constructor: default or empty constructor (method too)
	Point(double x, double y); // constructor: non-default constructor (method too)
	void display(); // method
	virtual ~Point(); // destructor
};
Point::Point(){
	_x = 0;
	_y = 0;
	cout << "Point default constructor called" << endl;
}
Point::Point(double x, double y){
	_x = x;
	_y = y;
}
void Point::display(){
	cout << "x = " << _x << " y = " << _y << endl;
}

Point::~Point(){
	cout << "Point Object was destroyed!!" << "(" << _x << ", " << _y << ")" << endl;
}
class ColorPoint : public Point
{
	friend ostream& operator << (ostream& s, ColorPoint& p);
protected:
	int _color;
public:
	ColorPoint();
	virtual ~ColorPoint();
	int color();
	void setColor(int color);
	void setX(double x);
	void setY(double y);
};
ColorPoint::ColorPoint()
{
	cout << "Color Point default constructor called" << endl;
}
ColorPoint::~ColorPoint()
{
	cout << "ColorPoint destructor.";
}

int ColorPoint::color()
{
	return _color;
}
void ColorPoint::setColor(int color)
{
	_color = color;
}

void ColorPoint::setX(double x)
{
	_x = x;
}
void ColorPoint::setY(double y)
{
	_y = y;
}
ostream& operator << (ostream& s, ColorPoint& p)
{
	s << "(" << p._x << "," << p._y << "," << p._color << ")";
	return s;
}

/*int main(){
	Point p1; // constructor with no arguments -- statically created
	Point p2(5, 10); // non default constructor -- statically created

	Point* p3 = NULL; // create a pointer that will point to a Point object

	p3 = new Point(100, 200); // the object is dynamically created

	p1.display();
	p2.display();
	(*p3).display(); // because it is a pointer

	delete p3; // you have to call it for a destructor


	return 0;
}*/

int main()
{
	ColorPoint colorPoint; // a Point object is also created
	colorPoint.setX(5.5);
	colorPoint.setY(6.6);
	colorPoint.setColor(3);
	cout << colorPoint << endl;
	return 0;
}