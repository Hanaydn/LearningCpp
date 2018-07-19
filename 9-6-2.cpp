#include<iostream>
#include<cstring>
using namespace std;
const int ArSize = 10;
void strcount(const string str);
int main(int argc_, char* argv_[]){
	string input;
	cout << "Enter a line:\n";
	getline(cin, input);
	while(cin){
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
		if(input == ""){
			break;
		}
	}
	cout << "Bye\n";
	return 0;
}
void strcount(const string str){
	static int total = 0;
	int count = 0;
	cout << "\"" << str.c_str() << "\" contains ";
	while(str[count]){
		count++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
