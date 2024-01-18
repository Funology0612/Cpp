#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(int day, double penny = 0.01);

void amount_accumulated() {
	
	double total_amount = a_penny_doubled_everyday(18);
	cout << "If I start with a penny and doubled it everyday for 25 days, I will have $" << setprecision(10) << total_amount;
}

// Tính số tiền của mỗi ngày = số tiền ngày trước đó * 2
double a_penny_doubled_everyday(int day, double penny) {
	
	double amount = penny;
	for(int i = 2; i <= day; i++) {
		// amount *= 2.0;
		amount = penny * pow(2,(i-1));
	}
	function_activation_count++;
	return amount;
}

int test_function_activation_count() {
	
	return function_activation_count;
}
int main (){
	
	amount_accumulated();
	
	return 0;
}