#include<iostream>
#include<cstring>
using namespace std;
struct CandyBar{
	char company[128];
	double weight;
	int heat;
};
void print_CandyBar(const struct CandyBar &candybar){
	cout << "CandyBar company: " << candybar.company << endl;
	cout << "CandyBar weight: " << candybar.weight << endl;
	cout << "CandyBar heat: " << candybar.heat << endl;
}
void fill_CandyBar(struct CandyBar &candybar, char *company, double weight, int heat){
	strcpy(candybar.company, company);
	candybar.weight = weight;
	candybar.heat = heat;
}
int main(int argc_, char* argv_[]){
	struct CandyBar candybar = {""
	};
	char company[128];
	double weight = 0.0;
	int heat = 0;
	cout << "Enter the company of candybar: ";
	cin.getline(company, 128);
	cout << "Enter the weight of candybar: ";
	cin >> weight;
	cout << "Enter the heat of candybar: ";
	cin >> heat;
	fill_CandyBar(candybar, company, weight, heat);
	print_CandyBar(candybar);
	return 0;
}
