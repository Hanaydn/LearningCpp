#include<iostream>
using namespace std;
int main(int argc_, char* argv_[]){
	int n,m,sum;
	sum = 0;
	cin >> n;
	cin >> m;
	for(int i = n; i <= m; i++){
		sum += i;
	}
	cout << sum << endl;
	return 0;
}
