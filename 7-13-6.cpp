#include<iostream>
using namespace std;
unsigned int Fill_array(double double_array[], unsigned int length){
	unsigned int n_input = 0;
	cout << "Enter double numbers (non-digital to quit): " << endl;
	for(size_t i = 0; i < length; i++){
		if(cin >> double_array[i]){
			n_input++;
		}else{
			break;
		}
	}
	return n_input;
}
void Show_array(double double_array[], unsigned int length){
	cout << "The double array is :" << endl;
	for(size_t i = 0; i < length; i++){
		cout << double_array[i] << " ";
		if((i + 1) % 5 == 0){
			cout << endl;
		}
	}
	if(length % 5 != 0){
		cout << endl;
	}
}
void Reverse_array(double double_array[], unsigned int length){
	cout << "Revert the array" << endl;
	for(size_t i = 0; i < length / 2; i++){
		double tmp = double_array[i];
		double_array[i] = double_array[length - 1 - i];
		double_array[length - 1 - i] = tmp;
	}
}
int main(int argc_, char* argv_[]){
	double double_array[10];
	unsigned int n_input;
	n_input = Fill_array(double_array, 10);
	Show_array(double_array, n_input);
	Reverse_array(double_array, n_input);
	Show_array(double_array, n_input);
	return 0;
}
