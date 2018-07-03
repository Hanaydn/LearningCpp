#include<iostream>
void fm();
int main(int argc_, char* argv_[]){
	fm();
	return 0;
}
void fm(){
	std::cout << "Enter the number of light years:" << std::endl;
	double a;
	std::cin >> a;
	double b;
	b = a*63240;
	std::cout << a << " light years = " << b << " astronomical units " << std::endl;
}
