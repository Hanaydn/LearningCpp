#include<iostream>
using namespace std;
int main(int argc_, char* argv_[]){
	double x, y;
	double avg = 0;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	while(x != 0 && y != 0){
		avg = 2.0 * x * y /(x + y);
		cout << "The average of " << x << " and " << y << " is " << avg << endl;
		cout << "Enter the next two numbers: ";
		cin >> x >> y;
	}
	return 0;
}
