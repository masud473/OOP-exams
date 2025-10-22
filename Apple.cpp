#include <iostream>
using namespace std;
class Apple
{
private:
    string size;

public:
    Apple() {}
    Apple(string a)
    {
        size = a;
    }
    Apple(const Apple *a)
    {
        this->size = a->size;
    }
    Apple(const Apple &a)
    {
        this->size = a.size;
    }
};
int main()
{
    Apple ax;
    Apple ay("Big");
    Apple az(&ay);
    Apple ap(ax);
    return 0;
}