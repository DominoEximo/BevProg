#include "../std_lib_facilities.h"

int main()
try {

	int x = 2000;
	char c = x; // karakterré való konvertálás a hiba.
	if(c == x)
		cout << "Success!";
	



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
