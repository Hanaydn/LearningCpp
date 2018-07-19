#include<iostream>
#include<ctime>
#include<cctype>
#include<cstdlib>
#include<cmath>
#include<string>
#include"12-7queue.h"
using namespace std;
const int MIN_PER_HR = 60;
bool newcustomer(double x){
	return (rand() * x / RAND_MAX < 1);
}
int main(int argc_, char* argv_[]){
	srand(time(0));
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximun size of queue: ";
	int qs;
	cin >> qs;
	Queue line(qs);
	//直接将测试时间设置为100 
	cout << "Simulation hours: 100" << endl;
	int hours = 100;
	long cyclelimit = MIN_PER_HR * hours;
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	long wait_time = 0;
	long line_wait = 0;
	double avg_wait_time = 0.0;
	//每小时使用人数初始值为15，之后进行+1枚举测试 
	double perhour = 15;
	double min_per_cust;
	do{
		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;
		avg_wait_time = 0;
		//需要清空队列
		while(!line.isempty()){
			line.dequeue(temp);
		} 
		for(int cycle = 0; cycle < cyclelimit; cycle++){
			if(newcustomer(min_per_cust)){
				if(line.isfull()){
					turnaways++;
				}else{
					customers++;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			if(wait_time <= 0 && !line.isempty()){
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += (cycle - temp.when());
				served++;
			}
			if(wait_time > 0){
				wait_time--;
			}
			sum_line += line.queuecount();
		}
		if(customers > 0){
			cout << "customers accepted: " << customers << endl;
			cout << "  customers served: " << served << endl;
			cout << "         turnaways: " << turnaways << endl;
			cout << "average queue size: ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout << (double)sum_line / cyclelimit << endl;
			avg_wait_time = (double)line_wait / served;
			cout << " average wait time: " << avg_wait_time << " minutes\n" << endl;
		}else{
			cout << "No customers!\n" << endl;
		}
	//平均等待时间不一定刚好是1，设置在一个区间内 
	} while((perhour++) && (avg_wait_time < 0.9) || (avg_wait_time > 1.1));
	cout << "When perhour = " << perhour << " , the average wait time will be about 1 minute\n" << endl;
	cout << "Done!\n";
	return 0;
}
