#include <iostream>
using namespace std;
int main()
{
    int n, i;
    bool isPrime = true;
    cout << "ENTER YOUR NUMBER" << endl;
    cin >> n;

   // for (i = 2; i <= n - 1; i++) // ye old tarika h batane ka 
    for (i = 2; i*i <= n; i++) // ye new tarika h batane ka
    {
        if (n % i == 0)
        {
            isPrime == false;

            break;
        }
    }

    if (isPrime == true)
    {
        cout << n << " is a Prime number" << endl;
    }
    else
    {
        cout << n << " is not a Prime number" << endl;
    }

    return 0;
}