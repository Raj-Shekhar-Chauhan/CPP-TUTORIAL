#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {2,3,4,5,6};
    int sz= vec.size() ;
    int target = 3;
    for(int i=0;i<sz;i++){
        if(target==vec[i]) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}