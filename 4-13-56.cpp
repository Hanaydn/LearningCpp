#include<iostream>
using namespace std;
struct CandyBar{
	string pinpai;
	float weight;
	int carluli;
};
int main (int argc_, char* argv_[]){
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << snack.pinpai << endl;
	cout << snack.weight << endl;
	cout << snack.carluli << endl;
	CandyBar snack6[3] = {
		{"Zxc", 3.3, 342},
		{"Zxd", 3.73, 341},
		{"Zxe", 3.63, 343}
	};
	cout << snack6[0].pinpai << " and " << snack6[0].weight << " and " << snack6[0].carluli << endl;
	cout << snack6[1].pinpai << " and " << snack6[1].weight << " and " << snack6[1].carluli << endl;
	cout << snack6[2].pinpai << " and " << snack6[2].weight << " and " << snack6[2].carluli << endl;
	return 0;
}
