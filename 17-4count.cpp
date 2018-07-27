#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(int argc_, char* argv_[]){
	if(argc_ == 1){
		cerr << "Usage: " << argv_[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}
	ifstream fin;
	long count;
	long total = 0;
	char ch;
	for(int file = 1; file < argc_; file++){
		fin.open(argv_[file]);
		if(!fin.is_open()){
			cerr << "Could not open " << argv_[file] << endl;
			fin.clear();
			continue;
		}
		count = 0;
		while(fin.get(ch)){
			count++;
		}
		cout << count << " characters in " << argv_[file] << endl;
		total += count;
		fin.clear();
		fin.close();
	}
	cout << total << " characters in all files\n";
	return 0;
}
