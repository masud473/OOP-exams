#include <bits/stdc++.h>
using namespace std;
class employee
{
private:
    string emp_no, emp_name;

public:
    void accept(string a, string b)
    {
        emp_no = a, emp_name = b;
    }
    void display()
    {
        cout << emp_no << " " << emp_name << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    employee arr[5];
    for (int i = 0; i < 5; i++)
    {
        string a, b;
        cin >> a >> b;
        arr[i].accept(a, b);
    }
    for (int i = 0; i < 5; i++)
    {

        arr[i].display();
    }

    return 0;
}
// generate input for this code 
/*
101 John
102 Jane
103 Mike
104 Emily
105 David
*/
