#include "../std_lib_facilities.h"

int main()
try {

	string s = "ape";
	

	if(s != "fool") // Hiba: 2 db  string összefűzése nem ad logikai értéket.
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
