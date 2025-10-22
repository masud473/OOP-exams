#include <iostream>
#include <conio.h>
using namespace std;
class tollbooth
{
private:
    unsigned int car;
    double cash;

public:
    tollbooth()
    {
        car = 0;
        cash = 0;
    }
    void payingCar()
    {
        car++;
        cash += .5;
    }
    void nopayCar()
    {
        car++;
    }
    void display() const // question asked to ensure no change so i will add const
    {
        cout << "Total cars: " << car << "\nTotal cash: " << cash << endl;
    }
};
int main(int argc, char const *argv[])
{
    tollbooth t;
    while (true)
    {
        char option;

        cout << "1. Pay(p)\n2. Non-pay(n)\n3. Esc\n";
        option = getch(); // directly get single key inputs from keyboard
        if (option == 'p')
        {
            t.payingCar();
        }
        else if (option == 'n')
        {
            t.nopayCar();
        }
        else if (option == (char)27) // 27 means escape
        {
            t.display();
            break;
        }
        system("cls");
    }

    return 0;
}
