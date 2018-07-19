#include<iostream>
#include"13-11-2Cd.h"
#include<cstring>
using namespace std;
void Bravo(const Cd1 & disk){
	disk.Report();
}
int main(int argc_, char* argv_[]){
	Cd1 c1("Beatles", "Capitol", 14, 35.5);
	Classic1 c2 = Classic1("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd1 *pcd = &c1;
	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();
	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	cout << "Calling a function whit a cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "Testing assignment: ";
	Classic1 copy;
	copy = c2;
	copy.Report();
	return 0;
}
