#include<iostream>
#include<cstring>
#include"12-10Chapter12.h"
using namespace std;
Cow::Cow(){
}
Cow::Cow(const char * nm, const char * ho, double wt){
	strncpy(name, nm, 20);
	int ho_length = strlen(ho);
	hobby = new char[ho_length + 1];
	strncpy(hobby, ho, ho_length);
	hobby[ho_length] = '\0';
	weight = wt;
}
Cow::Cow(const Cow & c){
	strncpy(name, c.name, 20);
	int ho_length = strlen(c.hobby);
	hobby = new char[ho_length + 1];
	strncpy(hobby, c.hobby, ho_length);
	hobby[ho_length] = '\0';
	weight = c.weight;
}
Cow::~Cow(){
	delete [] hobby;
	hobby = nullptr;
}
Cow & Cow::operator=(const Cow & c){
	strncpy(name, c.name, 20);
	int ho_length = strlen(c.hobby);
	hobby = new char[ho_length + 1];
	strncpy(hobby, c.hobby, ho_length);
	hobby[ho_length] = '\0';
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const {
	cout << "Cow name: " << name << endl;
	cout << "Cow hobby: " << hobby << endl;
	cout << "Cow weight: " << weight << endl; 
}
int main(int argc_, char* argv_[]){
	Cow cow1("hehehe", "eat", 123.4);
	Cow cow2("heihei", "drink", 321.2);
	Cow cow3(cow2);
	Cow cow4 = cow1;
	cow1.ShowCow();
	cow2.ShowCow();
	cow3.ShowCow();
	cow4.ShowCow();
	return 0;
}
