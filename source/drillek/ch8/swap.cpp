#include "../std_lib_facilities.h"


void swap_v(int a,int b){

	int temp;
	temp = a;
	a = b;
	b = temp;

	
}

void swap_r(int& a, int& b){

	int temp;
	temp = a;
	a = b;
	b = temp;

	
}
//void swap_cr(const int& a, const int& b){    // const ás & miatt nem mukodi

//	int temp;
//	temp = a;
//	a = b;
//	b = temp;

//}



int main(){

	int x = 7;
	int y = 9;
	
	swap_v(x,y);
	cout << "value of x = " << x << " value of y = " << y << endl;
	
	swap_r(x,y);
	cout << "value of x = " << x << " value of y = " << y << endl;

	const int cx = 7;
	const int cy = 9;

	// constanst nem lehet felulirni.

	//swap_r(cx,cy);
	//cout << "value of x = " << cx << " value of y = " << cy << endl;


//	double dx = 7.7;
//	double dy = 9.9;

//	swap_r(dx,dy);
//	cout << "value of x = " << dx << " value of y = " << dy << endl;
//

	return 0;
}