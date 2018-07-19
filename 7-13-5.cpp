#include<iostream>
using namespace std;
long long factorial(unsigned int number){
	if(number == 0 || number == 1){
		return 1;
	}else{
		return number * factorial(number - 1); 
	}
}
int main(int argc_, char* argv_[]){
	long long result = 0;
	unsigned int input = 0;
	cout << "Please enter the number: ";
	cin >> input;
	while(1){
		result = factorial(input);
		cout << "The result of " << input << "! is " << result << "." << endl;
		cout << "Please enter the next number: ";
		cin >> input; 
	}
	return 0;
}
