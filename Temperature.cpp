#include <bits/stdc++.h>
using namespace std;

class Temperature
{
    int temp;
    // Write codes
public:
    Temperature(int x) : temp(x) {}
    void operator++()
    {
        temp = temp + 1;
    }
    void operator--()
    {
        temp = temp - 1;
    }
    Temperature& operator+(const Temperature &x)
    {
        this->temp += x.temp;
        return *this;
    }
    void display()
    {
        cout << "Temperature: " << temp << endl;
    }
};
int main()
{
    Temperature t(20);
    ++t; // increase by 1
    --t; // decrease by 1
    t=t + t;
    t.display();
    return 0;
}