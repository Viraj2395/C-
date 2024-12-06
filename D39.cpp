// Virtual Base Class in C++
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "Youe roll number is " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    int physics;
    int maths;
    int marks;

public:
    void set_marks(float M1, float M2)
    {
        physics = M1;
        maths = M2;
    }
    void print_marks(void)
    {
        cout << "You got " << physics << " in physics and "
             << maths << " in maths" << endl;
    }
};

class Sport : virtual public Student
{
protected:
    int score;

public:
    void set_score(int b)
    {
        score = b;
    }
    void print_score(void)
    {
        cout << "Your score is " << score << endl;
    }
};

class Result : public Test, public Sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "The total marks you got is " << total << endl;
    }
};

int main()
{
    Result Viraj;
    Viraj.set_marks(99.9, 89.89);
    Viraj.set_number(78);
    Viraj.set_score(10);

    Viraj.display();

    return 0;
}