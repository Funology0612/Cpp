#include <iostream>
#include <string>

using namespace std;

void display(string& str, int size)
{

    // Duyệt số hàng của tam giác: chuỗi có 3 kí tự -> 3 hàng
    for(size_t i = 0; i < str.length(); i++) {
        
        // In dấu cách đầu mỗi hàng
        for(size_t j = i; j < str.length(); j++) {
            cout << " ";
        }
        // In phần tử cho mỗi hàng 
        for(size_t j = 0; j <= i; j++) {
			cout << str[j];
        }
		
		// In phần tử đảo cho mỗi hàng 
		for(int j = i - 1; j >= 0; j--) {
			cout << str[j];
		}  
		cout << endl;
	}
}
int main()
{	string str;
	cout << "Nhap chuoi: ";
	cin >> str;
	display(str, str.length());
    return 0;
}