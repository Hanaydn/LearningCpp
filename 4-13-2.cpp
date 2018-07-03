#include<iostream>
using namespace std;
struct inflatable{
	string name;
	float volume;
	double price;
};
int main(int argc_, char* argv_[]){
	inflatable guest = {
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal = {
		"Audacious Arthur",
		3.12,
		32.99
	};
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}
