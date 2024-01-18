#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int n) {
	
	int recursion = 0;
	while(n != 0) {
		int a = n % 10;
		recursion += a;
		n /= 10;
	}
	return recursion;
}
int main (){
	
	cout << sum_of_digits(5678) << endl;
	cout << sum_of_digits(9999) << endl;
	cout << sum_of_digits(1000) << endl;
	
	return 0;
}