#include<iostream>
const int a = 12;
const float b = 2.2;
const double c = 0.0254;
int main(int argc_, char* argv_[]){
	std::cout << "Enter your hight : " << std::endl;
	int hight;
	std::cin >> hight;
	float weight;
	std::cout << "Enter your weight : " << std::endl;
	std::cin >> weight;
	std::cout << "hight: " << hight * a * c << " weight: " << weight * b << std::endl;; 
	return 0;
}
