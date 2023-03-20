#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;



const double PI = 3.14159;

// class interface (definition)
class Circle
{
public:
// constructors
Circle(); // default constructor
Circle(const Circle &); // copy constructor

// member functions (methods)
void SetRadius(double); // modifier that sets new radius
double Area();

private:
// member variables (data)
double radius; // circle's radius
};

int main()
{
Circle myCircle; // circle object used as an example
double circleArea = 0.0; // area of the circle
double userInput = 0.0; // user input for radius of circle

cout << "Enter radius of the circle: ";
cin >> userInput;

myCircle.SetRadius(userInput);
circleArea = myCircle.Area();

cout << "The area is " << circleArea << endl << endl;

return 0;
}// end of main

// class implementation

// default constructor
Circle::Circle()
{
radius = 0.0;
}

// copy constructor
Circle::Circle(const Circle & Object)
{
radius = Object.radius;
}

// sets the radius of the circle
void Circle::SetRadius(double IncomingRadius)
{
radius = IncomingRadius;
}

// computes the area of the circle
double Circle::Area()
{
return(PI * pow(radius, 2));
}