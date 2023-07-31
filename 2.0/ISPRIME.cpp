#include <iostream>
using namespace std;
void isPrime(int x)

{
    if(x==0||x ==1)
    {
        cout<<x<<" is not a prime number"<<endl;
    }
    else
        {

    bool isPrime = true;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)

        cout << x << " is a prime number" << endl;

    else
        cout << x << " is not a prime number" << endl;
        }
}

int main()
{

    int a;
    cout << "Please enter a number to check prime or not : ";
    cin >> a;
    isPrime(a);

    return 0;
}
