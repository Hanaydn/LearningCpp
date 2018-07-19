#include<iostream>
#include<string>
using namespace std;
void fun_of_p8_1(char *str, int print_times = 0){
	cout << "String: " << str << ", print_times: " << print_times << endl;
	if(print_times > 1){
		print_times--;
		fun_of_p8_1(str, print_times);
	}
	return;
}
int main(int argc_, char* argv_[]){
	char str[128];
	int print_times = 0;
	cout << "Enter the string you want to print: ";
	cin.getline(str, 128);
	cout << "Enter the times you want to print: ";
	cin >> print_times;
	cout << "Test fun which has two prematers: " << endl;
	fun_of_p8_1(str, print_times);
	cout << "Test fun which has one premater: " << endl;
	fun_of_p8_1(str);
	return 0;
}
