#include<iostream>
using namespace std;
int main(int argc_, char* argv_[]){
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;
	cout << "nights vlaue = ";
	cout << nights << ": localtion " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": localtion = " << pt << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << "double ";
	cout << "value = " << *pd << ": localtion = " << pd << endl;
	cout << "localtion of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	return 0;
}
