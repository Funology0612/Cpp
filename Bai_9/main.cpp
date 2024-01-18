#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string print_guest_list(const string &guest_1,const string &guest_2,const string &guest_3);

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3);

void event_guest_list() {
	
	string guest_1 {"Larry"};
	string guest_2 {"Moe"};
	string guest_3 {"Curly"};
	
	string result = print_guest_list(guest_1, guest_2, guest_3);
	cout << result << endl;
	
	clear_guest_list(guest_1, guest_2, guest_3);
	
	string result_1 = print_guest_list(guest_1, guest_2, guest_3);
	cout << result_1 << endl;
}

string print_guest_list(const string &guest_1,const string &guest_2,const string &guest_3) {
	
	string test_1 = typeid(guest_1).name(); 
	string test_2 = typeid(guest_2).name();
	string test_3 = typeid(guest_3).name();
	
	return test_1 + " " + test_2 + " " + test_3 + " ";
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3) {
	
	guest_1.clear();
	guest_2.clear();
	guest_3.clear();
	
}

int main (){
	
	event_guest_list();
	
	return 0;
}