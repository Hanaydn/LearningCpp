#include<iostream>
void fu();
void fn();
int main(int argc_, char* argv_[]){
	for(int i = 1; i < 5; i++){
		if(i < 3){
			fu();
		}
		else{
			fn();
		}
	}
	return 0;
}
void fu(){
	std::cout << "Three blind mice" << std::endl;
}
void fn(){
	std::cout << "See how they run" << std::endl;
}
