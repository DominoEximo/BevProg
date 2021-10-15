#include "../std_lib_facilities.h"

int main()
try {

	cout << "Succes!\n"; // bekérni csak egy előre megadott változóhoz tudunk értéket bekérni, cin után >>.

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
