#include<iostream>
#include<fstream>
using namespace std;
int main(int argc_, char* argv_[]){
	string FileName;
	ifstream inFile;
	unsigned int num = 0;
	char ch = 0;
	cout << "Enter the file name:";
	getline(cin,FileName);
	inFile.open(FileName.c_str());
	while((ch = inFile.get()) != EOF){
		num++;
	}
	cout << "There are " << num << " characters in " << FileName << " file." << endl;
	return 0;
}
