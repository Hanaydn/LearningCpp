#include<iostream>
void fi();
int main(int argc_, char* argv_[]){
	fi();
	return 0;
}
void fi(){
	std::cout << "Please enter a Celsius value:" << std::endl;
	int a;
	std::cin >> a;
	std::cout << a << " degrees Celsius is " << 1.8*a + 32 << " degrees Fahrenheit" << std::endl;
}
