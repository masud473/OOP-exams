#include <bits/stdc++.h>
using namespace std;
template <typename T>
T sum(T a, T b, T c)
{
    return a + b + c;
}
template <typename T>
class Sorting
{
public:
    void sort(T arr[], int n)
    {
        for (int i = n - 1; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                    swap(arr[j], arr[j + 1]);
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    cout << sum(10, 20, 30);
    // double array
    double arr[] = {10.5, 2.3, 5.1, 8.9, 1.2, 5.5e3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sorting<double>().sort(arr, n);
    cout << "\nSorted double array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
