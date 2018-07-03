#include<iostream>
#include<string>
using namespace std;
struct pisai{
	string company;
	int length;
	int weight;
};
int main (int argc_, char* argv_[]){
	pisai * ps = new pisai;
	cin >> (*ps).company;
	cin >> ps->length;
	cin >> ps->weight;
	cout << (*ps).company << endl;
	cout << (*ps).length << endl;
	cout << (*ps).weight << endl;
	return 0;
}
