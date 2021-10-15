#include "../std_lib_facilities.h"

int main()
try {

	string s = "Success!\n"; // A string string tipusu, nem tudunk neki tipust adni, mint a vektornak.
	for(int i=0 ; i <= 10; i++)
		cout << s[i];

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
