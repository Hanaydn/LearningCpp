#include<iostream>
#include<array> 
using namespace std;
int main(int argc_, char* argv_[]){
	const unsigned int SIZE = 10;
	array<double, SIZE> donation;
	unsigned int enter = 0;
	double total_value = 0.0;
	double avg = 0.0;
	unsigned int large_avg = 0;
	cout << "Please enter up to ten double value,Non-digital to exit: " << endl;
	while(enter < 10 && (cin >> donation[enter])){
		total_value += donation[enter];
		enter++;
	}
	avg = total_value / enter;
	for(unsigned int i = 0; i < enter; i++){
		if(donation[i] > avg){
			large_avg++;
		}
	}
	cout << "The average value is " << avg << ", and there are " << large_avg << "double value large than agerage value!" << endl;
	return 0;
}
