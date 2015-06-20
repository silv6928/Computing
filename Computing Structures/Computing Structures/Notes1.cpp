//#include <iostream>
//using namespace std;

/*
// pass by copy functions with myVal and val
// creates more variables
// add & to "int val" => "int& val" for Pass by reference
void changeFunc(int& val)
{
	cout << "val = " << val << endl;
	val = val * 2;
	cout << "now val = " << val << endl;

}

int main(){

	int myVal = 10;
	cout << "myVal = " << myVal << endl;
	changeFunc(myVal);
	cout << "now myVal = " << myVal << endl;

	return 0;
}
*/

// Pass by Reference example

/*void myswap(int&, int&); //function prototype

int main(){
	int x = 100;
	int y = 300;

	cout << "Before Swap x = " << x << "; y = " << y << endl;
	myswap(x,y);
	cout << " After Swap x = " << x << "; y = " << y << endl;
	return 0;
}

void myswap(int& x, int& y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}*/
// If else statements
/*
int main(){
	int x;
	cout << "Please enter a number --> ";
	cin >> x;
	if (x >= 90)
		cout << "You made an A" << endl;
	else if ((x >= 80) && (x < 90))
		cout << "You made a B" << endl;
		else if ((x >= 70) && (x < 80))
			cout << "You made a C" << endl;
			else
				cout << "You need to take the course again" << endl;

	return 0;
}*/
// Using switch

/*int main(){
	char x;

	cout << "Please enter a character ==> ";
	cin >> x;

	switch (x){
		case 'A':  {
						cout << "You scored greater than or equal to 90" << endl;
						break;
					}
		case 'B': {
						cout << "You scored greater than or euqal to 80 and less than 90" << endl;
						break;
					}
		default: cout << "Better improve your grades" << endl;
		return 0;
	}
}*/
// conditional statements: for loops, while, do while
//int main(){
	
	/*for (int i = 1; i < 11; i++){
		cout << "i = " << i << endl;
		for (int j = 1; j < 3; j++)
			cout << "j = " << j << " and i*j = " << i*j << endl;
	}*/

	// while statement
	/*int i = 0;
	while (i < 10)
	{
		cout << i << " ";
		i++;
	}*/
	// do while loop
	/*int i = 10;
	do{
		cout << "i = " << i << endl;
		i--;
	} while (i > 0);

	cout << "The value of i after the loop is " << i << endl;




	return 0;
}*/
	// Classes and methods: which are like functions
/*class Tester
{
public:
	static int classVar; // static allows it to be shared amongst all instances
	int instanceVar;
};*/

/*class Tester
{
protected:
	static int classVar;
	int instanceVar;
public:
	void setInstance(int v);
	void printInstance();
	void static printClass(); // can access only static fields

};
int Tester::classVar = 999;

void Tester::setInstance(int v)
{
	instanceVar = v;
}

void Tester::printInstance()
{
	cout << instanceVar << endl;
}

void Tester::printClass()
{
	cout << classVar << endl;
}

void printInstance();
	int main(){

		Tester tester1; // creating an instance of Tester
		Tester tester2;

		//tester1.instanceVar = 20;
		tester2.instanceVar = 40;
		cout << "Instance 1: " << tester1.instanceVar << end1;
		cout << "Instance 2: " << tester2.instanceVar << endl;
		cout << "Class through instance: " << tester1.classVar << endl;
		//cout << "Class: " << Tester::classVar << endl;

		tester1.setInstance(20);
		tester2.setInstance(40);
		tester1.printInstance();
		tester2.printInstance();
		tester1.printClass();
		tester2.printClass();



		return 0;
	}*/
/*
class Point{
protected:
	double _x;
	double _y;
public:
	Point(); // constructor: default or empty constructor (method too)
	Point(double x, double y); // constructor: non-default constructor (method too)
	void display(); // method
	virtual ~Point();
};
Point::Point(){
	_x = 0;
	_y = 0;
}
Point::Point(double x, double y){
	_x = x; 
	_y = y;
}
void Point::display(){
	cout << "x = " << _x << " y = " << _y << endl;
}

Point::~Point(){
	cout << "Point Object was destroyed!!"  << "("<< _x << ", " << _y << ")" << endl;
}

int main(){
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
// Pointers
/*int main()
{
	int iVal1 = 10;
	int iVal2 = 20;
	int* pInt = NULL; // pointer to int but doesnt point to anything yet

	cout << iVal1 << endl;
	cout << iVal2 << endl;
	pInt = &iVal1;
	*pInt = 50; // now pInt contains the address of the memory referred to by iVal1
	//changing value of *pInt will change the value of iVal1

	cout << "The value of pInt = " << pInt << endl;
	cout << iVal1 << endl;

	pInt = &iVal2;

	*pInt = -10; // same as the situation with iVal1, *pInt and iVal2 are the same

	cout << iVal2 << endl;
	cout << *pInt << endl;

	cout << "The value of pInt = " << pInt << endl;

	return 0;
}*/
