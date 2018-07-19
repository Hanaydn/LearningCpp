#include<iostream>
#include"10-4stock20.h"
const int STKS = 4;
using namespace std;
int main(int argc_, char* argv_[]){
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Object", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	cout << "Stock holdings:\n";
	int st;
	for(st = 0; st < STKS; st++){
		stocks[st].show();
	}
	const Stock * top = &stocks[10];
	for(st = 1; st < STKS; st++){
		top = &top->topval(stocks[st]);
	}
	cout << "\nMost valuable holding:\n";
	top->show();
	return 0;
}
