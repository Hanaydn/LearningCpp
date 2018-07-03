#include<iostream>
#include<cstring>
using namespace std;
int main(int argc_, char* argv_[]){
	cout << "Enter your first name: ";
	char fname[20];
	cin >> fname;
	cout << "\nEnter your last name: ";
	char lname[20];
	cin >> lname;
	cout << "\nHere's the information in a single string: " << lname <<", " << fname << endl;
	return 0;
}
