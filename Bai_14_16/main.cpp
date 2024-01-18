#include <iostream>
#include <string>

using namespace std;

// Bài 14
int findMaxElement(int *arr, int size);

int findMaxElement(int *arr, int size) {
	int maxElement = arr[0];
	for(int i = 0; i < size; i++) {
		if(arr[i] > maxElement) maxElement = arr[i];
	}
	return maxElement;
}

// Bài 15
void reverse_array(int *arr_1, int size_1) {
	
	// tạo con trỏ cấp 2: lưu trữ địa chỉ của phần tử đầu tiên của mảng arr
	int *left = arr_1; 	
	
	// tạo con trỏ cấp 2: lưu trữ địa chỉ của phần tử cuối cùng của mảng arr
	int *right = arr_1 + size_1 - 1;
 
	for(int i = 0; i < size_1/2; i++) {
		
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

// Bài 16
string reverse_string(string &str) {
	
	string reversed = str;
	int left = 0;
	int right = reversed.length() - 1;
	for(size_t i = 0; i < str.length()/2; i++) {
		char temp = reversed[left];
		reversed[left] = reversed[right];
		reversed[right] = temp;
		left++;
		right--;
	}
	return reversed;
}

int main (){
	
	int arr[] = {12, 45, 67, 23, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int maxElement = findMaxElement(arr, size);
	cout << "Gia tri lon nhat trong mang la: " << maxElement << endl;
	
	cout << "--------------------------------" << endl;
	
	int arr_1[] = {1, 2, 3, 4, 5};
	int size_1 = sizeof(arr_1) / sizeof(arr_1[0]);
	reverse_array(arr_1, size_1);
	cout << "Chuoi sau khi dao la: " << endl;
	for(int i = 0; i < size_1; i++) {
		cout << arr_1[i] << " ";
	}
	
	cout << endl;
	cout << "--------------------------------" << endl;
	
	string input = {"Hello, World!"};
	string reversed = reverse_string(input);
	cout << "Chuoi sau khi dao la: " << reversed << endl;
	return 0;
}