#include<iostream>
using namespace std;

void Factorial(int x)
{
int f = 1;
for(int i = 1;i<=x;i++)
    {
    f = f*i;
    }
cout<<"Factorial of "<<x<<" is : "<<f<<endl;
}

int main()
{
int a;
cout<<"Please enter a number to find it's factorial: ";
cin>>a;
Factorial(a);

return 0;
}
