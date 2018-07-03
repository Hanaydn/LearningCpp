#include<iostream>
#include<array>
using namespace std;
const int ArSize = 100;
int main(int argc_, char* argv_[]){
	array<long double, ArSize+1> factorials;
	factorials[1] = factorials[0] = 1.0;
	for(int i = 2; i < ArSize; i++){
		factorials[i] = i * factorials[i-1]; 
	}
	for(int i = 0; i <= ArSize; i++){
		cout << i << "! = " << factorials[i] << endl;
	}
	return 0;
}
