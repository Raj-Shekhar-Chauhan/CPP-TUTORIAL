#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, oddSum = 0;
    cout << "ENTER NUMBER" << endl;
    cin >> n;

    while (i <= n)
    {

        if (i % 2 != 0)
        {
            oddSum += i;
        }
        i++;
    }
    cout << "The sum of odd numbers from 1 to " << n << " is " << oddSum << endl;
    return 0;
}