#include<iostream>
#include<cstring>
using namespace std;
int main(int argc_, char* argv_[]){
	unsigned int vowels = 0;
	unsigned int consonants = 0;
	unsigned int others = 0;
	string input;
	cout << "Enter words (q to quit): " << endl;
	while((cin >> input)){
		if(input.length() == 1 && input[0] == 'q'){
			break;
		}
		if(isalpha(input[0])){
			if(input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u'){
				vowels++;
			}
			else{
				consonants++;
			}
		}else{
			others++;
		}
	}
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
	return 0;
}
