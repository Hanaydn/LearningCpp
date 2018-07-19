#include<iostream>
using namespace std;
using namespace SALES;
int main(int argc_, char* argv_[]){
	double ar[3] = {32.1, 23.2, 65.3};
	Sales sales1(ar, 3);
	Sales sales2;
	sales1.showSales();
	sales2.showSales();
	return 0;
}
