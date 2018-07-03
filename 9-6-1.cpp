#include<iostream>
#include<cstring>
using namespace std;
const int Len = 40;
struct golf{
	char fullname[Len];
	int handicap;
};
void setgolf(golf & g, const char * name, int hc){
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf & g){
	cout << "Please enter the full name of golf player: ";
	cin.getline(g.fullname, Len);
	if(strcmp(g.fullname, "") == 0){
		return 0;
	}
	cout << "Please enter the hanicap of golf player: ";
	cin >> g.handicap;
	cin.get();
	return 1;
}
void handicap(golf & g, int hc){
	g.handicap = hc;
}
void showgolf(const golf & g){
	cout << "full name of golf player: " << g.fullname << endl;
	cout << "handicap of golf player: " << g.handicap << endl;
}
void p9_1(void){
	golf g[10];
	int n = 0;
	cout << "Enter the information of golf player: " << endl;
	while((n < 10) && (setgolf(g[n]))){
		n++;
		cout << "Next golf player: " << endl;
	}
	cout << "Show all player information: " << endl;
	for(int i = 0; i < n; i++){
		showgolf(g[i]);
	}
}
