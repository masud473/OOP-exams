#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
    A(int x, int y, int z)
    {
        a = x, b = y, c = z;
    }
    int geta() { return a; }
};
class B : private A // every data member will need getter function now
{
public:
    B(int x, int y, int z) : A(x, y, z) {}
    int getb() { return b; }
    int getc() { return c; }
    int geta() { return A::geta(); }
};
class C : public B
{
public:
    C(int x, int y, int z) : B(x, y, z) {}

    void Sum()
    {
        cout << geta() + getb() + getc();
    }
};
int main()
{
    C cx(10, 20, 30);
    cx.Sum();
    return 0;
}