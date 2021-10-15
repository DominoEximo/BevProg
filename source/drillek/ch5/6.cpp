#include "../std_lib_facilities.h"

int main()
try {

	vector<int> v(10);
	v[5] = 7; //Hiba: () helyett [], if-ben ha 7-et adtunk meg v[5]-nek, csak akkor teljesül a feltétel, ha == van a != helyett.
	if(v[5] == 7)
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
