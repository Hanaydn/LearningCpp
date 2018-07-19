#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<fstream>
#include"11-5vector.h"
using namespace std;
int main(int argc_, char* argv_[]){
	using VECTOR::Vector;
	string filename = "12-7bank.cpp";
	ofstream outFile;
	outFile.open(filename.c_str(), ios_base::out);
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance(q to quit): ";
	while(cin >> target){
		cout << "Enter step length: ";
		if(!(cin >> dstep)){
			break;
		}
		outFile << "Target Distance: " << target << ", " << "Step Size: " << dstep << endl;
		while(result.magval() < target){
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			step.rect_mode();
			outFile << result << endl;
		}
		outFile << "After " << steps << " steps, the subject has the following localtions:\n";
		outFile << result << endl;
		result.polar_mode();
		outFile << " or\n" << result << endl;
		outFile << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n'){
		continue;
	}
	return 0;
}
