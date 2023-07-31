#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c, n;
    cout << "Please enter the number of terms :";
    cin >> n;
    cout << "Fibonacci series of " << n << " terms is: " << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << "\n";

    return 0;
}