#include<iostream>
using namespace std;
int main(int argc_, char* argv_[]){
	cout << "What is your first name? ";
	char fname[20];
	cin.getline(fname, 20);
	cout << "\nWhat is your last name? ";
	char lname[20];
	cin.getline(lname, 20);
	cout << "\nWhat letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "\nWhat is your age? ";
	int age;
	cin >> age;
	cout << "\nName: " << lname << ", " << fname << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl; 
	return 0;
}
