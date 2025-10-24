#include <iostream>
using namespace std;
class A
{
    static int a;

public:
    static void real()
    {
        cout << "Something";
    }
    A()
    {
        a++;
    }
    void obj()
    {
        cout << a << endl;
    }
};
int A::a = 0; // initialization is mandatory for static data members
int main(int argc, char const *argv[])
{
    A a1, a2;
    A::real(); // instance is not mandatory for static
    a1.obj();  // instance is mandatory for non-static

    return 0;
}
