#include<iostream>
using namespace std;
int main(int argc_, char* argv_[]){
	char ch = 0;
	while((ch = cin.get()) != '@'){
		if(isdigit(ch)){
			continue;
		}else if(islower(ch)){
			cout << (char)toupper(ch);
		}else if(isupper(ch)){
			cout << (char)tolower(ch);
		}
	}
	return 0;
}
