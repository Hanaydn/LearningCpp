#include<iostream>
#include<string>
using namespace std;
struct pisai{
	string company;
	int length;
	int weight;
};
int main(int argc_, char* argv_[]){
	pisai  ps;
	cin >> ps.company;
	cout << ps.company << endl;
	cin >> ps.length;
	cout << ps.length << endl;
	cin >> ps.weight;
	cout << ps.weight << endl;
	return 0;
}
