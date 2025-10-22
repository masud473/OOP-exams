#include <iostream>
#include <vector>
using namespace std;
class Dengue
{
private:
    string id, name, doc;
    double test = -1;
    int status = -1;

public:
    Dengue(string a, string b, string c)
    {
        id = a, name = b, doc = c;
    }
    void setTest(double val)
    {
        test = val;
        if (test <= 1.64)
        {
            status = -1;
        }
        else if (test >= 2.85)
        {
            status = 1;
        }
        else
            status = 0;
    }
    void assign(string c)
    {
        doc = c;
    }
    void patient()
    {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
    int getStatus()
    {
        return status;
    }
    void result()
    {
        cout << "IgG: " << test << " Result: ";
        if (status == -1)
        {
            cout << "Negative";
        }
        else if (status == 1)
        {
            cout << "Positive";
        }
        else
            cout << "Equivocal";
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    vector<Dengue> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        Dengue temp(a, b, c);
        double val;
        cin >> val;
        temp.setTest(val);
        v.push_back(temp);
    }
    if (v.size())
        v[0].result();
    int neg = 0, eq = 0, pos = 0;
    for (auto &i : v)
    {
        int x = i.getStatus();
        if (x == -1)
        {
            neg++;
        }
        else if (x == 1)
            pos++;
        else
            eq++;
    }
    cout << "Negative: " << neg << "\nPositive: " << pos << "\nEquivocal: " << eq << endl;
    for (auto &i : v)
    {
        if (i.getStatus() == 1)
        {
            i.patient();
            i.result();
        }
    }
    return 0;
}
// generate input of 10 for this code the names should be 1 word
/*
10
D001 John Smith 1.2
D002 Jane Jones 2.9
D003 Peter Brown 2.0
D004 Alice Smith 1.5
D005 Bob Jones 3.1
D006 Charlie Brown 1.8
D007 Diana Smith 2.5
D008 Eve Jones 1.0
D009 Frank Brown 3.5
D010 Grace Smith 2.2

*/