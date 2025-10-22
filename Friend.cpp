#include <iostream>
using namespace std;
class B;
class A
{
private:
    int data = 23;

    friend void sum(A a, B b);
};
class B
{
private:
    int data = 35;

    friend void sum(A a, B b);
};
void sum(A a, B b)
{
    cout << a.data + b.data;
}

int main(int argc, char const *argv[])
{
    A a;
    B b;
    sum(a, b);
    return 0;
}
