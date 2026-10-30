//WAF For prime factorization
#include <iostream>
using namespace std;

void factor(int num) {
	for(int i=2; i<=num; i++){
		while(num%i==0){
			num = num/i;
			cout << i << " ";
		}
	}
}

int main() {
	int num;
	cout << "Enter Number" << endl;
	cin >> num;
	
	factor (num);
	return 0;
}