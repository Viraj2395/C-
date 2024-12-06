//Parameterized and Default Constructors In C++
/*#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}
int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}
*/
#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

class Point {
    int x, y; // Coordinates of the point

public:
    // Constructor to initialize the point
    Point(int a, int b) : x(a), y(b) {}

    // Method to display the point's coordinates
    void displayPoint() const {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }

    // Method to calculate the distance to another point
    double distance(const Point& other) const {
        int dx = other.x - x; // Difference in x coordinates
        int dy = other.y - y; // Difference in y coordinates
        return sqrt(dx * dx + dy * dy); // Distance formula
    }
};

int main() {
    Point p(2, 6); // Create point p with coordinates (2, 6)
    Point q(3, 7); // Create point q with coordinates (3, 7)

    p.displayPoint(); // Display point p
    q.displayPoint(); // Display point q

    // Calculate and display the distance between p and q
    double dist = p.distance(q);
    cout << "The distance between the points is " << dist << endl;

    return 0;
}
