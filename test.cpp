#include <iostream>
using namespace std;
class student
{
private:
    int *roll; // pointer can store data if it's dynamically allocated
    float *cgpa;

public:
    student(int a, float b)
    {
        roll = new int(a); // dynamically allocate and store value
        cgpa = new float(b);
    }
    student(const student &other)
    {
        roll = new int(*other.roll); // dereference pointer to get value
        cgpa = new float(*other.cgpa);
    }
    student &operator=(const student &x)
    {
        if (this == &x)   // if the same then just return it
            return *this; // dereference to get object
        delete roll;
        delete cgpa;
        roll = new int(*x.roll); // dereference pointer to get value
        cgpa = new float(*x.cgpa);
        return *this;
    }
    ~student()
    {
        delete cgpa; // delete because of dynamic memory allocation
        delete roll;
        cout << "ended";
    }
};
int &val(const int x){
    static int a=x;
    return a;
}