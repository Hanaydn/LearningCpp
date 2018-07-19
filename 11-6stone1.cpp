#include<iostream>
#include"11-6stonewt1.h"
using namespace std;
int main(int argc_, char* argv_[]){
	Stonewt poppins(9,2.8);
	double p_wt = poppins;
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";
	return 0;
}
