#include <iostream>
using namespace std;
class A
{
    static int a;

public:
    A()
    {
        a++;
    }
    void obj()
    {
        cout << a << endl;
    }
};
int A::a = 0;
int main(int argc, char const *argv[])
{
    A a1, a2;
    a1.obj();
    return 0;
}
