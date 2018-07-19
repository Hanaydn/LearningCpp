#include<iostream>
using namespace std;
class Move{
	private:
		double x;
		double y;
	public:
		Move(double a = 0, double b = 0);
		void showmove() const;
		Move add(const Move & m) const;
		void reset(double a = 0, double b = 0);
};
Move::Move(double a, double b){
	x = a;
	y = b;
}
void Move::showmove() const{
	cout << "x = " << x << ", y = " << y << "." << endl;
}
Move Move::add(const Move & m) const{
	Move temp;
	temp.x = this->x + m.x;
	temp.y = this->y + m.y;
	return temp;
}
void Move::reset(double a, double b){
	x = a;
	y = b;
}
int main(int argc_, char* argv_[]){
	Move move1(1.1, 2.2);
	move1.showmove();
	Move move2(3.3, 4.4);
	move2.showmove();
	Move move3 = move1.add(move2);
	move3.showmove();
	move3.reset(0.1, 0.2);
	move3.showmove();
	return 0;
}
