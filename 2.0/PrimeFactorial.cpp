#include<iostream>
using namespace std;

void Factorial(int x){
    if(x==0 || x == 1)
    cout<<x<<" is not a prime number,so no factorial as per rule" <<endl;
    else
    {
        bool isPrime = true;
        for(int i = 2;i<x;i++)
            {
               if(x%i == 0)
                {
                    isPrime = false;
                }
            }
        if(isPrime)
            {
                int fact = 1;
                for(int i = 1;i<=x;i++)
                {
                    fact = fact * i;
                }
                cout<<x<<" is a prime number,so it's factorial is: "<<fact<<endl;
            }
        else
        {
            cout<<x<<" is not a prime number,so no factorial as per rule"<<endl;
        }
    }


}


int main(){
int a;
cout<<"Please enter a number: ";
cin>>a;
Factorial(a);

return 0;
}
