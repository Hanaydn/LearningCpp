#include<iostream>
#include<cstring>
using namespace std;
class golf{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		golf(const char * name, int hc);
		golf();
		void sethandicap(int hc);
		void showgolf();
};
golf::golf(const char * name, int hc){
	strncpy(fullname, name, Len);
	handicap = hc;
}
golf::golf(){
	char temp[Len] = "";
	int hand = 0;
	cout << "Please enter the full name of golf player: ";
	cin.getline(temp, Len);
	cout << "Please enter the hanicap of golf player: ";
	cin >> hand;
	cin.get();
	*this = golf(temp, hand);
}
void golf::sethandicap(int hc){
	handicap = hc;
}
void golf::showgolf(){
	cout << "golf full name: " << fullname << endl;
	cout << "golf handicap: " << handicap << endl;
}
int main(int argc_, char* argv_[]){
	golf g;
	golf g2("Jimmy", 100);
	g.showgolf();
	g.sethandicap(120);
	g.showgolf();
	g2.showgolf();
	g2.sethandicap(120);
	g2.showgolf();
	return 0;
}
