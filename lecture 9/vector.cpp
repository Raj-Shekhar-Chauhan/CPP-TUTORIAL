#include <iostream> 
#include <vector>
using namespace std;

int main() {
    // vector<int> vec; //0 //this the first way of writing vector
    //vector<int> vec = {1, 2, 3}; // second way of writing vectors
    vector<int> vec(5,0); // parenthesis me left wala size h aur right wala value h 
    cout << vec[0] << endl; 
    cout << vec[1] << endl; 
    cout << vec[2] << endl; 
    cout << vec[3] << endl; 
    cout << vec[4] << endl; 

    return 0;
}