#include<iostream>
const float a = 60.0;
int main(int argc_, char* argv_[]){
	std::cout << "Enter a latitude in degrgees, minutes, and seconds: " << std::endl;
	std::cout << "First, enter the degrees: " << std::endl;
	int b;
	std::cin >> b;
	std::cout << "Next, enter the minutes of arc: " << std::endl;
	int c;
	std::cin >> c;
	std::cout << "Finally, enter the seconds of arc: " << std::endl;
	int d;
	std::cin >> d;
	std::cout << b << " degrees," << c << " minutes," << d << " seconds, = " << b + c/a + d/a/a << " degrees"<<std::endl;
	return 0;
}
