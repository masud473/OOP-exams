#include <iostream>
using namespace std;
class ACN
{
private:
    string acn, name, type;
    double amount;

public:
    void input(string a, string b, string c, double val)
    {
        acn = a, name = b, type = c;
        amount = val;
    }
    void deposit(double a)
    {
        this->amount += a;
        cout << "Deposited\n";
    }
    void withdraw(double a)
    {
        if (this->amount >= a)
        {
            this->amount -= a;
            cout << "Withdrawn\n";
        }
    }
    void display()
    {
        cout << "Balance is " << amount << endl;
    }
};
int main(int argc, char const *argv[])
{
    ACN arr[10];
    for (int i = 0; i < 10; i++)
    {
        string a, b, c;
        double val;
        cin >> a >> b >> c >> val;

        arr[i].input(a, b, c, val);
    }
    arr[2].deposit(500);
    arr[2].withdraw(300);
    arr[2].display();
    return 0;
}
// generate inputs
/*
101 John Savings 1000
102 Jane Checking 2000
103 Mike Savings 500
104 Emily Checking 1500
105 David Savings 2500
106 Sarah Checking 3000
107 Peter Savings 750
108 Anna Checking 1200
109 Robert Savings 1800
110 Laura Checking 2200
*/
