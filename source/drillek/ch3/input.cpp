#include "../std_lib_facilities.h"




int main(){

	cout << "Enter the name and age of the person you want to write to:\n";
	
	string first_name;
	int age;
	
	cin >> first_name >> age;
	
	
	string friend_name;
	
	char friend_sex = 0;
	
	

	
	cout << " Enter another friends name and sex(f,m): \n";
	
	cin >> friend_name >> friend_sex;
	
	
	
	cout << "Dear " << first_name << ",\n";
	cout << "How are you? I am fine. I miss you so much." << "\n" << "Last time we spoke I forgot to ask wether you liked the university you got addmitted. Mine is much better than I expected it to be." <<" Have you seen "<< friend_name << " lately?\n";
	
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
		
		
	cout << "I heard you just had a birthday and you are " << age << " years old.";
	
	if (age < 0 and age > 110)
		simple_error("You're kidding!");
	else if (age < 12)
		cout << " Next year you will be " << age+1 << ".\n";
	else if (age == 17)
		cout << " Next year you will be able to vote.\n";
	else if (age > 70)
		cout << " I hope you are enjoying retirement.\n";
	
	
	cout << "Unfortunately I've gotta go. I hope you are okay and I'm waiting your reply. " << "\n" << "Yours sincerely, ____ ____ Dávid\n"; 
	
	
	
	
	





	return 0;


}
