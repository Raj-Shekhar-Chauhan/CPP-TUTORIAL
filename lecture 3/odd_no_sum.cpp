#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int oddSum = 0;
    cout << "ENTER NUMBER" << endl;
    cin >> n;

    // print even numbers
    // for (i = 1; i <= n; i++)
    // {
    //     if ( i%2 == 0) {
    //         cout << i << " ";
    //     }
    // }
    // return 0;

    // print odd numbers
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            
            oddSum += i;
        }
    }

    cout << "odd sum = " << oddSum << endl;
    return 0;
}