#include <iostream>
#include <vector>

using namespace std;

// Bài 1
vector<int> use_array() {
	
	int arr[10] {0};
	arr[0] = 100;
	arr[9] = 1000;
	
	// Chuyển đổi mảng thành vector
	vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
	return v;
}

// Bài 2
vector<int> use_vector() {
	
	vector<int> vec {10, 20, 30, 40, 50};
	vec[0] = 100;
	vec[4] = 1000;
	return vec;
}

// Bài 3
int count_divisible() {
	
	vector<int> vec
	{1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
	
	int count = 0;
	for(int i : vec) {
		if(i % 3 == 0 || i % 5 == 0) {
			count++;
		}
	}
	return count;
}

// Bài 4
int calculate_pairs(vector<int> vec) {
	
	int result = 0;
	
	if(vec.size() < 2) {
		return 0;
	}
	
	for(size_t i = 0; i < vec.size(); i++) {
		for(size_t j = i+1; j < vec.size(); j++) {
			result += vec.at(i) * vec.at(j);
		} 
	}
	return result;
}
int main () {
	
	vector<int> vec = {2,4,6,8};
	int kq = calculate_pairs(vec);
	cout << "Ket qua la: " << kq << endl;
	
	return 0;
}

