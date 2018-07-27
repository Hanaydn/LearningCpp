#include<iostream>
using namespace std;
double hmean(double a, double b);
int main(int argc_, char* argv_[]){
	double x, y, z;
	cout << "Enter two numbers: ";
	while(cin >> x >> y){
		try{
			z = hmean(x, y);
		}catch(const char * s){
			cout << s << endl;
			cout << "Enter a new pair of number: ";
			continue;
		}
		cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
		cout << "Enter next set of numbers <q to quit>: ";
	}
	cout << "Bye!\n";
	return 0;
}
double hmean(double a, double b){
	if (a == -b){
		throw "bad hmean() arguments: a = -b not allowed";
	}
	return 2.0 * a * b / (a + b);
}
