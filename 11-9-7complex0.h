#pragma once 
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>
using namespace std;
class complex{
	public:
		complex();
		complex(double real, double imaginary);
		complex operator+(const complex & cx) const;
		complex operator-(const complex & cx) const;
		complex operator*(const complex & cx) const;
		friend complex operator~(const complex & cx);
		friend complex operator*(int x, const complex & cx);
		friend istream & operator>>(istream & is, complex & cx);
		friend ostream & operator<<(ostream & os, const complex & cx);
	private:
		double real;
		double imaginary;
};
#endif
