#include <iostream>
#include <string>

using namespace std;

// Bài 5 
void cpp_strings() {
	
	string unformatted_full_name {"StephenHawking"};
	
	string full_name = unformatted_full_name.substr(0,7);
	string last_name = unformatted_full_name.substr(7);
	string formatted_full_name = full_name + last_name;
	formatted_full_name.insert(7, " ");
	cout << formatted_full_name;
}

// Bài 6
void cpp_strings_1() {
	
	string journal_entry_1 {"Issac Newton"};
	string journal_entry_2 {"Leibniz"};
	
	size_t space_position = journal_entry_1.find(' ');
	journal_entry_1.erase(0, space_position + 1);
	
	if(journal_entry_2 < journal_entry_1) {
		swap(journal_entry_1, journal_entry_2);
	}
	cout << journal_entry_1 << "\n" << journal_entry_2;
}
int main (){
	
	cpp_strings();
	cout << endl;
	cpp_strings_1();
	
	return 0;
}