#include "../std_lib_facilities.h"

int main()
try {

	string s = "Success!\n";
	for(int i = 0; i < 8 ; ++i)
		cout << s[i]; // betűnként írja ki ezért a cikluson kivülre tettem az uj sort és 8-ig menjen, hogy mindent kiírjon.

	cout << "\n";
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
