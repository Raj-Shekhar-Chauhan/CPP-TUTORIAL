//WAF to reverse an Integer n.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int ans = 0;
//     int pow = 1;
//     cout << "Enter Integer" << endl;
//     cin >> n;

//     while(n>0) {
//         int rem = n % 10;
//         n = n/10;
//         ans += (rem*pow);
//         pow *= 10;
//     }

//     cout << ans << endl;
//     return 0;
// }

//Write a function to reverse an Integer
#include<iostream>
using namespace std;
int main(){
    int num;
    int ans=0;
    cout<<"Enter the Integer : ";
    cin>>num;
    //Count the digits first
    int countFor=num;
    int count=1;
    while(countFor/10!=0){
        countFor/=10;
        count++;
    }
    //reverse
    while(num/10!=0||num%10!=0){
        int multiply=1;
        for(int i=1;i<count;i++){
            multiply*=10;
        }
        ans+=(num%10)*multiply;
        num=num/10;
        count-=1;
    }
    cout<<ans;
}