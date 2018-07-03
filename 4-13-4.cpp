#include<iostream>
#include<string>
using namespace std;
int main(int argc_, char* argv_[]){
	cout << "Enter your first name: ";
	string fname;
	cin >> fname;
	cout << "\nEnter your last name: ";
	string lname;
	cin >> lname;
	cout << "\nHere's the information in a single string: " << lname <<", " << fname << endl;
	return 0;
}
