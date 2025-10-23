#include <iostream>
using namespace std;
class Circuit
{
private:
    double real, img;

public:
    Circuit(double a, double b)
    {
        real = a, img = b;
    }
    Circuit &operator+(const Circuit &a)
    {
        this->real += a.real;
        this->img += a.img;
        return *this;
    }
    void display()
    {
        cout << real << " + " << img << "j" << endl;
    }
};
int main(int argc, char const *argv[])
{

    Circuit z1(3, 4);
    Circuit z2(5, -2);
    Circuit z3(0, 6);
    Circuit z=z1 + z2 + z3;
    z1.display();

    return 0;
}
