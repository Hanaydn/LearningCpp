#include<iostream>
#include<cstring>
#include"13-11-1Cd.h"
using namespace std;
void Bravo(const Cd & disk);
int main(int argc_, char* argv_[]){
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd *pcd = &c1;
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
	Classic copy;
	copy = c2;
	copy.Report(); 
	return 0;
}
void Bravo(const Cd & disk){
	disk.Report();
}
