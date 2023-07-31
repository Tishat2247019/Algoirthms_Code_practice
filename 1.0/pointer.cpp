/* #include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *t;
    t = &a;
    int **b = &t;

    cout << *t << endl;
    cout << t << endl;
    cout << &b << endl;
    return 0;
} */

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Hello world" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    cout << "Hellow maddam \n";
    int *a = new int[10];
    int ab = 0;
    cout << "Please enter the elements of the array :";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        ab = ab + a[i];
    }
    cout << "sum of the element of the array :" << ab << endl;
    return 0;
    cout << "Sum of the element of the array is: " << ab << endl;
    cout << "Sum of the element of the array is: " << ab << endl;
    cout << "Sum of the element of the array is: " << ab << endl;
    cout << "Sum of the element of the array is: " << ab << endl;
}