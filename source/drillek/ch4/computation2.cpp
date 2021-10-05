#include "../std_lib_facilities.h"

int main(){

	double a;
	int smallest = 100;
	int largest = 0;
	char unit;
	double cmtom = 100;
	double intocm = 2.54;
	double fttoin = 12;
	int db = 0;
	double sum = 0;
	vector<double> list;
	
	
	
	
	
	while (a >= 0){
	
		cout << "Please enter a number and it's given unit! " << "\n";
	
		cin >> a >> unit;
	
		switch(unit){
			case 'i':
				cout << a << " in = " << (a*intocm)/cmtom << " meters" << "\n";
				a = (a*intocm)/cmtom;
				break;
			case 'c':
				cout << a << " cm = " << (a/cmtom) << " meters" << "\n";
				a = (a/cmtom);
				break;
			case 'f':
				cout << a << " ft = " << ((a*fttoin)*intocm)/cmtom << " meters" << "\n";
				a = ((a*fttoin)*intocm)/cmtom;
				break;
			case 'm':
				cout << a << " meters" << "\n";
				a = a;
				break;
			default:
				cout << "The given unit is not supported.";
	
		}
	
		cout << a << " m"<< "\n";
	
		if (a < smallest){
			cout  << "the smallest so far" << "\n";
			smallest = a;}
		else if(a > largest){
			cout << "the largest so far" << "\n";
			largest = a;
			}
		sum += a;
		list.push_back(a);
		
	
	
	
	
	}
	
	cout << "The count of the numbers you gave: " << list.size()	 << "\n";
	sort(list);
	for (auto number : list){
		cout << number << " m" << "\n";
	}




	return 0;
}
