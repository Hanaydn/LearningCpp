#include<iostream>
#include<cstring>
using namespace std;
class BankCount{
	private:
		string fullname;
		string banknumber;
		long balance;
	public:
		BankCount(){}
		BankCount(string fullname, string banknumber, long balance);
		void ShowBankCount();
		int Deposit(long deposit);
		int WithDrawals(long withdrawals);
};
BankCount::BankCount(string fullname, string banknumber, long balance){
	this->fullname = fullname;
	this->banknumber = banknumber;
	this->balance = balance;
}
void BankCount::ShowBankCount(){
	cout << "BankCount full name: " << fullname << endl;
	cout << "BankCount number: " << banknumber << endl;
	cout << "BankCount balance: " << balance << endl;
}
int BankCount::Deposit(long deposit){
	this->balance += deposit;
	return 1;
}
int BankCount::WithDrawals(long withdrawals){
	this->balance -= withdrawals;
	return 1;
}
void p10_1(void){
	BankCount MyBankCount("Jimmy", "1234567", 10000);
	cout << "Original BankCount: " << endl;
	MyBankCount.ShowBankCount();
	cout << endl;
	cout << "After Deposit 5000: " << endl;
	MyBankCount.Deposit(5000);
	MyBankCount.ShowBankCount();
	cout << endl;
	cout << "After withdrawals 5000: " << endl;
	MyBankCount.WithDrawals(5000);
	MyBankCount.ShowBankCount();
}
