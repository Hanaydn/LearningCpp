#include<iostream>
using namespace std;
template<typename T>
T max5(T in_array[]){
	T max = in_array[0];
	for(size_t i = 0; i < 5; i++){
		if(max < in_array[i]){
			max = in_array[i];
		}
	}
	return max;
}
int main(int argc_, char* argv_[]){
	int int_array[5] = {32, 43, 66, 23, 54};
	double double_array[5] = {32.4, 33.3, 61.3, 646.3, 23.5};
	int int_array_max = max5(int_array);
	double double_array_max = max5(double_array);
	cout << "max of int array: " << int_array_max << endl;
	cout << "max of double array: " << double_array_max << endl;
	return 0;
}
