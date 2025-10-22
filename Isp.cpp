#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Customer
{
private:
    long long id;
    string name, address, number;
    double data;

public:
    Customer(long long id, string a, string b, string c)
    {
        this->id = id;
        name = a, address = b, number = c;
        data = 0;
    }
    void setData(double val)
    {
        data = val;
    }
    double bill()
    {
        return data * 1.5;
    }
    void getBill()
    {
        cout << "****BILL****\n"
             << "Customer ID: " << id
             << "\nName: " << name
             << "\nData used " << data
             << "\nAmount: Tk. " << bill()
             << "ABC Global Company\n";
    }
};
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<Customer> arr;
    for (int i = 0; i < n; i++)
    {
        long long id;
        string a, b, c;
        cin >> id >> a >> b >> c;
        Customer temp(id, a, b, c);
        double data;
        cin >> data;
        temp.setData(data);
        arr.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i].getBill();
    }
    double total = 0;
    for (auto i : arr)
    {
        total += i.bill();
    }
    cout << "Total income: " << total << endl;

    return 0;
}
