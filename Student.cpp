#include <iostream>
using namespace std;
class Person
{
private:
    int nid;
    string name;

public:
    Person(int a, string x)
    {
        nid = a;
        name = x;
    }
    void Display()
    {
        cout << "NID: " << nid << endl;
        cout << "Name: " << name << endl;
    }
};
class Student : public Person
{
    string dept;

public:
    Student(int a, string x, string y) : Person(a, x), dept(y) {}
    void Display()
    {
        Person::Display();
        cout << "Dept: " << dept << endl;
    }
};
int main()
{
    Student s(100, "John", "CSE");
    s.Display();
    return 0;
}
