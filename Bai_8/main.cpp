#include <iostream>
#include <cmath>

using namespace std;

int find_square_area(int a) {
	int square_area = a*a;
	return square_area;
}

double find_rectangle_area(double b, double c) {
	double rectangle_area = b*c;
	return rectangle_area;
}

void area_calc() {

	int square_area = find_square_area(2);
	double rectangle_area = find_rectangle_area(4.5, 2.3);
	
	cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

int main (){
	
	area_calc();
	
	return 0;
}