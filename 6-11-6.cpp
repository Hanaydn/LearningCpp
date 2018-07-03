#include<iostream>
using namespace std;
struct pat_info{
	string name;
	double amount;
};
int main(int argc_, char* argv_[]){
	unsigned int contributors = 0;
	unsigned int tmp = 0;
	cout << "Enter the number of contributors:";
	cin >> contributors;
	cin.get();
	struct pat_info *pContributors = new struct pat_info[contributors];
	for(size_t i = 0; i < contributors; i++){
		cout << "Enter the name of " << i + 1 << " contributor: ";
		getline(cin,pContributors[i].name);
		cout << "Enter the amount of donation: ";
		cin >> pContributors[i].amount;
		cin.get();
	} 
	cout << "Grand Pators:" << endl;
	for(size_t i = 0; i < contributors; i++){
		if(pContributors[i].amount > 10000){
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if(tmp == 0){
		cout << "none" << endl;
	}
	tmp = 0;
	cout << "Pators:" << endl;
	for(size_t i = 0; i < contributors; i++){
		if(pContributors[i].amount < 10000){
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
		}
	}
	if(tmp == 0){
		cout << "none" << endl;
	}
	return 0;
} 
