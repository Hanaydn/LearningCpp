#include<iostream>
#include<string>
#include"15-2queuetp.h"
using namespace std;
int main(int argc_, char* argv_[]){
	QueueTP<string> cs(5);
	string temp;
	while(!cs.isfull()){
		cout << "Please enter your name. you will be served in the order of arrival.\n name: ";
		getline(cin, temp);
		cs.enqueue(temp);
	}
	cout << "The queue is full. Processing begins!\n";
	while(!cs.isempty()){
		cs.dequeue(temp);
		cout << "Now processing " << temp << "...\n";
	}
	return 0;
}
