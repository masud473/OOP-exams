#include <iostream>
using namespace std;
class question03
{
    int a;

public:
    question03() { a = 0; }
    question03(int n) { a = n; }
    int get() { return a; }
    friend question03 operator+(int n, const question03 &a);
    void operator[](int a)
    {
        cout << "Overloaded";
    }
};
question03 operator+(int n, const question03 &a)
{
    question03 temp;
    temp.a += a.a + n; // sequence is very important
    return temp;
}
int main()
{
    question03 o1, o2(6);
    o1 = 12 + o2;
    o1[1];
    cout << o1.get() << endl;
    return 0;
}