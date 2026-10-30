// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<char> vec = {'a', 'b', 'c', 'd','e'};


//     for(char val : vec) { // for each loop
//         cout << val << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    // function of vector
    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;
    vec.pop_back(); //45
    cout << "after pop back- size = " << vec.size() << endl;

    vec.front(); // vector ki first value print ker k deta h
    vec.back(); // vector ki last value print ker k deta h 
    vec.at(1); // ek particular index ki value print ker k deta h

    for(int val : vec) { // for each loop
        cout << val << endl;
    }
    return 0;
}