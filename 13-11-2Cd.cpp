#include"13-11-2Cd.h"
#include<cstring>
using namespace std;
Cd1::Cd1(char * s1, char * s2, int n, double x){
	int performers_length = strlen(s1);
	performers = new char[performers_length + 1];
	int label_length = strlen(s2);
	label = new char[label_length + 1];
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd1::Cd1(const Cd1 & d){
	int performers_length = strlen(d.performers);
	performers = new char[performers_length + 1];
	int label_length = strlen(d.label);
	label = new char[label_length + 1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd1::Cd1(){
	int null_length = strlen("null");
	performers = new char[null_length + 1];
	label = new char[null_length + 1];
	strcpy(performers, "null");
	strcpy(label, "null");
	selections = 0;
	playtime = 0;
}
Cd1::~Cd1(){
	delete[] performers;
	delete[] label;
	performers = nullptr;
	label = nullptr;
}
void Cd1::Report() const{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}
Cd1 & Cd1::operator=(const Cd1 & d){
	delete[] performers;
	delete[] label;
	performers = nullptr;
	label = nullptr;
	int performers_length = strlen(d.performers);
	performers = new char[performers_length + 1];
	int label_length = strlen(d.label);
	label = new char[label_length + 1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
Classic1::Classic1(char * s1, char * s2, char * s3, int n, double x) : Cd1(s1, s2, n, x){
	int mainfile_length = strlen(s3);
	mainfile = new char[mainfile_length + 1];
	strcpy(mainfile, s3);
}
Classic1::Classic1(const Cd1 & d, char * s3) : Cd1(d){
	int mainfile_length = strlen(s3);
	mainfile = new char[mainfile_length + 1];
	strcpy(mainfile, s3);
}
Classic1::Classic1(const Classic1 & d) : Cd1(d){
	int mainfile_length = strlen(d.mainfile);
	mainfile = new char[mainfile_length + 1];
	strcpy(mainfile, d.mainfile);
}
Classic1::Classic1() : Cd1(){
	int null_length = strlen("null");
	mainfile = new char[null_length + 1];
	strcpy(mainfile, "null");
}
Classic1::~Classic1(){
	delete[] mainfile;
	mainfile = nullptr;
}
void Classic1::Report() const{
	Cd1::Report();
	cout << "Mainfile: " << mainfile << endl;
}
Classic1 & Classic1::operator=(const Classic1 & d){
	Cd1::operator =(d);
	delete[] mainfile;
	mainfile = nullptr;
	int mainfile_length = strlen(d.mainfile);
	mainfile = new char[mainfile_length + 1];
	strcpy(mainfile, d.mainfile);
	return *this;
}
