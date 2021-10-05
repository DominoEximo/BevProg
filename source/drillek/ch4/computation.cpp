#include "../std_lib_facilities.h"

int main(){

	double a;
	double b;
	
	while (a != '|' or b != '|'){
	
	cout << "Please enter 2 numbers! " << "\n";
	
	cin >> a >> b ;
	
	if (a < b)
		cout << "the smaller value is: " << a << " the larger value is: " << b << "\n";
	else if (a == b)
		cout << "the numbers are equal. ";
	else
		cout << "the smaller value is: " << b << " the larger value is: " << a << "\n";
	
	if (a-b < 1.0/100 or b-a < 1.0/100)
		cout << "the numbers are almost equal. " << "\n";
	
	
	
	
	}
		




	return 0;
}
