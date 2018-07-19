#include<iostream>
#include"13-7dma.h"
using namespace std;
const int CLIMENTS = 5;
int main(int argc_, char* argv_[]){
	baseDMA * dma[CLIMENTS];
	string label;
	int rating;
	char choice;
	string color;
	string style;
	for(int i = 0; i < CLIMENTS; i++){
		cout << "Enter label: ";
		getline(cin, label);
		cout << "Enter rating: ";
		cin >> rating;
		cout << "Enter 1 for baseDMA or 2 for lacksDMA or 3 for hasDMA: ";
		while(cin >> choice && (choice != '1' && choice != '2' && choice != '3')){
			cout << "Enter 1 or 2 or 3: ";
		}
		while(cin.get() != '\n');
		if(choice == '1'){
			dma[i] = new baseDMA(label.c_str(), rating);
		}else if(choice == '2'){
			cout << "Enter color: ";
			getline(cin, color);
			dma[i] = new lacksDMA(color.c_str(), label.c_str(), rating);
		}else{
			cout << "Enter style: ";
			getline(cin, style);
			dma[i] = new hasDMA(style.c_str(), label.c_str(), rating);
		}
	}
	cout << endl;
	for(int i = 0; i < CLIMENTS; i++){
		dma[i]->View();
		cout << endl;
	}
	for(int i = 0; i < CLIMENTS; i++){
		delete dma[i];
	}
	cout << "Done.\n";
	return 0;
} 
