// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 45;

//     if (n>=0) {
//         cout << "n is postive" << endl;
//     } else {
//         cout << "n is negative" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age " << endl;
//     cin >> age;

//     if (age>=18) {
//         cout << "You can vote " << endl;
//     } else {
//         cout <<"You can not vote " << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your Number " << endl;
    cin >> n;
    if (n%2==0) {
        cout << "Your entered number is even " << endl;
    } else {
        cout << "Your entered number is odd " << endl;
    }
    return 0;
}