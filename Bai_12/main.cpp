#include <iostream>

using namespace std;

void swapPointers(int *ptr1, int *ptr2) {
	
	*ptr1 = *ptr1 ^ *ptr2;
	*ptr2 = *ptr1 ^ *ptr2;
	*ptr1 = *ptr1 ^ *ptr2;
}

int main (){
	
	int a {5};
	int b {10};
	int *ptr1 = &a;
	int *ptr2 = &b;
	cout << *ptr1 << " " << *ptr2 << endl;
	swapPointers(ptr1,ptr2);
	cout << *ptr1 << " " << *ptr2 << endl;
	return 0;
}