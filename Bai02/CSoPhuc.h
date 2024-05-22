#pragma once
#include<iostream>

using namespace std;

class CSoPhuc
{
private:
	float thuc, ao;
public:
	CSoPhuc();
	CSoPhuc(double, double);
	CSoPhuc(double);
	void Xuat();
	void operator=(CSoPhuc);
	friend CSoPhuc operator+(CSoPhuc, CSoPhuc);
	friend CSoPhuc operator-(CSoPhuc, CSoPhuc);
	friend CSoPhuc operator*(CSoPhuc, CSoPhuc);
	friend CSoPhuc operator/(CSoPhuc, CSoPhuc);
	void operator+=(const CSoPhuc&);
	void operator-=(CSoPhuc);
	void operator*=(CSoPhuc);
	void operator/=(CSoPhuc);
	CSoPhuc& operator++();//tien to
	CSoPhuc& operator--();//tien to
};

