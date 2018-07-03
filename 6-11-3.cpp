#include<iostream>
using namespace std;
void showmenu();
int main(int argc_, char* argv_[]){
	showmenu();
	char choice = 0;
	bool exit = false;
	while(cin >> choice && !exit){
		switch(choice){
			case 'c': cout << "Tyrannosaurus rex is a carnivore." << endl;exit = true;break;
			case 'p': cout << "Langlang is a pianist." << endl;exit = true;break;
			case 't': cout << "A maple is a tree." << endl;exit = true;break;
			case 'g': cout << "Dota2 is a game." << endl;exit = true;break;
			default : cout << "Please enter a c, p, t or g: ";break;
		}
	}
	return 0;
}
void showmenu(){
	cout << "Please enter one of the following choices:\n"
	        "c) carnivore           p) pianist\n"
	        "t) tree                g) game\n"
	        "f\n";
}
