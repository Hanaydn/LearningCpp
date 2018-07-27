#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(int argc_, char* argv_[]){
	ifstream fin;
	fin.open("15-4rtti2.cpp");
	if(fin.is_open() == false){
		cerr << "Can't open file. Bye.\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0;
	getline(fin, item, ':');
	while(fin){
		++count;
		cout << count << ": " << item << endl;
		getline(fin, item,':');
	}
	cout << "Done\n";
	fin.close();
	return 0;
}
