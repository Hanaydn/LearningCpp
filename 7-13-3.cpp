#include<iostream>
using namespace std;
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void PrintBox(struct box mbox){
	cout << "Box maker: " << mbox.maker << endl;
	cout << "Box height: " << mbox.height << endl;
	cout << "Box width: " << mbox.width << endl;
	cout << "Box length: " << mbox.length << endl;
	cout << "Box volume: " << mbox.volume << endl;
}
void CalBoxVolume(struct box *pbox){
	pbox->volume = pbox->height * pbox->width * pbox->length;
}
int main(int argc_, char* argv_[]){
	struct box mbox = { "Jimmy Chen", 0.25, 4.0, 1.0, 0.0
	};
	PrintBox(mbox);
	CalBoxVolume(&mbox);
	PrintBox(mbox);
	return 0;
}
