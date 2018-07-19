#include<iostream>
#include<cstring>
using namespace std;
class plorg{
	private:
		enum{
			LEN = 20
		};
		char fullname[LEN];
		int CI;
	public:
		plorg(char * name = "Plorga", int CI = 50);
		void setCI(int CI);
		void showPlorg();
};
plorg::plorg(char * name, int CI){
	strncpy(fullname, name, LEN);
	this->CI = CI;
}
void plorg::setCI(int CI){
	this->CI = CI;
}
void plorg::showPlorg(){
	cout << "plorg full name: " << fullname << endl;
	cout << "plorg CI: " << CI << endl;
}
int main(int argc_, char* argv_[]){
	plorg p1("Jimmy", 100);
	p1.showPlorg();
	plorg pl2;
	pl2.showPlorg();
	p1.setCI(150);
	p1.showPlorg();
	return 0;
}
