#include "../std_lib_facilities.h"

int main()
try {

	cout << "Success!\n"; // Hiba: "Succes!\n; ( Hiányzik a string lezárása : ")
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
