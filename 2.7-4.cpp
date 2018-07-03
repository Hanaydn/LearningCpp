#include<iostream>
int main(int argc_, char* argv_[]){
	int a;
	std::cout << "Enter your age:" << std::endl;
	std::cin >> a;
	std::cout << "该年龄包含" << a*12 << "个月" << std::endl;
}
