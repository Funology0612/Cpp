#include <iostream>

using namespace std;

void multiply_with_pointer(int *ptr, int multiplier) {
	
	if(ptr != nullptr) {
		*ptr *= multiplier;
	} else {
		cout << "Khong hop le" << endl;
	}
}

int main (){
	
	int a {10};
	int *ptr = &a;
	multiply_with_pointer(ptr,5);
	cout << *ptr << endl;
	return 0;
}