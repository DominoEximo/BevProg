#include "../std_lib_facilities.h"

int main()
try {

	string s = "ape";
	

	if(s != "fool") // Hiba: Akkor igaz a condition ha s nem egyenlo "fool"
		cout << "Success!\n";

	keep_window_open();
	return 0;
}

catch(exception& e) {
	
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}

catch(...) {

	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
